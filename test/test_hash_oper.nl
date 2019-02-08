###
# (c) Atinea Sp. z o.o.
###


use nassert;

def test_hash_oper::test() {
	var h = {};
	h{'foo'} = {};
	h{'foo'}{'bar'} = {};
	h{'foo'}{'bar'}{'baz'} = 'foobarbaz';
	nassert::a(h->foo, {bar => {baz => 'foobarbaz'}});
	nassert::a(h{'foo'}, {bar => {baz => 'foobarbaz'}});
	nassert::a(h->foo{'bar'}, {baz => 'foobarbaz'});
	nassert::a(h{'foo'}->bar, {baz => 'foobarbaz'});
	nassert::a(h{'foo'}{'bar'}, {baz => 'foobarbaz'});
}
