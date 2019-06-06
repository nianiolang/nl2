###
# (c) Atinea Sp. z o.o.
###

use ptd;
use own;

def test_own_rec::typ_zewnetrzny() {
	return own::rec({
		rekord_wewnetrzny => @test_own_rec::typ_wewnetrzny,
		tablica_wewnetrzna => own::arr(ptd::int()),
	});
}

def test_own_rec::typ_wewnetrzny() {
	return own::rec({
		liczba => ptd::int(),
	});
}

def test_own_rec::rekord_zagniezdzony() {
	return own::rec({
		rekord_wewnetrzny => own::rec({
			liczba => ptd::int(),
		})
	});
}

def test_own_rec::rekord_mieszany() {
	return own::rec({
		rekord_wewnetrzny => ptd::rec({
			liczba => ptd::int(),
		})
	});
}

def test_own_rec::test() {
	var rekord : @test_own_rec::typ_zewnetrzny = {
		rekord_wewnetrzny => {
			liczba => 1,
		},
		tablica_wewnetrzna => [1, 2],
	};
	var i = 1;
	for (; rekord->rekord_wewnetrzny->liczba < 100; rekord->rekord_wewnetrzny->liczba++) {
		die if rekord->rekord_wewnetrzny->liczba != i;
		i++;
	}
	rekord->tablica_wewnetrzna []= 3;
	die if rekord->tablica_wewnetrzna[2] != 3;

	var zagniezdzenie : @test_own_rec::rekord_zagniezdzony = {
		rekord_wewnetrzny => {
			liczba => 1,
		}
	};
	die if zagniezdzenie->rekord_wewnetrzny->liczba != 1;
	zagniezdzenie->rekord_wewnetrzny->liczba = 2;
	zagniezdzenie->rekord_wewnetrzny->liczba++;
	die if zagniezdzenie->rekord_wewnetrzny->liczba != 3;

	var mieszanie : @test_own_rec::rekord_mieszany = {
		rekord_wewnetrzny => {
			liczba => 1,
		}
	};
	die if mieszanie->rekord_wewnetrzny->liczba != 1;
	mieszanie->rekord_wewnetrzny->liczba = 2;
	mieszanie->rekord_wewnetrzny->liczba++;
	die if mieszanie->rekord_wewnetrzny->liczba != 3;
	var wnetrze = mieszanie->rekord_wewnetrzny;
}
