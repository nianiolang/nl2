var fs = require('fs');
var path = require('path');

function load_modules(directory, modules) {
	var names = fs.readdirSync(directory).filter(function(name) {
		return /\.nl$/.test(name);
	}).sort();
	for (var i = 0; i < names.length; i++) {
		var module_name = names[i].replace(/\.nl$/, '');
		modules[module_name] = fs.readFileSync(path.join(directory, names[i]), 'utf8');
	}
}

function load_module(filename, modules) {
	var module_name = path.basename(filename).replace(/\.nl$/, '');
	modules[module_name] = fs.readFileSync(filename, 'utf8');
}

function scoped_report(module_names) {
	var data = nl.c_rt_lib.nlasm_coverage_data();
	var report = {
		commands: {covered: 0, excluded_die: 0, total: 0},
		branches: {covered: 0, excluded_die: 0, total: 0},
		modules: {},
		uncovered_commands: [],
		uncovered_branches: []
	};
	for (var module_index = 0; module_index < module_names.length; module_index++) {
		var module_name = module_names[module_index];
		var module_report = report.modules[module_name] = {
			commands: {covered: 0, excluded_die: 0, total: 0},
			branches: {covered: 0, excluded_die: 0, total: 0}
		};
		var functions = data.modules[module_name].functions;
		for (var function_name in functions) {
			if (!functions.hasOwnProperty(function_name)) continue;
			var fn = functions[function_name];
			for (var command = 0; command < fn.commands.length; command++) {
				if (fn.meta[command].required === false) {
					report.commands.excluded_die++;
					module_report.commands.excluded_die++;
					continue;
				}
				report.commands.total++;
				module_report.commands.total++;
				if (fn.commands[command] > 0) {
					report.commands.covered++;
					module_report.commands.covered++;
				} else {
					report.uncovered_commands.push({
						module: module_name,
						function: function_name,
						command: command,
						meta: fn.meta[command]
					});
				}
			}
			for (var branch_command in fn.branches) {
				if (!fn.branches.hasOwnProperty(branch_command)) continue;
				for (var outcome = 0; outcome < 2; outcome++) {
					if (fn.meta[branch_command].branchRequired[outcome] === false) {
						report.branches.excluded_die++;
						module_report.branches.excluded_die++;
						continue;
					}
					report.branches.total++;
					module_report.branches.total++;
					if (fn.branches[branch_command][outcome] > 0) {
						report.branches.covered++;
						module_report.branches.covered++;
					} else {
						report.uncovered_branches.push({
							module: module_name,
							function: function_name,
							command: Number(branch_command),
							outcome: outcome === 0 ? 'false' : 'true',
							meta: fn.meta[branch_command]
						});
					}
				}
			}
		}
	}
	return report;
}

function summarize_uncovered(items) {
	var summary = {};
	for (var i = 0; i < items.length; i++) {
		var item = items[i];
		var key = item.module + '::' + item.function;
		if (!summary[key]) summary[key] = {count: 0, lines: {}, kinds: {}};
		summary[key].count++;
		summary[key].lines[item.meta.begin.line] = true;
		summary[key].kinds[item.meta.kind] = true;
	}
	var result = {};
	Object.keys(summary).sort().forEach(function(key) {
		result[key] = {
			count: summary[key].count,
			lines: Object.keys(summary[key].lines).map(Number).sort(function(a, b) { return a - b; }),
			kinds: Object.keys(summary[key].kinds).sort()
		};
	});
	return result;
}

var modules = {};
[
	'ast',
	'checker',
	'compiler',
	'compiler_base',
	'nianio_lib',
	'parser',
	'pretty_printer',
	'translator',
	'test/compiler_coverage/cases'
].forEach(function(directory) {
	load_modules(directory, modules);
});
[
	'test/tests/test_own_arr.nl',
	'test/tests/test_own_hash.nl',
	'test/tests/test_own_var.nl'
].forEach(function(filename) {
	load_module(filename, modules);
});

nl.c_rt_lib.nlasm_coverage_reset();
var generated = nl.compiler_coverage_driver.run(nl.js_to_imm(modules));
var report = scoped_report(['translator', 'flow_graph', 'generator_js']);

console.log('compiled modules: ' + nl.imm_to_js(generated));
console.log('compiler core commands: ' + report.commands.covered + '/' + report.commands.total);
console.log('compiler core branches: ' + report.branches.covered + '/' + report.branches.total);
console.log('module totals: ' + JSON.stringify(report.modules, null, 2));
if (!process.env.NL_COVERAGE_SUMMARY_ONLY) {
	console.log('uncovered command summary: ' + JSON.stringify(summarize_uncovered(report.uncovered_commands), null, 2));
	console.log('uncovered branch summary: ' + JSON.stringify(summarize_uncovered(report.uncovered_branches), null, 2));
}
if (process.env.NL_COVERAGE_REPORT) {
	fs.writeFileSync(process.env.NL_COVERAGE_REPORT, JSON.stringify(report, null, 2));
}
if (report.uncovered_commands.length > 0 || report.uncovered_branches.length > 0) {
	throw new Error('Incomplete compiler-core coverage: commands ' + report.commands.covered + '/' +
		report.commands.total + ', branches ' + report.branches.covered + '/' + report.branches.total +
		'\ncommands: ' + JSON.stringify(summarize_uncovered(report.uncovered_commands)) +
		'\nbranches: ' + JSON.stringify(summarize_uncovered(report.uncovered_branches)));
}
console.log('compiler core coverage tests passed');
