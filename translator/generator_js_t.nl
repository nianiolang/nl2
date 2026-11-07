###
# (c) Atinea Sp. z o.o.
###


use ptd;

def generator_js_t::state_t() {
	return ptd::rec({
		js => ptd::string(),
		consts => ptd::rec({
			arr => ptd::arr(ptd::ptd_im()),
			hash => ptd::hash(ptd::int()),
			name => ptd::string(),
		}),
		module_name => ptd::string(),
		sourcemap => @generator_js_t::sourcemap_t,
		js_lines => ptd::int(),
		coverage => ptd::bool(),
		coverage_command => ptd::int(),
	});
}

def generator_js_t::sourcemap_opt_t() {
	return ptd::var({
		yes => ptd::string(),
		no => ptd::none(),
	});
}

def generator_js_t::sourcemap_t() {
	return ptd::rec({
		names => ptd::arr(ptd::string()),
		names_hash => ptd::hash(ptd::int()),
		entries => ptd::arr(@generator_js_t::sourcemap_entry_t),
	});
}

def generator_js_t::sourcemap_entry_t() {
	return ptd::rec({
		line_js => ptd::int(),
		line_nl => ptd::int(),
		symbol => ptd::var({
			yes => ptd::rec({
				begin => ptd::int(),
				end => ptd::int(),
				name_idx => ptd::int(),
			}),
			no => ptd::none(),
		}),
	});
}
