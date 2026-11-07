###
# (c) Atinea Sp. z o.o.
###


use array;
use hash;
use nlasm;
use ptd;

def nlasm_coverage::plan_t() {
	return ptd::rec({
		commands => ptd::arr(ptd::bool()),
		branches => ptd::hash(ptd::arr(ptd::bool())),
	});
}

def successor_must_die(index : ptd::int(), must_die : ptd::arr(ptd::bool())) : ptd::bool() {
	return false if index < 0 || index >= array::len(must_die);
	return must_die[index];
}

def label_must_die(label : ptd::int(), labels : ptd::hash(ptd::int()),
		must_die : ptd::arr(ptd::bool())) : ptd::bool() {
	var key = ptd::int_to_string(label);
	return false unless hash::has_key(labels, key);
	return successor_must_die(labels{key}, must_die);
}

def nlasm_coverage::required(function : @nlasm::function_t) : @nlasm_coverage::plan_t {
	var labels : ptd::hash(ptd::int()) = {};
	rep var i (array::len(function->commands)) {
		var order = function->commands[i]->cmd;
		labels{ptd::int_to_string(order as :prt_lbl)} = i if order is :prt_lbl;
	}

	var must_die : ptd::arr(ptd::bool()) = [];
	must_die []= false rep var i (array::len(function->commands));
	var changed = true;
	while (changed) {
		changed = false;
		for(var i = array::len(function->commands) - 1; i >= 0; --i) {
			continue if must_die[i];
			var order = function->commands[i]->cmd;
			var dies = false;
			if (order is :die) {
				dies = true;
			} elsif (order is :return) {
				dies = false;
			} elsif (order is :goto) {
				dies = label_must_die(order as :goto, labels, must_die);
			} elsif (order is :if_goto) {
				var branch = order as :if_goto;
				dies = successor_must_die(i + 1, must_die) &&
					label_must_die(branch->dest, labels, must_die);
			} else {
				dies = successor_must_die(i + 1, must_die);
			}
			if (dies) {
				must_die[i] = true;
				changed = true;
			}
		}
	}

	var commands : ptd::arr(ptd::bool()) = [];
	var branches : ptd::hash(ptd::arr(ptd::bool())) = {};
	rep var i (array::len(function->commands)) {
		commands []= !must_die[i];
		var order = function->commands[i]->cmd;
		if (order is :if_goto) {
			var branch = order as :if_goto;
			branches{ptd::int_to_string(i)} = [
				!successor_must_die(i + 1, must_die),
				!label_must_die(branch->dest, labels, must_die),
			];
		}
	}
	return {commands => commands, branches => branches};
}
