###
# (c) Atinea Sp. z o.o.
###


use nlasm;
use ptd;

def flow_graph_t::block_t() {
	return ptd::rec({
		cmds => ptd::arr(@nlasm::cmd_t),
		from => @nlasm::reg_t,
		to => @nlasm::reg_t,
		reg_uses => ptd::arr(@flow_graph_t::reg_use_t),
		last_modif => ptd::hash(ptd::var({write => ptd::string(), clear => ptd::none()})),
		prev => ptd::arr(ptd::string()),
		next => ptd::arr(ptd::string())
	});
}

def flow_graph_t::reg_use_t() {
	return ptd::rec({
		reg => @nlasm::reg_t,
		cmd_nr => ptd::int(),
		type => ptd::var({write => ptd::none(), read => ptd::none(), clear => ptd::none()})
	});
}

def flow_graph_t::state_t() {
	return ptd::rec({map => ptd::hash(@flow_graph_t::block_t), tab => ptd::arr(ptd::string())});
}

def flow_graph_t::blocks_t() {
	return ptd::arr(@flow_graph_t::block_t);
}
