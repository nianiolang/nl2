###
# (c) Atinea Sp. z o.o.
###


use nast;
use ptd;
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
