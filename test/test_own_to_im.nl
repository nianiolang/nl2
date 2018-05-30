use ptd;
use own;
use array;
use hash;
use dfile;
###
# (c) Atinea Sp. z o.o.
###
 
def test_own_to_im::variant() {
    return ptd::var({n => ptd::none(), p => ptd::string()});
}
 
def test_own_to_im::defi() {
    return own::rec({liczba => ptd::int(), napis => ptd::string(), tablica => own::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())});
}

def test_own_to_im::defi_im() {
    return ptd::rec({liczba => ptd::int(), napis => ptd::string(), tablica => ptd::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())});
}
 
def test_own_to_im::defi_defi() {
    return own::rec({d => @test_own_to_im::defi});
}
 
def test_own_to_im::defi_defi_im() {
    return ptd::rec({d => @test_own_to_im::defi_im});
}
 
def test_own_to_im::defi_anon() {
    return own::rec({d => own::rec({liczba => ptd::int(), napis => ptd::string(), tablica => own::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())})});
}

def test_own_to_im::defi_anon_im() {
    return ptd::rec({d => ptd::rec({liczba => ptd::int(), napis => ptd::string(), tablica => ptd::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())})});
}

def check_inner(i) {
	die unless i->liczba == 1;
	die unless i->napis eq 'STR';
	die unless array::len(i->tablica) == 2;
	rep var j (array::len(i->tablica)) {
		die unless j == i->tablica[j];
	}
	die unless (i->wariant as :p) eq 'H';
	die unless hash::size(i->hasz) == 1;
	die unless hash::get_value(i->hasz, 'pole') eq 'D';
}

def check_outer(i) {
	check_inner(i->d);
}

def test_own_to_im::test() {
	var anon : own::rec({liczba => ptd::int(), napis => ptd::string(), tablica => own::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())}) = {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}};
	var anon_im : ptd::rec({liczba => ptd::int(), napis => ptd::string(), tablica => ptd::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())}) = {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}};
	check_inner(own::to_im(anon));
	die if dfile::ssave(own::to_im(anon)) ne dfile::ssave(anon_im);

	var anon_anon : own::rec({d => own::rec({liczba => ptd::int(), napis => ptd::string(), tablica => own::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())})}) = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	var anon_anon_im : ptd::rec({d => ptd::rec({liczba => ptd::int(), napis => ptd::string(), tablica => ptd::arr(ptd::int()), wariant => @test_own_to_im::variant, hasz => ptd::hash(ptd::string())})}) = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	check_outer(own::to_im(anon_anon));
	die if dfile::ssave(own::to_im(anon_anon)) ne dfile::ssave(anon_anon_im);

	var anon_defi : own::rec({d => @test_own_to_im::defi}) = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	var anon_defi_im : ptd::rec({d => @test_own_to_im::defi_im}) = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	check_outer(own::to_im(anon_defi));
	die if dfile::ssave(own::to_im(anon_defi)) ne dfile::ssave(anon_defi_im);

	var defi : @test_own_to_im::defi = {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}};
	var defi_im : @test_own_to_im::defi_im = {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}};
	check_inner(own::to_im(defi));
	die if dfile::ssave(own::to_im(defi)) ne dfile::ssave(defi_im);

	var defi_anon : @test_own_to_im::defi_anon = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	var defi_anon_im : @test_own_to_im::defi_anon_im = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	check_outer(own::to_im(defi_anon));
	die if dfile::ssave(own::to_im(defi_anon)) ne dfile::ssave(defi_anon_im);

	var defi_defi : @test_own_to_im::defi_defi = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	var defi_defi_im : @test_own_to_im::defi_defi_im = {d => {liczba => 1, napis => 'STR', tablica => [0, 1], wariant => :p('H'), hasz => {pole => 'D'}}};
	check_outer(own::to_im(defi_defi));
	die if dfile::ssave(own::to_im(defi_defi)) ne dfile::ssave(defi_defi_im);
}
