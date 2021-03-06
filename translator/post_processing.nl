###
# (c) Atinea Sp. z o.o.
###


use ptd;
use nlasm;
use array;
use ov;
use hash;
use flow_graph;
use unnecessary_commands;
use interpreter;
use const_evaluator;
use post_processing_t;
use register_cleaner;

def get_command_for_const() : @post_processing_t::math_funs_t {
	var ret = {};
	hash::set_value(ref ret, 'arr_decl', true);
	hash::set_value(ref ret, 'hash_decl', true);
	hash::set_value(ref ret, 'func', true);
	hash::set_value(ref ret, 'load_const', true);
	hash::set_value(ref ret, 'ov_mk', true);
	return ret;
}

def post_processing::init(mat_fun_def : ptd::hash(ptd::int()), o : @post_processing_t::optimization_t) : 
	@post_processing_t::state_t {
	var state = {nl_asm => {}, fun_calls => {}, math_fs => {}};
	state->mat_fun_def = mat_fun_def;
	state->optimization = o;
	state->const_com = get_command_for_const();
	state->interpreter_state = interpreter::init([], {});
	return state;
}

def post_processing::clear_module_from_state(ref state : @post_processing_t::state_t, module : ptd::string()) {
	hash::delete(ref state->nl_asm, module);
	hash::delete(ref state->fun_calls, module);
}

def post_processing_labels(ref nlasms : ptd::hash(@nlasm::result_t)) {
	var ret = {};
	forh var name, var module (nlasms) {
		var mod : @nlasm::result_t = module;
		rep var i (array::len(mod->functions)) {
			delete_unused_labels_com(ref mod->functions[i]->commands);
			recalculate_labels_com(ref mod->functions[i]->commands);
		}
		hash::set_value(ref ret, name, mod);
	}
	nlasms = ret;
}

def delete_unnecessary_commands(ref nlasms : ptd::hash(@nlasm::result_t)) {
	var ret = {};
	forh var name, var module (nlasms) {
		var mod : @nlasm::result_t = module;
		rep var i (array::len(mod->functions)) {
			unnecessary_commands::delete_unnecessary_commands(ref mod->functions[i]);
		}
		hash::set_value(ref ret, name, mod);
	}
	nlasms = ret;
}


def post_processing::find(ref state : @post_processing_t::state_t, ref nlasms : ptd::hash(@nlasm::result_t)) {
	post_processing_labels(ref nlasms);
	return if (state->optimization is :o0);
	set_function_calls(ref state->fun_calls, nlasms);
	var math_fs = get_math_fun(state->fun_calls, state->mat_fun_def);
	forh var name, var module (nlasms) {
		hash::set_value(ref state->nl_asm, name, module);
	}
	var changed_functions = {};
	match (state->optimization) case :o0 {
	} case :o1 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
	} case :o2 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
		set_const_commands_in_modules(ref state, changed_functions, ref nlasms, state->const_com, math_fs);
	} case :o3 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
		set_const_commands_in_modules(ref state, changed_functions, ref nlasms, state->const_com, math_fs);
		delete_unnecessary_commands(ref nlasms);
	} case :o4 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
		set_interpreted_changed_functions(state, math_fs, ref changed_functions);
		const_evaluator::evaluate_const_in_modules(ref state, changed_functions, ref nlasms, math_fs);
		delete_unnecessary_commands(ref nlasms);
		register_cleaner::clean_registers(ref nlasms);
	}
	post_processing_labels(ref nlasms);
	state->math_fs = math_fs;
}

def set_const_commands_in_modules(ref state : @post_processing_t::state_t, changed_functions : ptd::hash(ptd::string()), ref 
	new_modules_results : ptd::hash(@nlasm::result_t), const_com : @post_processing_t::math_funs_t, math_fs : 
	@post_processing_t::math_funs_t) {
	fora var mod_n (hash::keys(state->nl_asm)) {
		var module = hash::get_value(state->nl_asm, mod_n);
		var change_mod = false;
		rep var i (array::len(module->functions)) {
			var fun = module->functions[i];
			var f_key = mod_n . (fun->access is :pub ? '::' : '_priv::') . fun->name;
			if (hash::has_key(changed_functions, f_key)) {
				change_mod = true;
				var blocks : @flow_graph::blocks_t = flow_graph::make_blocks(fun->commands, fun->args_type);
				set_const_reg(ref blocks, math_fs, module->module_name, array::len(fun->registers));
				var coms = flow_graph::combine_blocks(blocks);
				rep var j (array::len(coms)) {
					var com = coms[j];
					if (!hash::has_key(const_com, ov::get_element(com->cmd))) {
						if (com->annotation is :const) {
							coms[j]->annotation = :none;
						}
					}
				}
				fun->commands = coms;
				module->functions[i] = fun;
			}
		}
		continue unless change_mod;
		hash::set_value(ref state->nl_asm, mod_n, module);
		hash::set_value(ref new_modules_results, mod_n, module);
	}
}

def set_const_block(number : ptd::int(), ref blocks : @flow_graph::blocks_t, math_fs : @post_processing_t::math_funs_t, 
	ref state : @post_processing_t::const_reg_t, mod_name : ptd::string(), regs : ptd::arr(@post_processing_t::reg_const)) {
	var block = blocks[number];
	if (state[number]->was > 0) {
		var diff = false;
		var oregs = state[number]->regs;
		rep var i (array::len(regs)) {
			if (oregs[i] is :no) {
				regs[i] = :no;
				continue;
			} else {
				if (regs[i] is :yes) {
					var a = regs[i] as :yes;
					var b = oregs[i] as :yes;
					continue if (a == b);
				}
				regs[i] = :no;
				diff = true;
			}
		}
		return unless diff;
		state[number]->regs = regs;
	} else {
		state[number]->regs = regs;
	}
	state[number]->was++;
	var cmds = block->cmds;
	rep var i (array::len(cmds)) {
		var info = [];
		var set_c = [];
		var const : @post_processing_t::reg_const = :yes(i + block->from->reg_no);
		match (cmds[i]->cmd) case :arr_decl(var arr_decl) {
			fora var one (arr_decl->src) {
				check_sub(ref const, regs[one->reg_no], ref info);
			}
			regs[arr_decl->dest->reg_no] = const unless nlasm::is_empty(arr_decl->dest);
			array::push(ref set_c, arr_decl->dest);
		} case :hash_decl(var hash_decl) {
			fora var one (hash_decl->src) {
				check_sub(ref const, regs[one->val->reg_no], ref info);
			}
			regs[hash_decl->dest->reg_no] = const unless nlasm::is_empty(hash_decl->dest);
			array::push(ref set_c, hash_decl->dest);
		} case :empty_hash_decl(var hash_decl) {
			regs[hash_decl->dest->reg_no] = const unless nlasm::is_empty(hash_decl->dest);
			array::push(ref set_c, hash_decl->dest);
		} case :call(var call) {
			var fun_name = (call->mod eq '' ? mod_name . '_priv' : call->mod) . '::' . call->fun_name;
			if (hash::has_key(math_fs, fun_name)) {
				const = :no unless hash::get_value(math_fs, fun_name);
			} else {
				const = :no;
			}
			if (const is :yes) {
				fora var one (call->args) {
					match (one) case :val(var val) {
						check_sub(ref const, regs[val->reg_no], ref info);
					} case :ref(var ref_) {
						check_sub(ref const, regs[ref_->reg_no], ref info);
					}
				}
			}
			fora var one (call->args) {
				match (one) case :val(var val) {
				} case :ref(var ref_) {
					regs[ref_->reg_no] = const;
					array::push(ref set_c, ref_);
				}
			}
			regs[call->dest->reg_no] = const unless nlasm::is_empty(call->dest);
			array::push(ref set_c, call->dest);
		} case :una_op(var una_op) {
			check_sub(ref const, regs[una_op->src->reg_no], ref info);
			regs[una_op->dest->reg_no] = const unless nlasm::is_empty(una_op->dest);
			array::push(ref set_c, una_op->dest);
		} case :bin_op(var bin_op) {
			check_sub(ref const, regs[bin_op->left->reg_no], ref info);
			check_sub(ref const, regs[bin_op->right->reg_no], ref info);
			regs[bin_op->dest->reg_no] = const unless nlasm::is_empty(bin_op->dest);
			array::push(ref set_c, bin_op->dest);
		} case :ov_is(var ov_is) {
			check_sub(ref const, regs[ov_is->src->reg_no], ref info);
			regs[ov_is->dest->reg_no] = const unless nlasm::is_empty(ov_is->dest);
			array::push(ref set_c, ov_is->dest);
		} case :ov_as(var ov_as) {
			check_sub(ref const, regs[ov_as->src->reg_no], ref info);
			regs[ov_as->dest->reg_no] = const unless nlasm::is_empty(ov_as->dest);
			array::push(ref set_c, ov_as->dest);
		} case :func(var func) {
			regs[func->dest->reg_no] = const unless nlasm::is_empty(func->dest);
			array::push(ref set_c, func->dest);
		} case :move(var move) {
			check_sub(ref const, regs[move->src->reg_no], ref info);
			regs[move->dest->reg_no] = const unless nlasm::is_empty(move->dest);
			array::push(ref set_c, move->dest);
		} case :load_const(var as_const) {
			regs[as_const->dest->reg_no] = const unless nlasm::is_empty(as_const->dest);
			array::push(ref set_c, as_const->dest);
		} case :get_frm_idx(var get_frm_idx) {
			check_sub(ref const, regs[get_frm_idx->src->reg_no], ref info);
			check_sub(ref const, regs[get_frm_idx->idx->reg_no], ref info);
			regs[get_frm_idx->dest->reg_no] = const unless nlasm::is_empty(get_frm_idx->dest);
			array::push(ref set_c, get_frm_idx->dest);
		} case :set_at_idx(var set_at_idx) {
			check_sub(ref const, regs[set_at_idx->src->reg_no], ref info);
			check_sub(ref const, regs[set_at_idx->idx->reg_no], ref info);
			check_sub(ref const, regs[set_at_idx->val->reg_no], ref info);
			regs[set_at_idx->src->reg_no] = const;
			array::push(ref set_c, set_at_idx->src);
		} case :array_push(var push) {
			const = :no;
		} case :array_len(var len) {
			const = :no;
		} case :get_val(var get_val) {
			check_sub(ref const, regs[get_val->src->reg_no], ref info);
			regs[get_val->dest->reg_no] = const unless nlasm::is_empty(get_val->dest);
			array::push(ref set_c, get_val->dest);
		} case :set_val(var set_val) {
			check_sub(ref const, regs[set_val->src->reg_no], ref info);
			check_sub(ref const, regs[set_val->val->reg_no], ref info);
			regs[set_val->src->reg_no] = const;
			array::push(ref set_c, set_val->src);
		} case :ov_mk(var ov_mk) {
			if (ov_mk->src is :arg) {
				check_sub(ref const, regs[ov_mk->src as :arg->reg_no], ref info);
			}
			regs[ov_mk->dest->reg_no] = const unless nlasm::is_empty(ov_mk->dest);
			array::push(ref set_c, ov_mk->dest);
		} case :return(var return_i) {
			if (return_i is :val) {
				check_sub(ref const, regs[return_i as :val->reg_no], ref info);
			}
		} case :die(var die_i) {
			check_sub(ref const, regs[die_i->reg_no], ref info);
		} case :prt_lbl(var label) {
			const = :no;
		} case :if_goto(var label) {
			check_sub(ref const, regs[label->src->reg_no], ref info);
		} case :goto(var label) {
			const = :no;
		} case :clear(var reg) {
			check_sub(ref const, regs[reg->reg_no], ref info);
			regs[reg->reg_no] = :no;
		} case :var_decl(var decl) {
			const = :no;
		} case :use_field(var use_field) {
			check_sub(ref const, regs[use_field->old_owner->reg_no], ref info);
			regs[use_field->new_owner->reg_no] = const unless nlasm::is_empty(use_field->new_owner);
			array::push(ref set_c, use_field->new_owner);
		} case :release_field(var release_field) {
			check_sub(ref const, regs[release_field->old_owner->reg_no], ref info);
			check_sub(ref const, regs[release_field->current_owner->reg_no], ref info);
			regs[release_field->old_owner->reg_no] = const;
			array::push(ref set_c, release_field->current_owner);
		} case :use_index(var use_index) {
			check_sub(ref const, regs[use_index->old_owner->reg_no], ref info);
			check_sub(ref const, regs[use_index->index->reg_no], ref info);
			regs[use_index->new_owner->reg_no] = const unless nlasm::is_empty(use_index->new_owner);
			array::push(ref set_c, use_index->new_owner);
		} case :release_index(var release_index) {
			check_sub(ref const, regs[release_index->old_owner->reg_no], ref info);
			check_sub(ref const, regs[release_index->index->reg_no], ref info);
			check_sub(ref const, regs[release_index->current_owner->reg_no], ref info);
			regs[release_index->old_owner->reg_no] = const;
			array::push(ref set_c, release_index->old_owner);
		} case :use_hash_index(var use_hash_index) {
			check_sub(ref const, regs[use_hash_index->old_owner->reg_no], ref info);
			check_sub(ref const, regs[use_hash_index->index->reg_no], ref info);
			regs[use_hash_index->new_owner->reg_no] = const unless nlasm::is_empty(use_hash_index->new_owner);
			array::push(ref set_c, use_hash_index->new_owner);
		} case :release_hash_index(var release_hash_index) {
			check_sub(ref const, regs[release_hash_index->old_owner->reg_no], ref info);
			check_sub(ref const, regs[release_hash_index->index->reg_no], ref info);
			check_sub(ref const, regs[release_hash_index->current_owner->reg_no], ref info);
			regs[release_hash_index->old_owner->reg_no] = const;
			array::push(ref set_c, release_hash_index->old_owner);
		} case :use_variant(var use_variant) {
			check_sub(ref const, regs[use_variant->old_owner->reg_no], ref info);
			regs[use_variant->new_owner->reg_no] = const unless nlasm::is_empty(use_variant->new_owner);
			array::push(ref set_c, use_variant->new_owner);
		} case :release_variant(var release_variant) {
			check_sub(ref const, regs[release_variant->old_owner->reg_no], ref info);
			check_sub(ref const, regs[release_variant->current_owner->reg_no], ref info);
			regs[release_variant->old_owner->reg_no] = const unless nlasm::is_empty(release_variant->old_owner);
			array::push(ref set_c, release_variant->old_owner);
		} case :hash_init_iter(var init_iter) {
			const = :no;
		} case :hash_next_iter(var next_iter) {
			const = :no;
		} case :hash_get_key_iter(var get_key_iter) {
			const = :no;
		} case :hash_is_end(var is_end) {
			const = :no;
		}
		var set_len = array::len(set_c);
		if (set_len > 0 && nlasm::is_empty(set_c[set_len - 1])) {
			array::pop(ref set_c);
		}
		cmds[i]->annotation = const is :yes ? :const(set_c) : :none;
	}
	block->cmds = cmds;
	blocks[number] = block;
	fora var n (block->next) {
		var num = ptd::string_to_int(n);
		set_const_block(num, ref blocks, math_fs, ref state, mod_name, regs);
	}
}



def set_interpreted_changed_functions(state : @post_processing_t::state_t, math_fs : @post_processing_t::math_funs_t, ref 
	changed_functions : ptd::hash(ptd::string())) {
	var fun_calls = state->fun_calls;
	forh var mod_n, var module (state->nl_asm) {
		fora var fun (module->functions) {
			var pre = (fun->access is :pub ? '::' : '_priv::') . fun->name;
			var f_key = mod_n . pre;
			var calls = hash::get_value(hash::get_value(fun_calls, mod_n), pre);
			forh var called_func, var none (calls) {
				continue unless hash::has_key(changed_functions, called_func);
				var is_math = hash::get_value(math_fs, called_func);
				continue unless is_math;
				hash::set_value(ref changed_functions, f_key, '');
			}
		}
	}
}

def get_called_switched(fun_calls : @post_processing_t::fun_tree_t, switched : @post_processing_t::math_funs_t) : 
	@post_processing_t::math_funs_t {
	var called = {};
	forh var mod_n, var module (fun_calls) {
		forh var fun_n, var calls (module) {
			forh var f_key, var t_call (calls) {
				if (hash::has_key(switched, f_key)) {
					hash::set_value(ref called, f_key, true);
				}
			}
		}
	}
	return called;
}

def get_switched_func(old : @post_processing_t::math_funs_t, new : @post_processing_t::math_funs_t) : 
	@post_processing_t::math_funs_t {
	var ret = {};
	forh var name, var n (new) {
		if (hash::has_key(old, name)) {
			var o = hash::get_value(old, name);
			continue if (o && n || !o && !n);
		}
		hash::set_value(ref ret, name, n);
	}
	return ret;
}

def set_function_calls(ref arch : @post_processing_t::fun_tree_t, nlasms : ptd::hash(@nlasm::result_t)) {
	forh var name, var module (nlasms) {
		var fun_mod = {};
		fora var fun (module->functions) {
			var calls = {};
			fora var cmd (fun->commands) {
				continue unless cmd->cmd is :call;
				var as_call = cmd->cmd as :call;
				var mod_n = as_call->mod;
				var fun_n = '::' . as_call->fun_name;
				if (mod_n eq '') {
					mod_n = name;
					fun_n = '_priv' . fun_n;
				}
				hash::set_value(ref calls, mod_n . fun_n, [mod_n, fun_n]);
			}
			var pre = fun->access is :pub ? '::' : '_priv::';
			hash::set_value(ref fun_mod, pre . fun->name, calls);
		}
		hash::set_value(ref arch, name, fun_mod);
	}
}

def post_processing::get_call_graph(nlasms : ptd::hash(@nlasm::result_t)) : @post_processing_t::fun_tree_t {
	var ret = {};
	set_function_calls(ref ret, nlasms);
	return ret;
}

def get_math_fun(arch : @post_processing_t::fun_tree_t, mat_fun : ptd::hash(ptd::int())) : @post_processing_t::math_funs_t {
	var math_fs : @post_processing_t::math_funs_t = {};
	forh var name, var none (mat_fun) {
		hash::set_value(ref math_fs, name, true);
	}
	forh var mod_n, var module (arch) {
		forh var fun_n, var calls (module) {
			hash::set_value(ref math_fs, mod_n . fun_n, true);
		}
	}
	var called_in : ptd::hash(ptd::hash(ptd::int())) = {};
	var unknown : @post_processing_t::math_funs_t = {};
	forh var mod_n, var module (arch) {
		forh var fun_n, var calls (module) {
			forh var key, var t_call (calls) {
				var used = {};
				if (hash::has_key(called_in, key)) {
					used = hash::get_value(called_in, key);
				}
				hash::set_value(ref unknown, key, true) unless hash::has_key(math_fs, key);
				hash::set_value(ref used, mod_n . fun_n, 0);
				hash::set_value(ref called_in, key, used);
			}
		}
	}
	forh var key, var none (unknown) {
		hash::set_value(ref math_fs, key, true);
		set_non_math_fun_rec(ref math_fs, key, called_in);
	}
	return math_fs;
}

def set_non_math_fun_rec(ref math_fs : @post_processing_t::math_funs_t, key : ptd::string(), called_in : ptd::hash(ptd::hash(
		ptd::int()))) {
	return unless hash::get_value(math_fs, key);
	hash::set_value(ref math_fs, key, false);
	return unless hash::has_key(called_in, key);
	var fun_in = hash::get_value(called_in, key);
	forh var key2, var none (fun_in) {
		set_non_math_fun_rec(ref math_fs, key2, called_in);
	}
}

def set_mathfun_in_modules(ref state : @post_processing_t::state_t, math_fs : @post_processing_t::math_funs_t, ref 
	changed_functions : ptd::hash(ptd::string()), ref new_modules_results : ptd::hash(@nlasm::result_t)) {
	var switched = get_switched_func(state->math_fs, math_fs);
	var called_switched = get_called_switched(state->fun_calls, switched);
	fora var name (hash::keys(state->nl_asm)) {
		var module = hash::get_value(state->nl_asm, name);
		var change_mod = false;
		rep var i (array::len(module->functions)) {
			var change_fun = false;
			var fun = module->functions[i];
			var f_key = module->module_name . (fun->access is :pub ? '::' : '_priv::') . fun->name;
			var is_math = hash::get_value(math_fs, f_key);
			if (is_math && !fun->annotation is :math) {
				module->functions[i]->annotation = :math;
				change_fun = true;
			} elsif (!is_math && !fun->annotation is :state) {
				module->functions[i]->annotation = :state;
				change_fun = true;
			}
			change_fun = true if hash::has_key(called_switched, f_key);
			if (change_fun) {
				hash::set_value(ref changed_functions, f_key, '');
				change_mod = true;
			}
		}
		continue unless change_mod;
		hash::set_value(ref new_modules_results, name, module);
		hash::set_value(ref state->nl_asm, name, module);
	}
}

def set_const_reg(ref blocks : @flow_graph::blocks_t, math_fs : @post_processing_t::math_funs_t, mod_name : ptd::string(), 
	reg_size) {
	var regs = [];
	rep var i (reg_size) {
		array::push(ref regs, :no);
	}
	var state = [];
	var val = {was => 0, regs => []};
	rep var i (array::len(blocks)) {
		array::push(ref state, val);
	}
	die if (array::len(blocks) == 0);
	set_const_block(0, ref blocks, math_fs, ref state, mod_name, regs);
}

def delete_unused_labels_com(ref commands : ptd::arr(@nlasm::cmd_t)) : ptd::void() {
	var used = {};
	var repeated : ptd::hash(@nlasm::label_t) = {};
	var label;
	var last_label = -1;
	fora var cmd (commands) {
		var com = cmd->cmd;
		if (com is :prt_lbl) {
			label = com as :prt_lbl;
			if (last_label == -1) {
				last_label = label;
			} else {
				hash::set_value(ref repeated, ptd::int_to_string(label), last_label);
			}
		} else {
			last_label = -1;
		}
		if (com is :goto) {
			label = com as :goto;
			hash::set_value(ref used, ptd::int_to_string(label), label);
		} elsif (com is :if_goto) {
			label = com as :if_goto;
			hash::set_value(ref used, ptd::int_to_string(label->dest), label->dest);
		}
	}
	forh var r, var n (repeated) {
		if (hash::has_key(used, r)) {
			hash::set_value(ref used, ptd::int_to_string(n), n);
		}
	}
	var ret : ptd::arr(@nlasm::cmd_t) = [];
	fora var cmd (commands) {
		var com : @nlasm::order_t = cmd->cmd;
		if (com is :prt_lbl) {
			label = com as :prt_lbl;
			var label_str = ptd::int_to_string(label);
			continue if hash::has_key(repeated, label_str);
			continue unless hash::has_key(used, label_str);
		} elsif (com is :goto) {
			label = com as :goto;
			var label_str = ptd::int_to_string(label);
			label = hash::get_value(repeated, label_str) if hash::has_key(repeated, label_str);
			com = :goto(label);
		} elsif (com is :if_goto) {
			label = com as :if_goto;
			var dest_str = ptd::int_to_string(label->dest);
			label->dest = hash::get_value(repeated, dest_str) if hash::has_key(repeated, dest_str);
			com = :if_goto(label);
		}
		var cop = cmd;
		cop->cmd = com;
		array::push(ref ret, cop);
	}
	commands = ret;
}

def recalculate_labels_com(ref commands : ptd::arr(@nlasm::cmd_t)) : ptd::void() {
	var nr_label = {};
	rep var i (array::len(commands)) {
		var com = commands[i]->cmd;
		if (com is :prt_lbl) {
			hash::set_value(ref nr_label, ptd::int_to_string(com as :prt_lbl), i);
			commands[i]->cmd = :prt_lbl(i);
		}
	}
	rep var i (array::len(commands)) {
		var com = commands[i]->cmd;
		if (com is :goto) {
			commands[i]->cmd = :goto(hash::get_value(nr_label, ptd::int_to_string(com as :goto)));
		} elsif (com is :if_goto) {
			var if_goto = com as :if_goto;
			if_goto->dest = hash::get_value(nr_label, ptd::int_to_string(if_goto->dest));
			commands[i]->cmd = :if_goto(if_goto);
		}
	}
}

def check_sub(ref const : @post_processing_t::reg_const, reg : @post_processing_t::reg_const, ref sum : ptd::arr(ptd::int())) {
	match (reg) case :no {
		const = :no;
	} case :yes(var i) {
		array::push(ref sum, i);
	}
}

