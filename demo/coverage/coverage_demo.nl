###
# (c) Atinea Sp. z o.o.
###


def coverage_demo::choose(primary, fallback) {
	return primary || fallback;
}

def coverage_demo::require(value) {
	die unless value;
}
