/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: JJB 2018-06-19
*/

#include <stdio.h>
#include "interpreter_wrapper.h"
#include "c_rt_lib.h"

char *get_project_name() {
	return "nianio_lang compiler";
}

char *get_logs_dir_nl() {
	return "nl_logs";
}

int main(int argc, char **argv) {
	c_rt_lib0init_advanced(1, &get_project_name, &get_logs_dir_nl);
	ImmT args = c_rt_lib0array_new();
	for (int i = 0; i < argc; ++i) {
		ImmT el = c_rt_lib0string_new(argv[i]);
		c_rt_lib0array_push(&args, el);
		c_rt_lib0clear(&el);
	}
	int ret_code = interpreter_wrapper0compile(args);
	c_rt_lib0clear(&args);
	c_rt_lib0finish();
	return ret_code;
}
