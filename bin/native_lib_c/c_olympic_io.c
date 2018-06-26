/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: JJB 2018-06-11
*/

#include <stdbool.h>
#include </usr/include/string.h>
#include "c_rt_lib.h"
#include "c_olympic_io.h"

ImmT c_olympic_io0print(ImmT im) {
	NlString *str = toStringIfImm(im);
	printf("%s", str->s);
	c_rt_lib0clear((ImmT*)&str);
	return NULL;
}

ImmT c_olympic_io0readln() {
	char line[MAX_LINE_LENGTH];
	fgets(line, MAX_LINE_LENGTH, stdin);
	line[strlen(line) - 2] = '\0';
	return c_rt_lib0string_new(line);
}

INT c_olympic_io0read_int() {
	int n;
	scanf(" %d ", &n);
	return n;
}
