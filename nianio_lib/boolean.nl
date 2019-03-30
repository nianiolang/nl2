###
# (c) Atinea Sp. z o.o.
###


def boolean::to_nl(str) {
	return str eq '1';
}

def boolean::check_true(bool) {
	return bool ? 1 : 0;
}

