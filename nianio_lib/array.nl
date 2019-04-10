###
# (c) Atinea Sp. z o.o.
###


use c_std_lib;

def array::subarray(array, beg, len) {
	return c_std_lib::array_sub(array, beg, len);
}

def array::reverse(ref array) {
	var ret = [];
	rep var i (array::len(array)) {
		ret []= array[array::len(array) - i - 1];
	}
	array = ret;
}

def array::join(str, array) {
	var ret = '';
	var first = true;
	fora var el (array) {
		ret .= str unless first;
		ret .= el;
		first = false;
	}
	return ret;
}

def array::remove(ref arr, idx) {
	var ret = array::subarray(arr, 0, idx);
	for(var i = idx + 1; i < array::len(arr); ++i) {
		array::push(ref ret, arr[i]);
	}
	arr = ret;
}

def array::insert(ref arr, idx, el) {
	var ret = array::subarray(arr, 0, idx);
	array::push(ref ret, el);
	for (var i = idx; i < array::len(arr); ++i) {
		array::push(ref ret, arr[i]);
	}
	arr = ret;
}

def array::push(ref array, new) {
	c_std_lib::array_push(ref array, new);
}

def array::add(variable, el) {
	var ret_arr = variable;
	array::push(ref ret_arr, el);
	return ret_arr;
}

def array::unshift(ref arr, el) {
	var ret = [el];
	array::append(ref ret, arr);
	arr = ret;
}

def array::shift(ref arr) {
	var ret = [];
	for (var i = 1; i < array::len(arr); ++i) {
		ret []= arr[i];
	}
	return ret;
}

def array::pop(ref array) {
	c_std_lib::array_pop(ref array);
}

def array::append(ref array, append) {
	fora var el (append) {
		array::push(ref array, el);
	}
}

def array::join_arr(arr1, arr2) {
	var ret = arr1;
	array::append(ref ret, arr2);
	return ret;
}

def array::len(array) {
	return c_std_lib::array_len(array);
}

def array::is_empty(array) {
	return array::len(array) == 0;
}

def array::cmp(a, b) {
	return c_std_lib::string_compare(a, b) < 0;
}

def array::sort(ref variable) {
	sort(ref variable, @array::cmp);
}

def array::sort_comparator(ref variable, comp) {
	sort(ref variable, comp);
}

def array::equal(arr1, arr2) {
	return false unless array::len(arr1) == array::len(arr2);
	rep var i (array::len(arr1)) {
		return false unless arr1[i] == arr2[i];
	}
	return true;
}

def sort(ref arr, comp) {
	var len = array::len(arr);
	for (var interval_size = 2; interval_size < 2*len; interval_size *= 2) {
		for (var begin = 0; begin < len; begin += interval_size) {
			var end = begin + interval_size - 1;
			end = len - 1 if (end > len - 1);
			continue if end - begin <= 0;
			if (end - begin == 1) {
				continue if exec(comp, arr[begin], arr[end]);
				var tmp = arr[begin];
				arr[begin] = arr[end];
				arr[end] = tmp;
				continue;
			}
			var mid = begin + ((interval_size - 1) / 2);
			continue if (mid > len - 1);
			var tmp = [];
			var left = begin;
			var right = mid + 1;
			while (left <= mid || right <= end) {
				if (left > mid) {
					array::push(ref tmp, arr[right]);
					++right;
				} elsif (right > end) {
					array::push(ref tmp, arr[left]);
					++left;
				} elsif (exec(comp, arr[left], arr[right])) {
					array::push(ref tmp, arr[left]);
					++left;
				} else {
					array::push(ref tmp, arr[right]);
					++right;
				}
			}
			arr[begin + i] = tmp[i] rep var i (array::len(tmp));
		}
	}
}

def exec(comp, a, b) {
	var r = [a, b];
	return c_std_lib::exec(comp, ref r);
}
