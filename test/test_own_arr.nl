###
# (c) Atinea Sp. z o.o.
###

use ptd;
use own;
use own_array;
use string;

def test_own_arr::prosta_tablica() {
	return own::arr(ptd::int());
}

def test_own_arr::tablica_tablic() {
	return own::arr(own::arr(ptd::int()));
}

def test_own_arr::tablica_rekordow_own() {
	return own::arr(own::rec({
		a => ptd::int(),
		b => ptd::int(),
	}));
}

def test_own_arr::tablica_rekordow_ptd() {
	return own::arr(ptd::rec({
		a => ptd::string(),
		b => ptd::string(),
	}));
}

def test_own_arr::tablica_napisow() {
	return own::arr(ptd::string());
}

def test_own_arr::test() {
	var a : @test_own_arr::prosta_tablica = [1, 2];
	a []= 3;

	die if own_array::len(ref a) != 3;
	var i = 1;
	fora var a_el (a) {
		die if a_el != i;
		i++;
	}
	a[0];
	die if a[0] != 1;
	die if a[1] != 2;
	die if a[2] != 3;
	die if (a[1] + a[2] != 5);
	a[0]++;
	die if a[0] != 2;
	a[0] = 42;
	die if a[0] != 42;

	var b : @test_own_arr::tablica_tablic = [[1, 2]];
	b []= [3, 4];
	fora var el (b) { die if el[0] + 1 != el[1]; }
	b[0];
	die if b[0][0] != 1;
	die if b[0][1] != 2;
	die if b[1][0] != 3;
	die if b[1][1] != 4;
	die if (b[0][0] + b[1][1] != 5);
	b[0][0]++;
	die if b[0][0] != 2;
	b[0][0] = 42;
	die if b[0][0] != 42;

	var c : @test_own_arr::tablica_rekordow_own = [{a => 1, b => 2}];
	c []= {a => 3, b => 4};
	fora var el (c) { die if el->b != el->a + 1; }
	die if c[0]->a != 1;
	die if c[1]->a != 3;
	die if (c[0]->a + c[0]->b != 3);
	c[0]->a++;
	die if c[0]->a != 2;
	c[0]->a = 42;
	die if c[0]->a != 42;

	var d : @test_own_arr::tablica_rekordow_ptd = [{a => 'a0', b => 'b0'}];
	d []= {a => 'a1', b => 'b1'};
	die if d[0]->a ne 'a0' || d[0]->b ne 'b0';
	die if d[1]->a ne 'a1' || d[1]->b ne 'b1';
	i = 0;
	fora var el (d) {
		die if el->a ne ('a' . ptd::int_to_string(i));
		die if el->b ne ('b' . ptd::int_to_string(i));
		i++;
	}

	var e : @test_own_arr::tablica_napisow = ['a', 'b'];
	e []= 'c';
	i = 0;
	fora var el (e) {
		die if el ne string::chr(string::ord('a') + i); 
		i++;
	}
	e[0] = 'b';
	die if e[0] ne e[1];
}
