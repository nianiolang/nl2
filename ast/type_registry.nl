###
# (c) Atinea Sp. z o.o.
###


use nast;
use hash;
use ptd;
use reference_generator;
use tct;

def type_registry::from_modules(modules : ptd::hash(@nast::module_t)) : ptd::hash(@tct::meta_type) {
	var defined_types : ptd::hash(@tct::meta_type) = {};
	forh var module_name, var module (modules) {
		fora var function (module->fun_def) {
			match (function->defines_type) case :no {
			} case :yes(var type) {
				defined_types{module_name . '::' . function->name} = type;
			}
		}
	}
	return defined_types;
}

def reference_name(reference : @reference_generator::fun_ref, source_module : ptd::string()) : ptd::string() {
	var module_name = reference->module;
	module_name = source_module if module_name eq '';
	return module_name . '::' . reference->name;
}

def add_type(type : @tct::meta_type, defined_types : ptd::hash(@tct::meta_type),
		ref selected : ptd::hash(ptd::bool())) {
	match (type) case :tct_rec(var fields) {
		forh var name, var field_type (fields) {
			add_type(field_type, defined_types, ref selected);
		}
	} case :tct_own_rec(var fields) {
		forh var name, var field_type (fields) {
			add_type(field_type, defined_types, ref selected);
		}
	} case :tct_hash(var item_type) {
		add_type(item_type, defined_types, ref selected);
	} case :tct_own_hash(var item_type) {
		add_type(item_type, defined_types, ref selected);
	} case :tct_arr(var item_type) {
		add_type(item_type, defined_types, ref selected);
	} case :tct_own_arr(var item_type) {
		add_type(item_type, defined_types, ref selected);
	} case :tct_var(var variants) {
		forh var name, var variant (variants) {
			match (variant) case :with_param(var param) {
				add_type(param, defined_types, ref selected);
			} case :no_param {
			}
		}
	} case :tct_own_var(var variants) {
		forh var name, var variant (variants) {
			match (variant) case :with_param(var param) {
				add_type(param, defined_types, ref selected);
			} case :no_param {
			}
		}
	} case :tct_ref(var name) {
		return unless hash::has_key(defined_types, name);
		return if hash::has_key(selected, name);
		hash::set_value(ref selected, name, true);
		add_type(hash::get_value(defined_types, name), defined_types, ref selected);
	} case :tct_int {
	} case :tct_string {
	} case :tct_bool {
	} case :tct_empty {
	} case :tct_void {
	} case :tct_im {
	}
}

def type_registry::static_only_from_modules(modules : ptd::hash(@nast::module_t),
		defined_types : ptd::hash(@tct::meta_type)) : ptd::hash(ptd::bool()) {
	var static_types : ptd::hash(ptd::bool()) = {};
	var runtime_types : ptd::hash(ptd::bool()) = {};
	var references = reference_generator::generate_executable(modules);
	fora var reference (references) {
		match (reference) case :deref(var deref) {
		} case :ref(var data) {
			match (data->type) case :type_reference(var type_reference) {
				var name = reference_name(type_reference, data->module);
				add_type(:tct_ref(name), defined_types, ref static_types);
			} case :function_reference(var function_reference) {
				var name = reference_name(function_reference, data->module);
				if (hash::has_key(defined_types, name)) {
					hash::set_value(ref runtime_types, name, true);
				}
			} case :import(var module_name) {
			} case :function_definition(var function_definition) {
			}
		}
	}
	var emitted_types : ptd::hash(ptd::bool()) = {};
	forh var name, var type (defined_types) {
		if (!hash::has_key(static_types, name)) {
			add_type(:tct_ref(name), defined_types, ref emitted_types);
		}
	}
	forh var name, var used_at_runtime (runtime_types) {
		add_type(:tct_ref(name), defined_types, ref emitted_types);
	}
	forh var name, var emitted (emitted_types) {
		hash::delete(ref static_types, name);
	}
	return static_types;
}
