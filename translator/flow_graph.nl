###
# (c) Atinea Sp. z o.o.
###


use array;
use ptd;
use hash;
use nlasm;

def flow_graph::block_t() {
	return ptd::rec({
			cmds => ptd::arr(@nlasm::cmd_t),
			from => @nlasm::reg_t,
			to => @nlasm::reg_t,
			reg_uses => ptd::arr(@flow_graph::reg_use_t),
			last_modif => ptd::hash(ptd::var({write => ptd::string(), clear => ptd::none()})),
			prev => ptd::arr(ptd::string()),
			next => ptd::arr(ptd::string())
		});
}

def flow_graph::reg_use_t() {
	return ptd::rec({
			reg => @nlasm::reg_t,
			cmd_nr => ptd::int(),
			type => ptd::var({write => ptd::none(), read => ptd::none(), clear => ptd::none()})
		});
}

def flow_graph::state_t() {
	return ptd::rec({map => ptd::hash(@flow_graph::block_t), tab => ptd::arr(ptd::string())});
}

def flow_graph::blocks_t() {
	return ptd::arr(@flow_graph::block_t);
}

def flow_graph::make_blocks(commands : ptd::arr(@nlasm::cmd_t), args_types : ptd::arr(@nlasm::arg_type_t)) : ptd::arr(
		@flow_graph::block_t) {
	var blocks : @flow_graph::state_t = mk_blocks(commands, args_types);
	set_prev_block(ref blocks->map, blocks->tab[0]);
	remove_unused_block(ref blocks);
	var t_block = block_name_to_nr(blocks);
	return t_block;
}

def block_name_to_nr(blocks : @flow_graph::state_t) : ptd::arr(@flow_graph::block_t) {
	var hash = {};
	var tab = blocks->tab;
	rep var i (array::len(tab)) {
		hash::set_value(ref hash, tab[i], ptd::int_to_string(i));
	}
	var ret = [];
	fora var name (tab) {
		var block = hash::get_value(blocks->map, name);
		var next = block->next;
		rep var i (array::len(next)) {
			next[i] = hash::get_value(hash, next[i]);
		}
		block->next = next;
		var prev = block->prev;
		rep var i (array::len(prev)) {
			prev[i] = hash::get_value(hash, prev[i]);
		}
		block->prev = prev;
		array::push(ref ret, block);
	}
	return ret;
}

def flow_graph::combine_blocks(blocks : @flow_graph::blocks_t) : ptd::arr(@nlasm::cmd_t) {
	var commands : ptd::arr(@nlasm::cmd_t) = [];
	fora var block (blocks) {
		array::append(ref commands, block->cmds);
	}
	if (!(commands[array::len(commands) - 1]->cmd is :return)) {
		array::push(ref commands, {cmd => :return(:emp), annotation => :none, debug => nlasm::empty_debug()});
	}
	return commands;
}

def remove_unused_block(ref blocks : @flow_graph::state_t) : ptd::void() {
	var ret_tab = [];
	var ret_map = {};
	var first = true;
	var map = blocks->map;
	fora var name (blocks->tab) {
		var block = hash::get_value(map, name);
		if (array::len(block->prev) == 0) {
			if (first) {
				first = false;
			} else {
				continue;
			}
		}
		hash::set_value(ref ret_map, name, block);
		array::push(ref ret_tab, name);
	}
	blocks->map = ret_map;
	blocks->tab = ret_tab;
}

def set_prev_block(ref map : ptd::hash(@flow_graph::block_t), name : ptd::string()) : ptd::void() {
	var block = hash::get_value(map, name);
	return unless (array::len(block->prev) <= 1);
	fora var next (block->next) {
		var o = hash::get_value(map, next);
		array::push(ref o->prev, name);
		hash::set_value(ref map, next, o);
		set_prev_block(ref map, next);
	}
}

def mk_block(nr : ptd::int()) : @flow_graph::block_t {
	return {
		cmds => [],
		prev => [],
		from => {type => :im, reg_no => nr, access_type => :value},
		to => {type => :im, reg_no => -1, access_type => :value},
		reg_uses => [],
		last_modif => {},
		next => []
	};
}

def add_block(ref blocks : @flow_graph::state_t, ref block : @flow_graph::block_t, nr : ptd::int(), last_label : 
		ptd::string()) {
	block->to = {type => :im, reg_no => nr, access_type => :value};
	hash::set_value(ref blocks->map, last_label, block);
	array::push(ref blocks->tab, last_label);
	block = mk_block(nr + 1);
}

def read_reg(ref block : @flow_graph::block_t, reg : @nlasm::reg_t, cmd_nr : ptd::int()) {
	return if nlasm::is_empty(reg);
	array::push(ref block->reg_uses, {reg => reg, cmd_nr => cmd_nr, type => :read});
}

def write_reg(ref block : @flow_graph::block_t, reg : @nlasm::reg_t, cmd_nr : ptd::int()) {
	return if nlasm::is_empty(reg);
	array::push(ref block->reg_uses, {reg => reg, cmd_nr => cmd_nr, type => :write});
	hash::set_value(ref block->last_modif, ptd::int_to_string(reg->reg_no), :write(ptd::int_to_string(cmd_nr)));
}

def clear_reg(ref block : @flow_graph::block_t, reg : @nlasm::reg_t, cmd_nr : ptd::int()) {
	return if nlasm::is_empty(reg);
	array::push(ref block->reg_uses, {reg => reg, cmd_nr => cmd_nr, type => :clear});
	hash::set_value(ref block->last_modif, ptd::int_to_string(reg->reg_no), :clear);
}

def mk_blocks(commands : ptd::arr(@nlasm::cmd_t), args_types : ptd::arr(@nlasm::arg_type_t)) : @flow_graph::state_t {
	var blocks : @flow_graph::state_t = {map => {}, tab => []};
	var block : @flow_graph::block_t = mk_block(0);
	var last_label : ptd::string() = 'label_init';
	var nr = 0;
	fora var com (commands) {
		array::push(ref block->cmds, com);
		match (com->cmd) case :arr_decl(var arr_decl) {
			fora var one (arr_decl->src) {
				read_reg(ref block, one, nr);
			}
			write_reg(ref block, arr_decl->dest, nr);
		} case :hash_decl(var hash_decl) {
			fora var one (hash_decl->src) {
				read_reg(ref block, one->val, nr);
			}
			write_reg(ref block, hash_decl->dest, nr);
		} case :empty_hash_decl(var hash_decl) {
			write_reg(ref block, hash_decl->dest, nr);
		} case :call(var call) {
			fora var one (call->args) {
				match (one) case :val(var val) {
					read_reg(ref block, val, nr);
				} case :ref(var ref_) {
					read_reg(ref block, ref_, nr);
				}
			}
			fora var one (call->args) {
				match (one) case :val(var val) {
				} case :ref(var ref_) {
					write_reg(ref block, ref_, nr);
				}
			}
			write_reg(ref block, call->dest, nr);
		} case :una_op(var una_op) {
			read_reg(ref block, una_op->src, nr);
			write_reg(ref block, una_op->dest, nr);
		} case :bin_op(var bin_op) {
			read_reg(ref block, bin_op->left, nr);
			read_reg(ref block, bin_op->right, nr);
			write_reg(ref block, bin_op->dest, nr);
		} case :ov_is(var ov_is) {
			read_reg(ref block, ov_is->src, nr);
			write_reg(ref block, ov_is->dest, nr);
		} case :ov_as(var ov_as) {
			read_reg(ref block, ov_as->src, nr);
			write_reg(ref block, ov_as->dest, nr);
		} case :func(var func) {
			write_reg(ref block, func->dest, nr);
		} case :move(var move) {
			read_reg(ref block, move->src, nr);
			write_reg(ref block, move->dest, nr);
		} case :load_const(var const) {
			write_reg(ref block, const->dest, nr);
		} case :get_frm_idx(var get_frm_idx) {
			read_reg(ref block, get_frm_idx->src, nr);
			read_reg(ref block, get_frm_idx->idx, nr);
			write_reg(ref block, get_frm_idx->dest, nr);
		} case :set_at_idx(var set_at_idx) {
			read_reg(ref block, set_at_idx->src, nr);
			read_reg(ref block, set_at_idx->idx, nr);
			read_reg(ref block, set_at_idx->val, nr);
			write_reg(ref block, set_at_idx->src, nr);
		} case :array_push(var push) {
			read_reg(ref block, push->val, nr);
			read_reg(ref block, push->dest, nr);
			write_reg(ref block, push->dest, nr);
		} case :array_len(var len) {
			read_reg(ref block, len->src, nr);
			write_reg(ref block, len->dest, nr);
		} case :get_val(var get_val) {
			read_reg(ref block, get_val->src, nr);
			write_reg(ref block, get_val->dest, nr);
		} case :set_val(var set_val) {
			read_reg(ref block, set_val->src, nr);
			read_reg(ref block, set_val->val, nr);
			write_reg(ref block, set_val->src, nr);
		} case :ov_mk(var ov_mk) {
			read_reg(ref block, ov_mk->src as :arg, nr) if ov_mk->src is :arg;
			write_reg(ref block, ov_mk->dest, nr);
		} case :return(var return_i) {
			read_reg(ref block, return_i as :val, nr) if return_i is :val;
			rep var arg_nr (array::len(args_types)) {
				if (args_types[arg_nr]->by is :ref) {
					read_reg(ref block, {type => :im, reg_no => arg_nr, access_type => :value}, nr);
				}
			}
			add_block(ref blocks, ref block, nr, last_label);
			last_label .= '_R';
		} case :die(var die_i) {
			read_reg(ref block, die_i, nr);
			add_block(ref blocks, ref block, nr, last_label);
			last_label .= '_D';
		} case :prt_lbl(var label) {
			if (ptd::int_to_string(label) ne last_label) {
				array::push(ref block->next, ptd::int_to_string(label));
				array::pop(ref block->cmds);
				add_block(ref blocks, ref block, nr - 1, last_label);
				array::push(ref block->cmds, com);
				last_label = ptd::int_to_string(label);
			}
		} case :if_goto(var label) {
			read_reg(ref block, label->src, nr);
			array::push(ref block->next, ptd::int_to_string(label->dest));
			var next_l = last_label . '_I';
			if (commands[nr + 1]->cmd is :prt_lbl) {
				next_l = ptd::int_to_string(commands[nr + 1]->cmd as :prt_lbl);
			}
			array::push(ref block->next, next_l);
			add_block(ref blocks, ref block, nr, last_label);
			last_label = next_l;
		} case :goto(var label) {
			array::push(ref block->next, ptd::int_to_string(label));
			add_block(ref blocks, ref block, nr, last_label);
			last_label .= '_G';
		} case :clear(var reg) {
			clear_reg(ref block, reg, nr);
		} case :var_decl(var decl) {
		} case :use_field(var use_field) {
			read_reg(ref block, use_field->old_owner, nr);
			write_reg(ref block, use_field->new_owner, nr);
		} case :release_field(var release_field) {
			read_reg(ref block, release_field->current_owner, nr);
			write_reg(ref block, release_field->old_owner, nr);
		} case :use_index(var use_index) {
			read_reg(ref block, use_index->old_owner, nr);
			read_reg(ref block, use_index->index, nr);
			write_reg(ref block, use_index->new_owner, nr);
		} case :release_index(var release_index) {
			read_reg(ref block, release_index->current_owner, nr);
			read_reg(ref block, release_index->index, nr);
			write_reg(ref block, release_index->old_owner, nr);
		} case :use_hash_index(var use_hash_index) {
			read_reg(ref block, use_hash_index->old_owner, nr);
			read_reg(ref block, use_hash_index->index, nr);
			write_reg(ref block, use_hash_index->new_owner, nr);
		} case :release_hash_index(var release_hash_index) {
			read_reg(ref block, release_hash_index->current_owner, nr);
			read_reg(ref block, release_hash_index->index, nr);
			write_reg(ref block, release_hash_index->old_owner, nr);
		} case :use_variant(var use_variant) {
			read_reg(ref block, use_variant->old_owner, nr);
			write_reg(ref block, use_variant->new_owner, nr);
		} case :release_variant(var release_variant) {
			read_reg(ref block, release_variant->current_owner, nr);
			write_reg(ref block, release_variant->old_owner, nr);
		} case :hash_init_iter(var init_iter) {
			read_reg(ref block, init_iter->hash, nr);
			write_reg(ref block, init_iter->iter, nr);
		} case :hash_next_iter(var next_iter) {
			read_reg(ref block, next_iter->hash, nr);
			read_reg(ref block, next_iter->iter, nr);
			write_reg(ref block, next_iter->iter, nr);
		} case :hash_get_key_iter(var get_key_iter) {
			read_reg(ref block, get_key_iter->hash, nr);
			read_reg(ref block, get_key_iter->iter, nr);
			write_reg(ref block, get_key_iter->dest, nr);
		} case :hash_is_end(var is_end) {
			read_reg(ref block, is_end->hash, nr);
			read_reg(ref block, is_end->iter, nr);
			write_reg(ref block, is_end->dest, nr);
		}
		++nr;
	}
	add_block(ref blocks, ref block, nr - 1, last_label);
	return blocks;
}

