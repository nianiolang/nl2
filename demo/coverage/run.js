function print_summary(label, report) {
	console.log(label + ': commands ' + report.commands.covered + '/' + report.commands.total +
		', branches ' + report.branches.covered + '/' + report.branches.total);
}

nl.c_rt_lib.nlasm_coverage_reset();

nl.coverage_demo.choose(nl.c_rt_lib.get_true(), nl.c_rt_lib.get_false());
print_summary('after the short-circuit path', nl.c_rt_lib.nlasm_coverage_report());

nl.coverage_demo.choose(nl.c_rt_lib.get_false(), nl.c_rt_lib.get_true());
var complete = nl.c_rt_lib.nlasm_coverage_assert_complete();
print_summary('after both paths', complete);
