use ptd;

def own::arr(arr_type : @ptd::meta_type) : @ptd::meta_type {
	return :own_arr(arr_type);
}

def own::rec(h : ptd::hash(@ptd::meta_type)) : @ptd::meta_type {
	return :own_rec(h);
}

def own::hash(h : @ptd::meta_type) : @ptd::meta_type {
	return :own_hash(h);
}

def own::var(h) : @ptd::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :ptd_var_none) {
			et = :no_param;
		} else {
			et = :with_param(value);
		}
		types{item} = et;
	}
	return ptd::ensure_only_static_do_not_touch_without_permission(@ptd::meta_type, :own_var(types));
}

def own::to_im(arg) {
	return arg;
}
