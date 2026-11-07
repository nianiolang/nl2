###
# Source-level constants evaluated by the O4 compiler pipeline.
###


def compiler_constant_cases::nested_constants() {
	return [
		[],
		[1, true, false, 'text'],
		{
			with_value => :payload({items => [2, 3]}),
			without_value => :empty,
		},
	];
}
