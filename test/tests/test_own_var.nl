###
# (c) Atinea Sp. z o.o.
###

use ptd;
use own;

def test_own_var::test() {
	prosty_test();
	zlozony_test();
}

def test_own_var::prosty_wariant() {
	return own::var({
		pusty => ptd::none(),
		liczba => ptd::int(),
		wyrazenie_logiczne => ptd::bool(),
		napis => ptd::string(),
		wartosc_imowa => ptd::ptd_im(),
	});
}

def prosty_test() {
	var wariant1 : @test_own_var::prosty_wariant = :pusty;
	die if !wariant1 is :pusty;
	die if wariant1 is :liczba;
	match (wariant1) case :pusty {
	} case :liczba(ref x) {
		die;
	} case :wyrazenie_logiczne(ref x) {
		die;
	} case :napis(ref x) {
		die;
	} case :wartosc_imowa(ref x) {
		die;
	}

	var wariant2 : @test_own_var::prosty_wariant = :liczba(42);
	die if !wariant2 is :liczba;
	die if wariant2 is :wyrazenie_logiczne;
	die if wariant2 as :liczba != 42;
	match (wariant2) case :pusty {
		die;
	} case :liczba(ref x) {
		die if x != 42;
		x = 0;
		x++;
	} case :wyrazenie_logiczne(ref x) {
		die;
	} case :napis(ref x) {
		die;
	} case :wartosc_imowa(ref x) {
		die;
	}
	die if wariant2 as :liczba != 1;

	var wariant3 : @test_own_var::prosty_wariant = :wyrazenie_logiczne(false);
	die if !wariant3 is :wyrazenie_logiczne;
	die if wariant3 is :napis;
	die if wariant3 as :wyrazenie_logiczne;
	match (wariant3) case :pusty {
		die;
	} case :liczba(ref x) {
		die;
	} case :wyrazenie_logiczne(ref x) {
		die if x;
		x = true;
	} case :napis(ref x) {
		die;
	} case :wartosc_imowa(ref x) {
		die;
	}
	die if !wariant3 as :wyrazenie_logiczne;

	var wariant4 : @test_own_var::prosty_wariant = :napis('costam');
	die if !wariant4 is :napis;
	die if wariant4 is :wartosc_imowa;
	die if wariant4 as :napis ne 'costam';
	match (wariant4) case :pusty {
		die;
	} case :liczba(ref x) {
		die;
	} case :wyrazenie_logiczne(ref x) {
		die;
	} case :napis(ref x) {
		die if x ne 'costam';
		x = 'xy';
		x .= 'z';
	} case :wartosc_imowa(ref x) {
		die;
	}
	die if wariant4 as :napis ne 'xyz';

	var wariant5 : @test_own_var::prosty_wariant = :wartosc_imowa(1234);
	die if !wariant5 is :wartosc_imowa;
	die if wariant5 is :pusty;
	die if wariant5 as :wartosc_imowa != 1234;
	match (wariant5) case :pusty {
		die;
	} case :liczba(ref x) {
		die;
	} case :wyrazenie_logiczne(ref x) {
		die;
	} case :napis(ref x) {
		die;
	} case :wartosc_imowa(ref x) {
		die if x != 1234;
		x = 4320;
		x++;
	}
	die if wariant5 as :wartosc_imowa != 4321;
}

def test_own_var::zlozony_wariant() {
	return own::var({
		tablica_imowa => ptd::arr(ptd::int()),
		tablica_ownowa => own::arr(ptd::int()),
		rekord_imowy => ptd::rec({pole_imowe => ptd::int()}),
		rekord_ownowy => own::rec({pole_ownowe => ptd::int()}),
		wariant_imowy => ptd::var({wariant_imowy_wewnetrzny => ptd::int()}),
		wariant_ownowy => own::var({wariant_ownowy_wewnetrzny => ptd::int()}),
	});
}

def zlozony_test() {
	var wariant1 : @test_own_var::zlozony_wariant = :tablica_imowa([0]);
	(wariant1 as :tablica_imowa) []= 1;
	die if (wariant1 as :tablica_imowa)[1] != 1;
	match (wariant1) case :tablica_imowa(ref x) {
		die if x[1] != 1;
		x []= 4;
		x[1] = 2;
		x[1]++;
	} case :tablica_ownowa(ref x) {
		die;
	} case :rekord_imowy(ref x) {
		die;
	} case :rekord_ownowy(ref x) {
		die;
	} case :wariant_imowy(ref x) {
		die;
	} case :wariant_ownowy(ref x) {
		die;
	}
	die if (wariant1 as :tablica_imowa)[1] != 3;
	die if (wariant1 as :tablica_imowa)[2] != 4;

	var wariant2 : @test_own_var::zlozony_wariant = :tablica_ownowa([2]);
	wariant2 as :tablica_ownowa []= 3;
	die if (wariant2 as :tablica_ownowa)[1] != 3;
	match (wariant2) case :tablica_imowa(ref x) {
		die;
	} case :tablica_ownowa(ref x) {
		die if x[1] != 3;
		x []= 6;
		x[1] = 4;
		x[1]++;
	} case :rekord_imowy(ref x) {
		die;
	} case :rekord_ownowy(ref x) {
		die;
	} case :wariant_imowy(ref x) {
		die;
	} case :wariant_ownowy(ref x) {
		die;
	}
	die if (wariant2 as :tablica_ownowa)[1] != 5;
	die if (wariant2 as :tablica_ownowa)[2] != 6;

	var wariant3 : @test_own_var::zlozony_wariant = :rekord_imowy({pole_imowe => 4});
	(wariant3 as :rekord_imowy)->pole_imowe++;
	die if (wariant3 as :rekord_imowy)->pole_imowe != 5;
	match (wariant3) case :tablica_imowa(ref x) {
		die;
	} case :tablica_ownowa(ref x) {
		die;
	} case :rekord_imowy(ref x) {
		die if x->pole_imowe != 5;
		x->pole_imowe = 6;
		x->pole_imowe++;
	} case :rekord_ownowy(ref x) {
		die;
	} case :wariant_imowy(ref x) {
		die;
	} case :wariant_ownowy(ref x) {
		die;
	}
	die if (wariant3 as :rekord_imowy)->pole_imowe != 7;

	var wariant4 : @test_own_var::zlozony_wariant = :rekord_ownowy({pole_ownowe => 6});
	(wariant4 as :rekord_ownowy)->pole_ownowe++;
	die if (wariant4 as :rekord_ownowy)->pole_ownowe != 7;
	match (wariant4) case :tablica_imowa(ref x) {
		die;
	} case :tablica_ownowa(ref x) {
		die;
	} case :rekord_imowy(ref x) {
		die;
	} case :rekord_ownowy(ref x) {
		die if x->pole_ownowe != 7;
		x->pole_ownowe = 8;
		x->pole_ownowe++;
	} case :wariant_imowy(ref x) {
		die;
	} case :wariant_ownowy(ref x) {
		die;
	}
	die if (wariant4 as :rekord_ownowy)->pole_ownowe != 9;

	var wariant5 : @test_own_var::zlozony_wariant = :wariant_imowy(:wariant_imowy_wewnetrzny(8));
	((wariant5 as :wariant_imowy) as :wariant_imowy_wewnetrzny)++;
	die if (wariant5 as :wariant_imowy) as :wariant_imowy_wewnetrzny != 9;
	match (wariant5) case :tablica_imowa(ref x) {
		die;
	} case :tablica_ownowa(ref x) {
		die;
	} case :rekord_imowy(ref x) {
		die;
	} case :rekord_ownowy(ref x) {
		die;
	} case :wariant_imowy(ref x) {
		die if x as :wariant_imowy_wewnetrzny != 9;
		(x as :wariant_imowy_wewnetrzny) = 10;
		(x as :wariant_imowy_wewnetrzny)++;
	} case :wariant_ownowy(ref x) {
		die;
	}
	die if (wariant5 as :wariant_imowy) as :wariant_imowy_wewnetrzny != 11;

	var wariant6 : @test_own_var::zlozony_wariant = :wariant_ownowy(:wariant_ownowy_wewnetrzny(10));
	((wariant6 as :wariant_ownowy) as :wariant_ownowy_wewnetrzny)++;
	die if (wariant6 as :wariant_ownowy) as :wariant_ownowy_wewnetrzny != 11;
	match (wariant6) case :tablica_imowa(ref x) {
		die;
	} case :tablica_ownowa(ref x) {
		die;
	} case :rekord_imowy(ref x) {
		die;
	} case :rekord_ownowy(ref x) {
		die;
	} case :wariant_imowy(ref x) {
		die;
	} case :wariant_ownowy(ref x) {
		die if x as :wariant_ownowy_wewnetrzny != 11;
		(x as :wariant_ownowy_wewnetrzny) = 12;
		(x as :wariant_ownowy_wewnetrzny)++;
	}
	die if (wariant6 as :wariant_ownowy) as :wariant_ownowy_wewnetrzny != 13;
}
