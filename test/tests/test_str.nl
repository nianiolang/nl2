###
# (c) Atinea Sp. z o.o.
###


use nassert;
use string;


def test_str::test() {
	test_str::exe();
	var byte = string::chr(128);
	nassert::a(string::length(byte), 1);
	nassert::a(string::ord(byte), 128);
	byte = string::chr(255);
	nassert::a(string::length(byte), 1);
	nassert::a(string::ord(byte), 255);
}

def test_str::exe() {
	var a = 'asdfasdfsafasdfsad sad fads saf sa'' sadfasdfa sa sda fas fas ';
	var b = 'aaa ''to jestw ciapkach'' ';
	var c = 'a tu jest nowa linia
		' i jescze jedna nowa linia
		;
	var d = 'wieloliniowy
		'string
		'bb
		'aaa
		'cccc
		'dddd ''
		'eeee
		'fff
		'ggg
		'hhh
		;
	var e = 'zywkly z '' nowa linia
		;
	var f = 'a to zwykly string';
	var g = 'nowa linia
		'ale na koncu bez nowej';
}

