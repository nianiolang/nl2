use hash;
use tct;
use array;
use string;
use boolean_t;
use ptd;
use nlasm;
use ov;
use anon_naming;

def generator_c_struct_dependence_sort::result_t() {
	return ptd::var({
			result => ptd::arr(@generator_c_struct_dependence_sort::result_element),
			cycle => ptd::none()
		});
}

def generator_c_struct_dependence_sort::result_element() {
	return ptd::rec({
			name => ptd::string(),
			tct_type => @tct::meta_type,
			c_type => ptd::var({
					definition => ptd::none(),
					declaration => ptd::none(),
					both => ptd::none(),
				})
		});
}

def generator_c_struct_dependence_sort::graph_node() {
	return ptd::rec({
			pointer => ptd::arr(ptd::string()),
			struct => ptd::arr(ptd::string()),
			is_divisible => @boolean_t::type,
			type => @tct::meta_type
		});
}

def generator_c_struct_dependence_sort::graph(){
	return ptd::hash(@generator_c_struct_dependence_sort::graph_node);
}

def generator_c_struct_dependence_sort::sorted_element() {
	return ptd::var({
			definition => ptd::string(),
			declaration => ptd::string(),
			both => ptd::string()
		});
}

def generator_c_struct_dependence_sort::decl_def_type() {
	return ptd::var({
		decl => ptd::none(),
		def => ptd::none(),
		both => ptd::none(),
		none => ptd::none()
	});
}

def get_module_name(fun : ptd::string()) : ptd::string() {
	return (string::split('::', fun))[0];
}

def get_fun_name(fun : ptd::string()) : ptd::string() {
	return (string::split('::', fun))[1];
}

def get_name(type : @tct::meta_type) : ptd::string() {
	if (type is :tct_ref) {
		return get_fun_name(type as :tct_ref);
	}
	return anon_naming::get_anon_name(type);
}

def get_required_types_list(type : @tct::meta_type, ref node : @generator_c_struct_dependence_sort::graph_node,
		module : ptd::string()) : ptd::void() {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
	} case :tct_own_arr(var arr_type) {
		array::push(ref node->struct, get_name(type));
		get_required_types_list(arr_type, ref node, module);
	} case :tct_hash(var hash_type) {
	} case :tct_own_hash(var hash_type) {
		array::push(ref node->struct, get_name(type));
		get_required_types_list(hash_type, ref node, module);
	} case :tct_rec(var records) {
	} case :tct_own_rec(var records) {
		array::push(ref node->struct, get_name(type));
		forh var r_name, var r_type (records) {
			get_required_types_list(r_type, ref node, module);
		}
	} case :tct_ref(var ref_name) {
		if (get_module_name(ref_name) eq module) {
			array::push(ref node->struct, get_fun_name(ref_name));
		}
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
	} case :tct_own_var(var vars) {
		array::push(ref node->struct, get_name(type));
		forh var v_name, var v_type (vars) {
			match (v_type) case :with_param(var param_type) {
				get_required_types_list(param_type, ref node, module);
			} case :no_param {
			}
		}
	} case :tct_empty {
	}
}

def generator_c_struct_dependence_sort::is_divisible(type : @tct::meta_type) : @boolean_t::type {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
	} case :tct_own_arr(var arr_type) {
	} case :tct_hash(var hash_type) {
	} case :tct_own_hash(var hash_type) {
	} case :tct_rec(var records) {
	} case :tct_own_rec(var records) {
		return true;
	} case :tct_ref(var ref_name) {
	} case :tct_void {
	} case :tct_sim {
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_var(var vars) {
	} case :tct_own_var(var vars) {
		return true;
	} case :tct_empty {
	}
	return false;
}

def in_funs_to_graph(types : ptd::hash(@tct::meta_type), module : ptd::string()) : @generator_c_struct_dependence_sort::graph {
	var graph : @generator_c_struct_dependence_sort::graph = {};
	forh var f_name, var f_type (types) {
		var node = {pointer => [], struct => [], is_divisible =>
			generator_c_struct_dependence_sort::is_divisible(f_type), type => f_type};
		get_required_types_list(f_type, ref node, module);
		if(array::len(node->pointer) > 0) {
			array::remove(ref node->pointer, 0);
		}
		if(array::len(node->struct) > 0) {
			array::remove(ref node->struct, 0);
		}
		hash::set_value(ref graph, f_name, node);
	}
	var graph2 = graph;
	forh var func, var rec (graph2) {
		var a : @generator_c_struct_dependence_sort::graph_node = rec;
		remove_dups(ref a->pointer);
		remove_dups(ref a->struct);
		hash::set_value(ref graph, func, a);
	}
	return graph;
}

def remove_dups(ref a : ptd::arr(ptd::string())) {
	array::sort(ref a);
	var i = 0;
	loop {
		if (i >= (array::len(a) - 1)) {
			break;
		}
		if (a[i] eq a[i + 1]) {
			array::remove(ref a, i + 1);
		} else {
			i += 1;
		}
	}
}

def join_type(a : @generator_c_struct_dependence_sort::decl_def_type , b : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::decl_def_type {
	if (a is :both || b is :both) {
		return :both;
	}
	if (a is :none) {
		return b;
	}
	if (b is :none) {
		return a;
	}
	if (ov::get_element(a) eq ov::get_element(b)) {
		return a;
	}
	return :both;
}

def common_type(a : @generator_c_struct_dependence_sort::decl_def_type , b : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::decl_def_type {
	if (a is :none || b is :none) {
		return :none;
	}
	if (a is :both) {
		return b;
	}
	if (b is :both) {
		return a;
	}
	if (ov::get_element(a) eq ov::get_element(b)) {
		return a;
	}
	return :none;
}

def split_type(a : @generator_c_struct_dependence_sort::decl_def_type , b : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::decl_def_type {
	if (ov::get_element(a) eq ov::get_element(b)) {
		return :none;
	}
	if (a is :none) {
		return :none;
	}
	if (b is :none) {
		return a;
	}
	if (b is :both) {
		return :none;
	}
	if (a is :both) {
		if (b is :decl) {
			return :def;
		}
		return :decl;
	}
	return a;
}

def type_to_var(name : ptd::string(), type : @generator_c_struct_dependence_sort::decl_def_type)
		: @generator_c_struct_dependence_sort::sorted_element {
	if (type is :both) {
		return :both(name);
	}
	if (type is :decl) {
		return :declaration(name);
	}
	if (type is :def) {
		return :definition(name);
	}
	die;
}

def sort_graph_help(graph : @generator_c_struct_dependence_sort::graph,
		ref output : ptd::arr(@generator_c_struct_dependence_sort::sorted_element),
		ref path : ptd::hash(@generator_c_struct_dependence_sort::decl_def_type),
		ref processed : ptd::hash(@generator_c_struct_dependence_sort::decl_def_type),
		current : @generator_c_struct_dependence_sort::sorted_element, ref cycle : @boolean_t::type) : ptd::void() {
	var name;
	var type;
	match (current) case :definition(var n) {
		name = n;
		type = :def;
	} case :declaration(var n) {
		name = n;
		type = :decl;
	} case :both(var n) {
		name = n;
		type = :both;
	}

	var current_type = :none;
	if (hash::has_key(processed, name)) {
		current_type = hash::get_value(processed, name);
		if (current_type is :both || ov::get_element(current_type) eq ov::get_element(type)) {
			return;
		}
	}
	var path_type = :none;
	if (hash::has_key(path, name)) {
		path_type = hash::get_value(path, name);
		if (!common_type(type, path_type) is :none){
			cycle = true;
			return;
		}
	}
	if (hash::get_value(graph, name)->is_divisible && type is :decl) {
		hash::set_value(ref processed, name, join_type(type, current_type));
		array::push(ref output, current);
		return;
	}
	if (!hash::get_value(graph, name)->is_divisible) {
		type = :both;
		current = :both(name);
	}
	hash::set_value(ref path, name, join_type(type, path_type));
	
	if(type is :def || type is :both) {
		fora var dep (hash::get_value(graph, name)->pointer) {
			sort_graph_help(graph, ref output, ref path, ref processed, :declaration(dep), ref cycle);
		}

		fora var dep (hash::get_value(graph, name)->struct) {
			sort_graph_help(graph, ref output, ref path, ref processed, :both(dep), ref cycle);
		}
	}
	
	hash::set_value(ref processed, name, join_type(type, current_type));
	array::push(ref output, type_to_var(name, split_type(type, current_type)));
	hash::delete(ref path, name);
}

def sort_graph(graph : @generator_c_struct_dependence_sort::graph)
		: @generator_c_struct_dependence_sort::result_t {
	var output = [];
	var path = {};
	var processed = {};
	var cycle = false;
	forh var func, var node (graph) {
		sort_graph_help(graph, ref output, ref path, ref processed, :declaration(func), ref cycle);
	}
	forh var func, var node (graph) {
		sort_graph_help(graph, ref output, ref path, ref processed, :definition(func), ref cycle);
	}
	if (cycle) {
		return :cycle;
	}
	var result = [];
	var types = {};
	forh var func, var node (graph) {
		hash::set_value(ref types, func, node->type);
	}
	fora var el (output) {
		match (el) case :both (var n) {
			array::push(ref result, {name => n, tct_type => hash::get_value(types, n), c_type => :both});
		} case :declaration (var n) {
			array::push(ref result, {name => n, tct_type => hash::get_value(types, n), c_type => :declaration});
		} case :definition (var n) {
			array::push(ref result, {name => n, tct_type => hash::get_value(types, n), c_type => :definition});
		}
	}
	return :result(result);
}

def anon_add(type : @tct::meta_type, ref anons : ptd::hash(@tct::meta_type)) {
	if (type is :tct_own_rec || type is :tct_own_arr || type is :tct_own_var || type is :tct_own_hash) {
		var anon_name = anon_naming::get_anon_name(type);
		if (hash::has_key(anons, anon_name)) {
			return;
		}
		hash::set_value(ref anons, anon_name, type);
	}
}

def deep_anon_add(type : @tct::meta_type, ref anons : ptd::hash(@tct::meta_type)) {
	if (type is :tct_own_rec) {
		forh var r_name, var r_type (type as :tct_own_rec) {
			deep_anon_add(r_type, ref anons);
		}
		anon_add(type, ref anons);
	} elsif (type is :tct_own_arr) {
		deep_anon_add(type as :tct_own_arr, ref anons);
		anon_add(type, ref anons);
	} elsif (type is :tct_own_var) {
		forh var v_name, var v_type (type as :tct_own_var) {
			match (v_type) case :with_param(var param_type) {
				deep_anon_add(param_type, ref anons);
			} case :no_param {
			}
		}
		anon_add(type, ref anons);
	} elsif (type is :tct_own_hash) {
		deep_anon_add(type as :tct_own_hash, ref anons);
		anon_add(type, ref anons);
	}
}

def get_anons(funs : ptd::arr(@nlasm::function_t)) : ptd::hash(@tct::meta_type) {
	var anons : ptd::hash(@tct::meta_type) = {};
	fora var f (funs) {
		deep_anon_add(f->ret_type, ref anons);
		fora var g (f->args_type) {
			match (g->type) case :none {
			} case :type(var type) {
				deep_anon_add(type, ref anons);
			}
		}
		fora var r (f->registers) {
			if (r->type is :rec) {
				deep_anon_add(r->type as :rec, ref anons);
			} elsif (r->type is :arr) {
				deep_anon_add(r->type as :arr, ref anons);
			} elsif (r->type is :variant) {
				deep_anon_add(r->type as :variant, ref anons);
			} elsif (r->type is :hash) {
				deep_anon_add(r->type as :hash, ref anons);
			}
		}
		match (f->defines_type) case :no {
		} case :yes(var type) {
			deep_anon_add(type, ref anons);
		}
	}
	return anons;
}

def nlasm_to_type_hash(nl_funs : ptd::arr(@nlasm::function_t)) : ptd::hash(@tct::meta_type) {
	var types : ptd::hash(@tct::meta_type) = {};
	fora var f (nl_funs) {
		match (f->access) case :priv {
		} case :pub {
			match (f->defines_type) case :yes(var type) {
				hash::set_value(ref types, f->name, type);
			} case :no {
			}
		}
	}
	return types;
}

def generator_c_struct_dependence_sort::sort(funs : ptd::arr(@nlasm::function_t), module : ptd::string())
		: @generator_c_struct_dependence_sort::result_t {
	var in_funs : ptd::hash(@tct::meta_type)  = get_anons(funs);
	hash::add_all(ref in_funs, nlasm_to_type_hash(funs));
	var graph = in_funs_to_graph(in_funs, module);
	return sort_graph(graph);
}
