###
# (c) Atinea Sp. z o.o.
###


def coverage_fixture::or_expr(left, right) {
	return left || right;
}

def coverage_fixture::select(condition) {
	if (condition) {
		return true;
	}
	return false;
}

def coverage_fixture::terminal_if(condition) {
	if (condition) {
		return true;
	} else {
		return false;
	}
}
