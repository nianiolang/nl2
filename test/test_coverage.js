function coverage_assert(condition, message) {
	if (!condition) {
		throw new Error(message);
	}
}

function has_uncovered_or_branch(report, outcome) {
	for (var i = 0; i < report.uncovered_branches.length; i++) {
		var branch = report.uncovered_branches[i];
		if (branch.module === 'coverage_fixture' && branch.function === 'or_expr' &&
				branch.outcome === outcome) {
			return true;
		}
	}
	return false;
}

function assert_raw_coverage_shape() {
	var data = nl.c_rt_lib.nlasm_coverage_data();
	var functions = data.modules.coverage_fixture.functions;
	var function_names = ['or_expr', 'select', 'terminal_if'];
	for (var i = 0; i < function_names.length; i++) {
		var fn = functions[function_names[i]];
		coverage_assert(fn.commands.length === fn.meta.length,
			'every ASM command should have source metadata');
		for (var command = 0; command < fn.commands.length; command++) {
			coverage_assert(typeof fn.commands[command] === 'number',
				'ASM commands must not be hidden behind null reachability markers');
			coverage_assert(typeof fn.meta[command].kind === 'string',
				'ASM command metadata should expose the command kind');
			coverage_assert(typeof fn.meta[command].instruction === 'number',
				'ASM command metadata should expose the NL instruction number');
		}
	}
}

nl.c_rt_lib.nlasm_coverage_reset();
assert_raw_coverage_shape();

var reset_report = nl.c_rt_lib.nlasm_coverage_report();
coverage_assert(reset_report.commands.covered === 0,
	'reset should clear all ASM command counters');
coverage_assert(reset_report.branches.covered === 0,
	'reset should clear all ASM branch counters');

nl.coverage_fixture.or_expr(nl.c_rt_lib.get_true(), nl.c_rt_lib.get_false());

var partial = nl.c_rt_lib.nlasm_coverage_report();
coverage_assert(has_uncovered_or_branch(partial, 'false'),
	'the false edge of the ASM if_goto generated for || should be uncovered');
coverage_assert(!has_uncovered_or_branch(partial, 'true'),
	'the true edge of the ASM if_goto generated for || should be covered');

var partial_assertion_failed = false;
try {
	nl.c_rt_lib.nlasm_coverage_assert_complete();
} catch (error) {
	partial_assertion_failed = /Incomplete Nianio ASM coverage/.test(error.message);
}
coverage_assert(partial_assertion_failed, 'incomplete ASM coverage should fail the assertion');

nl.c_rt_lib.nlasm_coverage_reset();
nl.coverage_fixture.or_expr(nl.c_rt_lib.get_true(), nl.c_rt_lib.get_false());
nl.coverage_fixture.or_expr(nl.c_rt_lib.get_false(), nl.c_rt_lib.get_true());
nl.coverage_fixture.select(nl.c_rt_lib.get_true());
nl.coverage_fixture.select(nl.c_rt_lib.get_false());
nl.coverage_fixture.terminal_if(nl.c_rt_lib.get_true());
nl.coverage_fixture.terminal_if(nl.c_rt_lib.get_false());

var complete = nl.c_rt_lib.nlasm_coverage_assert_complete();
coverage_assert(complete.commands.total > 0, 'the report should contain ASM commands');
coverage_assert(complete.branches.total === 6,
	'three ASM if_goto commands should expose six independent branch outcomes');
coverage_assert(complete.commands.percent === 100, 'all ASM commands should be covered');
coverage_assert(complete.branches.percent === 100, 'both ASM branch outcomes should be covered');

console.log('ASM coverage tests passed');
