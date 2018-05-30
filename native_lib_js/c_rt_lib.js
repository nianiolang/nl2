/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: AJF 2014-02-14
*/

var instadb;
(function(_namespace, undefined) {
	_namespace.c_rt_lib = {};

	(function() {
		  var formatter = {
			header: function(x, config) {
				if (typeof config !== 'undefined' && typeof config.imm_disallow !== 'undefined') {
					return null;
				}
				if (typeof x.get_imm_type === 'function') {
					if (x.get_imm_type() == 'sim') {
						return ['object', {'object' : x.as_js_str()}];
					}
					return ["span", {}, "Imm: " +   x.get_imm_type()];
				} else {
					return null;
				}
			},
			hasBody: function(x) {
				if (typeof x.get_imm_type === 'function') {
					return true;
				} else {
					return false;
				}
			},
			body: function(x) {
				var object = ["li", {}, 
					['span', {}, 'object: '], 
					['object', {'object' : x, 'config' : {imm_disallow : true}}]];
				var list = ['ol', {}];
				if (x.get_imm_type() == 'ov') {
					list.push(["li", {}, 
							['span', {}, "name : "],
							['object', {'object' : x.ov_get_label()}], 
						]);
					list.push(
						["li", {}, 
							['span', {}, 'value: '], 
							['object', {'object' : x.ov_get_value()}]
						]);
				} else if (x.get_imm_type() == 'sim') {
				} else if (x.get_imm_type() == 'array') {
					list.push(x.get_debug_body());
				} else if (x.get_imm_type() == 'hash') {
					list.push(x.get_debug_body());
				}
				list.push(object);
				return list;
			}
		  };
		  window.devtoolsFormatters = [formatter];
	  })();

	_namespace.imm_ref = function(x) {
		this.value = x;
	}

	function fromUtf8Array(byte_string) {
		var out = "", i = 0, len = byte_string.length;
		while(i < len) {
			var c = byte_string.charCodeAt(i++);
			switch (c >> 4) { 
				case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
					out += String.fromCharCode(c);
					break;
				case 12: case 13:
					var char2 = byte_string.charCodeAt(i++);
					out += String.fromCharCode(((c & 0x1F) << 6) | (char2 & 0x3F));
					break;
				case 14:
					var char2 = byte_string.charCodeAt(i++);
					var char3 = byte_string.charCodeAt(i++);
					out += String.fromCharCode(((c & 0x0F) << 12) |
								   ((char2 & 0x3F) << 6) |
								   ((char3 & 0x3F) << 0));
					break;
			}
		}
		return out;
	}
	function toUTF8Array(str) {
		var utf8 = '';
		for (var i = 0; i < str.length; i++) {
			var charcode = str.charCodeAt(i);
			if (charcode < 0x80) {
				utf8 += String.fromCharCode(charcode);
			} else if (charcode < 0x800) {
				utf8 += String.fromCharCode(0xc0 | (charcode >> 6));
				utf8 += String.fromCharCode(0x80 | (charcode & 0x3f));
			} else if (charcode < 0xd800 || charcode >= 0xe000) {
				utf8 += String.fromCharCode(0xe0 | (charcode >> 12));
				utf8 += String.fromCharCode(0x80 | ((charcode>>6) & 0x3f));
				utf8 += String.fromCharCode(0x80 | (charcode & 0x3f));
			} else {
				i++;
				charcode = (0x10000 + (((charcode & 0x3ff)<<10) | (str.charCodeAt(i) & 0x3ff)));
				utf8 += String.fromCharCode(0xf0 | (charcode >> 18));
				utf8 += String.fromCharCode(0x80 | ((charcode >> 12) & 0x3f));
				utf8 += String.fromCharCode(0x80 | ((charcode >> 6) & 0x3f));
				utf8 += String.fromCharCode(0x80 | (charcode & 0x3f));
			}
		}
		return utf8;
	}

	var from_utf8_counter = 0;
	var from_utf8_counter_len = 0;
	var to_utf8_counter = 0;
	var to_utf8_counter_len = 0;


	//NL -> JS
	function from_utf8(str) {
		++from_utf8_counter;
		from_utf8_counter_len += str.length;
		return fromUtf8Array(str);
	}

	//JS -> NL
	function to_utf8(str) {
		++to_utf8_counter;
		to_utf8_counter_len += str.length;
		return toUTF8Array(str);
	}

	_namespace.imm_deep = function(value) {
		if (typeof value == 'string') {
			return _namespace.imm_str(value);
		} else if (value instanceof Array) {
			var arr = [];
			for (var i = 0; i < value.length; ++i) {
				arr.push(_namespace.imm_deep(value[i]));
			}
			return _namespace.imm_arr(arr);
		} else if (+value == value) {
			return _namespace.imm_float(value);
		} else if (value instanceof Object) {
			var keys = {};
			for (var key in value) {
				keys[key] = _namespace.imm_deep(value[key]);
			}
			return _namespace.imm_hash(keys);
		} else {
			_namespace.nl_die();
		}
	}

	var arr_counter = 0;
	var push_counter = 0;
	var arr_copy_counter = 0;
	_namespace.imm_arr = function(v) {
		if (v instanceof Array) {
		} else {
			_namespace.nl_die();
		}

		return arr_priv(v.slice());

		function arr_priv(v_priv) {
			var value = v_priv;
			var max_len = -1;

			function update_value() {
				if (max_len != -1) {
					value = value.slice(0, max_len);
					max_len = -1;
					++arr_counter;
				}
			}

			function new_array() {
				update_value();
				++arr_copy_counter;
				return value.slice();
			}
			function check_index(idx) {
				update_value();
				if (idx < 0 || idx >= value.length) {
					_namespace.nl_die();
				}
			}

			function set_index_int(idx, value) {
				update_value();
				var ret = new_array();
				check_index(idx);
				ret[idx] = value;
				return _namespace.imm_arr(ret);
			}

			return {
				get_index: function(i) {
					update_value();
					var idx = i.as_int();
					check_index(idx);
					return value[idx];
				},
				set_index: function(ind, value) {
					var idx = ind.as_int();
					return set_index_int(idx, value);
				},
				set_index_int: function(idx, value) {
					return set_index_int(idx, value);
				},
				get_index_int: function (i) {
					check_index(i);
					return value[i];
				},
				len: function() {
					update_value();
					return value.length;
				},
				push: function(el) {
					update_value();
					_namespace.check_null(el);
					max_len = value.length;
					value.push(el);
					++push_counter;
					return arr_priv(value);
				},
				get_imm_type: function() {
					return 'array';
				},
				subarray: function(begin, length) {
					update_value();
					return arr_priv(value.slice(begin.as_int(), begin.as_int() + length.as_int()));
				},
				pop: function() {
					update_value();
					var ret  = new_array();
					ret.pop();
					return arr_priv(ret);
				},
				as_arr: function() {
					update_value();
					return new_array();
				},
				get_debug_body: function() {
					return ['li', {}, ['span', {}, 'array'],  ['object', {'object' : value}]];
				}
			};
		}
	}

	_namespace.imm_ov_js_str = function(str, value) {
		return _namespace.imm_ov(_namespace.imm_str(str), value);
	}

	_namespace.imm_ov = function(n, v) {
		if (typeof v === 'undefined') {
			v = null;
		}
		var name = n;
		var value = v;
		if (name.get_imm_type() != 'sim') {
			_namespace.nl_die();
		}

		function ov_is(label) {
			return name.as_byte_string() == label.as_byte_string();
		}

		function ov_has_value() {
			return value !== null;
		}

		return {
			ov_get_label: function() {
				return name;
			},
			ov_as: function(label) {
				if (value === null || name.as_byte_string() != label.as_byte_string()) {
					_namespace.nl_die();
				}
				return value;
			},
			ov_get_value: function() {
				return value;
			},
			ov_has_value: ov_has_value,
			ov_has_value_nl: function() {
				return _namespace.c_rt_lib.native_to_nl(ov_has_value());
			},
			ov_is: ov_is,
			ov_is_nl: function(label) {
				return _namespace.c_rt_lib.native_to_nl(ov_is(label));
			},
			get_imm_type: function() {
				return 'ov';
			},
		};
	}

	_namespace.imm_str = function(v) {
		if (typeof v === "string") {
		} else if (typeof v == "number") {
			v = v.toString();
		} else {
			_namespace.nl_die();
		}
		return _namespace.imm_from_byte_string(to_utf8(v));
	}

	_namespace.imm_from_byte_string = function(v) {
		if (typeof v === "string") {
		} else if (typeof v == "number") {
			v = v.toString();
		} else {
			_namespace.nl_die();
		}

		function str_priv(value) {
			return {
				as_js_str: function() {
					return from_utf8(value);
				},
				as_float: function() {
					return parseFloat(value);
				},
				as_int: function() {
					return Math.floor(parseFloat(value));
				},
				get_imm_type: function() {
					return 'sim';
				},
				as_byte_string : function() {
					return value;
				},
			};
		}
		return str_priv(v);
	}


	_namespace.imm_int = function(v) {
		return {
			as_js_str: function() {
				return v.toString();
			},
			as_float: function() {
				return v;
			},
			as_int: function() {
				return v;
			},
			get_imm_type: function() {
				return 'sim';
			},
			as_byte_string: function() {
				return v.toString();
			},
		};
	}

	_namespace.imm_float = function(v) {
		if (v === (v|0)) {
			return _namespace.imm_int(v);
		} else {
			return _namespace.imm_str(v.toString());
		}
	}

	function hash_copy(hash) {
		var ret = {};
		for (var key in hash) {
			ret[to_utf8(key)] = hash[key];
		}
		return ret;
	}

	function byte_hash_copy(hash) {
		var ret = {};
		for (var key in hash) {
			ret[key] = hash[key];
		}
		return ret;
	}

	var set_value_counter = 0;
	var copy_counter = 0;
	var old_copies = 0;


	function hash_len(hash) {
		return Object.keys(hash).length;
	}

	_namespace.imm_hash = function(v) {
		return priv_hash(hash_copy(v));

		function priv_hash(priv_v) {
			var value = priv_v;

			
			function update_hash() {
			}

			function new_hash() {
				++copy_counter;
				update_hash();
				return byte_hash_copy(value);
			}

			function get_value_byte_str(key) {
				update_hash();
				var ret = value[key];
				_namespace.check_null(ret);
				return ret;
			}

			function set_value_byte_str(key, hash_value) {
				update_hash();
				_namespace.check_null(hash_value);
				var x = new_hash();
				x[key] = hash_value;
				++set_value_counter;
				return priv_hash(x);
			}

			return {
				has_key: function(key) {
					update_hash();
					return key.as_byte_string() in value;
				},
				get_value: function(key) {
					return get_value_byte_str(key.as_byte_string());
				},
				get_value_byte_str: get_value_byte_str,
				set_value:  function(key, value) {
					return set_value_byte_str(key.as_byte_string(), value);
				},
				set_value_byte_str: set_value_byte_str,
				delete_key: function(key) {
					update_hash();
					var ret = new_hash();
					var byte_str = key.as_byte_string();
					delete ret[byte_str];
					return priv_hash(ret);
				},
				get_imm_type: function() {
					return 'hash';
				}, 
				hash_size : function() {
					update_hash();
					return _namespace.imm_int(hash_len(value));
				},
				get_debug_body: function() {
					return ['li', {}, ['span', {}, 'hash: '],  ['object', {'object' : value}]];
				},
				get_keys: function() {
					update_hash();
					var keys = [];
					for (var key in value) {
						keys.push(_namespace.imm_from_byte_string(key));
					}
					return _namespace.imm_arr(keys);
				},
			};
		}
	}

	_namespace.nl_die = function() {
		throw "DIE";
	}

	_namespace.c_rt_lib.array_len = function(arr) {
		return _namespace.imm_int(arr.len());
	}

	_namespace.check_null = function(el) {
		if (typeof el === 'undefined') {
			_namespace.nl_die();
		}
	}

	_namespace.c_rt_lib.get_ref_arr = function(arr, ind) {
		return arr.get_index(ind);
	}

	_namespace.c_rt_lib.set_ref_arr = function(/*ref*/arr, ind, value) {
		arr.value = arr.value.set_index(ind, value);
	}


	_namespace.c_rt_lib.hash_get_value = function(hash, key) {
		return hash.get_value(key);
	}

	_namespace.c_rt_lib.hash_set_value = function(/*ref*/hash, key, value) {
		hash.value = hash.value.set_value(key, value);
	}

	_namespace.c_rt_lib.get_ref_hash = function(hash, key) {
		return _namespace.c_rt_lib.hash_get_value(hash, key);
	}

	_namespace.c_rt_lib.set_ref_hash = function(/*ref*/hash, key, value) {
		_namespace.c_rt_lib.hash_set_value(hash, key, value);
	}

	_namespace.c_rt_lib.init_iter = function(hash) {
		return _namespace.imm_hash({
			keys : hash.get_keys(),
			position : _namespace.imm_int(0)});
	}

	_namespace.c_rt_lib.get_key_iter = function(iter) {
		return iter.get_value_byte_str('keys').get_index(iter.get_value_byte_str('position'));
	}

	_namespace.c_rt_lib.is_end_hash = function(iter) {
		return _namespace.c_rt_lib.native_to_nl(
				iter.get_value_byte_str('position').as_int() >= 
				iter.get_value_byte_str('keys').len());
	}

	_namespace.c_rt_lib.next_iter = function(iter) {
		return iter.set_value_byte_str('position', 
				_namespace.imm_int(iter.get_value_byte_str('position').as_int() + 1));
	}

	_namespace.c_rt_lib.ov_as = function(ov, name) {
		return ov.ov_as(name);
	}

	_namespace.c_rt_lib.ov_is = function(ov, name) {
		return ov.ov_is_nl(name);
	}

	_namespace.c_rt_lib.ov_has_value = function(ov) {
		return ov.ov_has_value_nl();
	}

	_namespace.c_rt_lib.ov_get_value = function(ov) {
		return ov.ov_get_value();
	}

	_namespace.c_rt_lib.ov_get_element = function(ov) {
		return ov.ov_get_label();
	}

	_namespace.c_rt_lib.ov_arg_new = function(name, arg){
		return _namespace.imm_ov(name, arg);
	}

	_namespace.c_rt_lib.ov_none_new = function(name) {
		return _namespace.imm_ov(name, null);
	}

	_namespace.c_rt_lib.ov_mk_arg = function(name, val) {
		return _namespace.imm_ov(name, val);
	}

	_namespace.c_rt_lib.ov_mk_none = function(name) {
		return _namespace.imm_ov_js_str(name, null);
	}

	_namespace.c_rt_lib.check_true = function(bool) {
		return _namespace.c_rt_lib.check_true_native(bool) ? 1 : 0;
	}

	_namespace.c_rt_lib.check_true_native = function(bool) {
		if (bool === c_rt_lib_true) {
			return true;
		} else if (bool === c_rt_lib_false) {
			return false;
		} else {
			return bool.ov_get_label().as_byte_string() == 'TRUE';
		}
	}

	_namespace.c_rt_lib.to_nl = function(bool){
		return _namespace.c_rt_lib.native_to_nl(bool.as_int());
	}


	var c_rt_lib_true = _namespace.c_rt_lib.ov_mk_none('TRUE');
	var c_rt_lib_false = _namespace.c_rt_lib.ov_mk_none('FALSE');

	_namespace.c_rt_lib.get_false = function() {
		return c_rt_lib_false;
	}

	_namespace.c_rt_lib.get_true = function() {
		return c_rt_lib_true;
	}

	_namespace.c_rt_lib.native_to_nl = function(bool) {
		return bool ? _namespace.c_rt_lib.get_true() : _namespace.c_rt_lib.get_false();
	}

	_namespace.c_rt_lib.array_push = function(/*ref*/arr, el) {
		arr.value = arr.value.push(el);
	}

	_namespace.c_rt_lib.imm_to_float = function(el) {
		return el.as_float();
	}

	var concat_counter = 0;
	_namespace.c_rt_lib.concat = function(l, r) {
		++concat_counter;
		return _namespace.imm_from_byte_string(l.as_byte_string() + r.as_byte_string());
	}

	_namespace.c_rt_lib.eq = function(l, r) {
		return _namespace.c_rt_lib.native_to_nl(l.as_byte_string() == r.as_byte_string());
	}

	_namespace.c_rt_lib.ne = function(l, r) {
		return _namespace.c_rt_lib.native_to_nl(l.as_byte_string() != r.as_byte_string());
	}

	_namespace.c_rt_lib.float_round = function(imm_s) {
		return _namespace.imm_float(Math.round(Number(imm_s.as_byte_string())));
	}

	_namespace.c_rt_lib.bool_not = function(arg) {
		return _namespace.c_rt_lib.native_to_nl(!_namespace.c_rt_lib.check_true_native(arg));
	}

})(instadb = instadb || {});
