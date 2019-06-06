use ptd;
use c_fe_lib;
use interpreter_wrapper;

def nls_nl::main(args : ptd::arr(ptd::string())) {
	interpreter_wrapper::compile(args);
}
