
/*
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-01-03
 */

#define _POSIX_SOURCE
#include <stdarg.h>
#include </usr/include/stdio.h>
#include </usr/include/stdlib.h>
#include </usr/include/string.h>
#include </usr/include/math.h>
#include <sys/types.h>
#include <sys/wait.h>
#include </usr/include/unistd.h>
#include </usr/include/time.h>
#include </usr/include/signal.h>
#include <sys/prctl.h>
#include <sys/time.h>
#include <stdbool.h>

#include "c_rt_lib.h"
#include "c_global_const.h"
#include "c_nl_config_header.h"

#ifndef PR_SET_PTRACER
#define PR_SET_PTRACER 0x59616d61
#endif

#define ___TYPE_STRING 1
#define ___TYPE_INT 2
#define ___TYPE_ARRHASH 3
#define ___TYPE_ARR 4
#define ___TYPE_OV_NONE 5
#define ___TYPE_OV 6
#define ___TYPE_FUNC 8
#define ___TYPE_HASH 9

int IS_STRING(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_STRING;}
int IS_INT(ImmT x) 		{return ((NlData*)x)->type == ___TYPE_INT;}
int IS_ARRHASH(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_ARRHASH;}
int IS_ARR(ImmT x) 		{return ((NlData*)x)->type == ___TYPE_ARR;}
int IS_OV_NONE(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_OV_NONE;}
int IS_OV(ImmT x) 		{return ((NlData*)x)->type == ___TYPE_OV;}
int IS_FUNC(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_FUNC;}
int IS_HASH(ImmT x) 	{return ((NlData*)x)->type == ___TYPE_HASH;}

#define NAME(x) type_name(((NlData*)x)->type)

#define REFS(x) ((NlData*)x)->refs
#define FTABS 50
#define ITABS 30
#define DIETABS 512

#define REP(I, N) for(int I = 0; I < (N); ++I)

#define START_ARRAY_SIZE 2
#define START_ARR_HASH_SIZE 2
#define MAX_ARR_HASH_SIZE 8
#define START_HASH_SIZE MAX_ARR_HASH_SIZE*2
#define MIN_HASH_SIZE 8
#define MIN_HASH_CELL_ON_ELEM 2


char *(*die_additional_info)() = NULL;
char *(*logs_dir_f)() = NULL;
long long _mem_sum = 0;
long long _free_sum = 0;

int _created[] = {0,0,0,0,0,0,0,0,0,0};
int _deleted[] = {0,0,0,0,0,0,0,0,0,0};


ImmT _false = NULL;
ImmT _true = NULL;
ImmT _array = NULL;
ImmT _hash = NULL;
ImmT _int_0 = NULL;
ImmT _int_1 = NULL;
ImmT _empty_str = NULL;
ImmT** _consts = NULL;
INT* _consts_s = NULL;
int _consts_size = 0;
int _consts_capacity = 0;
ImmT _global_const_int_begin_ = NULL;
ImmT _global_const_int_end_ = NULL;
ImmT _global_const_string_begin_ = NULL;
ImmT _global_const_string_end_ = NULL;
int _global_const_offset_ = 0;

char* aprint(ImmT val, int deep);
ImmT nl_die_internal(const char *format, ...);
void nl_data_init(ImmT dI, char type);
ImmT priv_to_nl_native(int i);
NlArray *priv_arr_to_change(ImmT *arrI);
void inc_ref(ImmT dI);
void dec_ref(ImmT dI);
void dec_ref_adv(ImmT dI, int with_struct);
ImmT c_rt_lib0array_new_alloc();
ImmT c_rt_lib0hash_new_alloc();
ImmT set_to_hash(NlHash* hash, ImmT key, ImmT val);

void nl_die_signal() {
	nl_die_internal("signal received");
}

static void c_rt_lib_priv_register_signal_handler(int signal) {
	struct sigaction action;
	sigemptyset(&action.sa_mask);
	action.sa_handler = nl_die_signal;
	action.sa_flags = 0;
	if (sigaction(signal, &action, 0)) {
		fprintf(stderr, "Cannot register signal handler\n");
		nl_die();
	}
}

char *nothing_f() {
	return "";
}

char *standard_logs_dir_f() {
	return "nl_logs";
}

char *c_rt_lib0get_die_additional_info() {
	if (die_additional_info != NULL) {
		return (*die_additional_info)();
	} else {
		return "";
	}
}

char *get_logs_dir() {
	if (logs_dir_f != NULL) {
		return (*logs_dir_f)();
	} else {
		return "";
	}
}


void c_rt_lib0init(int catch_signals) {
	c_rt_lib0init_advanced(catch_signals, &nothing_f, &standard_logs_dir_f);
}

void c_rt_lib0init_advanced(int catch_signals, char * (*die_f)(), char * (*logs_f)()) {
	_global_const_offset_ = sizeof(NlInt);
	if (sizeof(NlString) > _global_const_offset_)
		_global_const_offset_ = sizeof(NlString);
	_false = c_rt_lib0ov_mk_none(c_rt_lib0string_new("FALSE"));
	_true = c_rt_lib0ov_mk_none(c_rt_lib0string_new("TRUE"));
	_array = c_rt_lib0array_new_alloc();
	_hash = c_rt_lib0hash_new_alloc();
	_int_0 = c_rt_lib0int_new(-1);
	((NlInt *)_int_0)->i = 0;
	_int_1 = c_rt_lib0int_new(-1);
	((NlInt *)_int_1)->i = 1;
	char *t = (char*)alloc_mem(sizeof(char));
	t[0] = '\0';
	_empty_str = c_rt_lib0string_new_alloc(t,0,1);
	___global_const_init();
	if (catch_signals) {
		c_rt_lib_priv_register_signal_handler(SIGSEGV);
	}

	die_additional_info = die_f;
	logs_dir_f = logs_f;
}

void c_rt_lib0register_const(ImmT *___nl__a, INT ___nl__int__size) {
	if (_consts_capacity<_consts_size + 2) {
		_consts_capacity=_consts_capacity*2+2;
		_consts = (ImmT**)realloc(_consts, sizeof(ImmT) * _consts_capacity);
		_consts_s = (INT*)realloc(_consts_s, sizeof(INT) * _consts_capacity);
	}
	_consts_s[_consts_size] = ___nl__int__size;
	_consts[_consts_size] = ___nl__a;
	++_consts_size;
}

void c_rt_lib0register_global_int_const(ImmT ___nl__begin, ImmT ___nl__end) {
	_global_const_int_begin_ = ___nl__begin;
	_global_const_int_end_ = ___nl__end;
}

void c_rt_lib0register_global_string_const(ImmT ___nl__begin, ImmT ___nl__end) {
	_global_const_string_begin_ = ___nl__begin;
	_global_const_string_end_ = ___nl__end;
}

const char* type_name(char a){
	switch(a){
		case ___TYPE_STRING: return "string";
		case ___TYPE_INT: return "int";
		case ___TYPE_ARRHASH: return "arr_hash";
		case ___TYPE_ARR: return "array";
		case ___TYPE_OV_NONE: return "ov_none";
		case ___TYPE_OV: return "ov";
		case ___TYPE_FUNC: return "func";
		case ___TYPE_HASH: return "hash";
		default: return "unknown";
	}
}

void deregister_const(ImmT ___nl__begin, ImmT ___nl__end) {
	if (___nl__begin != NULL) {
		ImmT const_element = ___nl__begin;
		while (const_element < ___nl__end) {
			dec_ref_adv(const_element, 0);
			const_element += _global_const_offset_;
		}
	}
	free_mem(___nl__begin, ___nl__end - ___nl__begin);
}

void c_rt_lib0finish(){
	c_rt_lib0clear(&_false);
	c_rt_lib0clear(&_true);
	c_rt_lib0clear(&_array);
	c_rt_lib0clear(&_hash);
	c_rt_lib0clear(&_int_0);
	c_rt_lib0clear(&_int_1);
	c_rt_lib0clear(&_empty_str);
	for(int i=0;i<_consts_size;++i){
		ImmT* arr = _consts[i];
		for(int j=0;j<_consts_s[i];++j){
			c_rt_lib0clear(&arr[j]);
		}
	}
	deregister_const(_global_const_int_begin_, _global_const_int_end_);
	deregister_const(_global_const_string_begin_, _global_const_string_end_);
	if(_mem_sum != _free_sum)
		fprintf(stderr, "\nmemory unreleased: %d\n", (int)(_mem_sum - _free_sum));
	for(int i=1;i<=9;++i)
		if(_created[i] != _deleted[i])
			fprintf(stderr, "%s unreleased: %d\n", type_name(i), _created[i] - _deleted[i]);
}

int c_rt_lib0get_global_const_offset() {
	return _global_const_offset_;
}

void c_rt_lib0func_num_args(int a, int b, const char *s){
	if(a!=b)
		nl_die_internal("In dynamic call of function: %s, given: %d arguments, expected: %d", s, a, b);
}

ImmT c_rt_lib0exec(ImmT ___nl__func, ImmT *___ref___arrI){
	if(!IS_HASH(___nl__func) && !IS_ARRHASH(___nl__func))
		nl_die_internal("function struct must by a hash", NAME(___nl__func));
	NlFunction *func = (NlFunction*)c_rt_lib0hash_get_value_dec(___nl__func, c_rt_lib0string_new("name"));
	if(!IS_FUNC(func))
		nl_die_internal("can call only function: %s", NAME(func));
	if(!IS_ARR(*___ref___arrI))
		nl_die_internal("expected array: %s", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	ImmT (*f)(int n, ImmT *arg) = func->f;
	dec_ref((ImmT*)func);
	return (*f)(arr->size, arr->arr);
}

ImmT c_rt_lib0func_new(ImmT (*f)(int, ImmT*), ImmT ___nl__module, ImmT ___nl__name){
	NlFunction *ret = (NlFunction *)alloc_mem(sizeof(NlFunction));
	nl_data_init((ImmT)ret, ___TYPE_FUNC);
	ret->module = (NlString*)___nl__module;
	ret->name = (NlString*)___nl__name;
	ret->f = f;
	inc_ref(___nl__module);
	return c_rt_lib0hash_mk_dec(2, c_rt_lib0string_new("module"), ___nl__module, c_rt_lib0string_new("name"),  ret);
}

void sPrintFloat(char* tab, double f){
	sprintf(tab, "%.15g", f);
}

int compare_bytes(const void* left, int size_left, const void* right, int size_right){
	int min_size = size_left < size_right ? size_left : size_right;
	int memcmp_res = memcmp(left, right, min_size);

	if(memcmp_res) return memcmp_res;
	else if(size_left < size_right) return -1;
	else if(size_left > size_right) return 1;
	else return 0;
}

int compare_string_with_cstr(NlString* ___nl__left, const char* cstr){
	return compare_bytes(___nl__left->s, ___nl__left->length, cstr, strlen(cstr));
}

int compare_strings(NlString* ___nl__left, NlString* ___nl__right){
	return compare_bytes(___nl__left->s, ___nl__left->length, ___nl__right->s, ___nl__right->length);
}

int nl_compare_internal(ImmT ___nl__left, ImmT ___nl__right) {
	if (((NlData *)___nl__left)->type != ((NlData *)___nl__right)->type) {
		nl_die();
	}
	if (_global_const_int_begin_ != NULL
			&& ___nl__left >= _global_const_int_begin_
			&& ___nl__left < _global_const_int_end_
			&& ___nl__right >= _global_const_int_begin_
			&& ___nl__right < _global_const_int_end_) {
		return ___nl__left == ___nl__right;
	}
	if (_global_const_string_begin_ != NULL
			&& ___nl__left >= _global_const_string_begin_
			&& ___nl__left < _global_const_string_end_
			&& ___nl__right >= _global_const_string_begin_
			&& ___nl__right < _global_const_string_end_) {
		return ___nl__left == ___nl__right;
	}
	if (((NlData *)___nl__left)->type == ___TYPE_STRING) {
		return compare_strings((NlString *)___nl__left, (NlString *)___nl__right) == 0;
	} else if (((NlData *)___nl__left)->type == ___TYPE_INT) {
		return (((NlInt *)___nl__left)->i == ((NlInt *)___nl__right)->i);
	} else {
		return ___nl__left == ___nl__right;
	}
}

ImmT c_rt_lib0compare(ImmT ___nl__left, ImmT ___nl__right) {
	return c_rt_lib0int_new(nl_compare_internal(___nl__left, ___nl__right));
}

ImmT c_rt_lib0hash_mk(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT hash = c_rt_lib0hash_new();
	REP(i, nargs) {
		ImmT key = va_arg(a, ImmT);
		ImmT val = va_arg(a, ImmT);
		c_rt_lib0hash_set_value_dec(&hash, key, val);
	}
	va_end(a);
	return hash;
}

ImmT c_rt_lib0hash_mk_dec(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT hash = c_rt_lib0hash_new();
	REP(i, nargs) {
		ImmT key = va_arg(a, ImmT);
		ImmT val = va_arg(a, ImmT);
		c_rt_lib0hash_set_value_dec(&hash, key, val);
		dec_ref(val);
	}
	va_end(a);
	return hash;
}

ImmT c_rt_lib0hash_new_alloc() {
	NlArrHash *ret = (NlArrHash *)alloc_mem(sizeof(NlArrHash));
	nl_data_init((ImmT)ret, ___TYPE_ARRHASH);
	ret->size = 0;
	ret->capacity = START_ARR_HASH_SIZE;
	ret->keys = (ImmT*)alloc_mem(sizeof(ImmT) * ret->capacity);
	ret->values = (ImmT*)alloc_mem(sizeof(ImmT) * ret->capacity);
	return ret;
}

ImmT c_rt_lib0hash_new() {
	inc_ref(_hash);
	return _hash;
}

unsigned get_hash_key(ImmT ___nl__key){
	NlString* str = toStringIfSim(___nl__key);
    unsigned hash = 5381;
    REP(i, str->length){
		hash += str->s[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
	dec_ref(str);
	return hash;
}

void resize_hash(NlHash* ___nl__hash, int new_capacity) {
	int old_capacity = ___nl__hash->capacity;
	NlHashNode *old_tab = ___nl__hash->tab;
	___nl__hash->size = 0;
	___nl__hash->capacity = new_capacity;
	___nl__hash->tab = (NlHashNode*)alloc_mem(sizeof(NlHashNode) * new_capacity);
	REP (i, new_capacity) {
		___nl__hash->tab[i].name = NULL;
		___nl__hash->tab[i].value = NULL;
	}
	REP (i, old_capacity) {
		if (old_tab[i].name != NULL) {
			set_to_hash(___nl__hash, old_tab[i].name, old_tab[i].value);
			dec_ref(old_tab[i].name);
			dec_ref(old_tab[i].value);
		}
	}
	free_mem((void*)old_tab, sizeof(NlHashNode) * old_capacity);
}

unsigned find_hash_slot(NlHash* ___nl__hash, ImmT ___nl__key) {
	unsigned nr = get_hash_key(___nl__key) % ___nl__hash->capacity;
	while (___nl__hash->tab[nr].name != NULL && !nl_compare_internal(___nl__hash->tab[nr].name, ___nl__key)) {
		nr = (nr + 1) % ___nl__hash->capacity;
	}
	return nr;
}

ImmT set_to_hash(NlHash* ___nl__hash, ImmT ___nl__key, ImmT ___nl__val){
	if (___nl__hash->size * MIN_HASH_CELL_ON_ELEM >= ___nl__hash->capacity)
		resize_hash(___nl__hash, ___nl__hash->capacity * 2);

	unsigned nr = find_hash_slot(___nl__hash, ___nl__key);
	ImmT prev = NULL;
	if (___nl__hash->tab[nr].name != NULL) {
		prev = ___nl__hash->tab[nr].value;
	} else {
		___nl__hash->size++;
		inc_ref(___nl__key);
		___nl__hash->tab[nr].name = ___nl__key;
	}
	inc_ref(___nl__val);
	___nl__hash->tab[nr].value = ___nl__val;
	return prev;
}

ImmT set_to_arr_hash(NlArrHash* ___nl__hash, ImmT ___nl__key, ImmT ___nl__val){
	int index = -1;
	ImmT prev = NULL;
	NlArrHash* hash = ___nl__hash;
	ImmT key = ___nl__key;
	ImmT val = ___nl__val;
	REP (i, hash->size) {
		if (nl_compare_internal(key, hash->keys[i])) {
			index = i;
			prev = hash->values[i];
			break;
		}
	}
	if (index == -1) {
		if (hash->capacity == hash->size) {
			int size = sizeof(ImmT) * hash->capacity;
			hash->keys = (ImmT *)realloc_mem(hash->keys, size, size*2);
			hash->values = (ImmT *)realloc_mem(hash->values, size, size*2);
			hash->capacity *= 2;
		}
		index = hash->size;
		++hash->size;
		inc_ref(key);
		hash->keys[index] = key;
	}
	inc_ref(val);
	hash->values[index] = val;
	return prev;
}

ImmT get_from_hash(NlHash* ___nl__hash, ImmT ___nl__key){
	return ___nl__hash->tab[find_hash_slot(___nl__hash, ___nl__key)].value;
}

ImmT get_from_arr_hash(NlArrHash* ___nl__hash, ImmT ___nl__key){
	REP (i, ___nl__hash->size)
		if (nl_compare_internal(___nl__key, ___nl__hash->keys[i]))
			return ___nl__hash->values[i];
	return NULL;
}

void clear_hash_node(NlHashNode* node) {
	dec_ref(node->name);
	dec_ref(node->value);
	node->name = NULL;
	node->value = NULL;
}

void del_from_hash(NlHash* ___nl__hash, ImmT ___nl__key){
	NlHash* hash = ___nl__hash;
	ImmT key = ___nl__key;
	unsigned nr = find_hash_slot(hash, key);
	if (hash->tab[nr].name == NULL)
		return;
	clear_hash_node(&(hash->tab[nr]));
	hash->size--;
	unsigned end = nr;
	while (1) {
		end = (end + 1) % hash->capacity;
		if (hash->tab[end].name == NULL)
			break;
		unsigned h = get_hash_key(hash->tab[end].name) % hash->capacity;
		if ((nr <= end) ? ((nr < h) && (h <= end)) : ((nr < h) || (h <= end))) {
			continue;
		}
		hash->tab[nr].name = hash->tab[end].name;
		hash->tab[nr].value = hash->tab[end].value;
		hash->tab[end].name = NULL;
		hash->tab[end].value = NULL;
		nr = end;
	}
	if (hash->capacity / 2 >= MIN_HASH_SIZE && hash->capacity > hash->size * 4 * MIN_HASH_CELL_ON_ELEM)
		resize_hash(hash, hash->capacity / 2);
}

void del_from_arr_hash(NlArrHash* ___nl__hash, ImmT ___nl__key){
	NlArrHash* hash = ___nl__hash;
	ImmT key = ___nl__key;
	REP (i, hash->size) {
		if (nl_compare_internal(key, hash->keys[i])) {
			dec_ref(hash->keys[i]);
			dec_ref(hash->values[i]);
			while (i < hash->size - 1) {
				hash->keys[i] = hash->keys[i + 1];
				hash->values[i] = hash->values[i + 1];
				++i;
			}
			--hash->size;
			return;
		}
	}
	return;
}

NlHash *copy_hash(NlHash* ___nl__hash) {
	NlHash* hash = ___nl__hash;
	NlHash *hcopy = (NlHash *)alloc_mem(sizeof(NlHash));
	nl_data_init((ImmT)hcopy, ___TYPE_HASH);
	hcopy->size = hash->size;
	hcopy->capacity = hash->capacity;
	hcopy->tab = (NlHashNode*)alloc_mem(sizeof(NlHashNode) * hcopy->capacity);
	REP (i, hcopy->capacity) {
		if (hash->tab[i].name != NULL) {
			inc_ref(hash->tab[i].name);
			inc_ref(hash->tab[i].value);
		}
		hcopy->tab[i].name = hash->tab[i].name;
		hcopy->tab[i].value = hash->tab[i].value;
	}
	return hcopy;
}

NlArrHash* copy_arr_hash(NlArrHash* ___nl__hash) {
	NlArrHash* hash = ___nl__hash;
	NlArrHash *hcopy = (NlArrHash *)alloc_mem(sizeof(NlArrHash));
	nl_data_init((ImmT)hcopy, ___TYPE_ARRHASH);
	hcopy->size = hash->size;
	hcopy->capacity = hash->capacity;
	hcopy->keys = (ImmT*)alloc_mem(sizeof(ImmT) * hcopy->capacity);
	hcopy->values = (ImmT*)alloc_mem(sizeof(ImmT) * hcopy->capacity);
	REP (i, hcopy->size) {
		hcopy->keys[i] = hash->keys[i];
		hcopy->values[i] = hash->values[i];
		inc_ref(hcopy->keys[i]);
		inc_ref(hcopy->values[i]);
	}
	return hcopy;
}

ImmT priv_hash_to_change(ImmT *___ref___hashI) {
	if (REFS(*___ref___hashI) > 1) {
		ImmT ret = NULL;
		if(IS_ARRHASH(*___ref___hashI))	ret = copy_arr_hash((NlArrHash*) *___ref___hashI);
		else if(IS_HASH(*___ref___hashI))ret = copy_hash((NlHash*) *___ref___hashI);
		else	nl_die_internal("Hash expected %s;", NAME(*___ref___hashI));
		dec_ref(*___ref___hashI);
		*___ref___hashI = ret;
	}
	return *___ref___hashI;
}

ImmT arr_hash_to_hash(ImmT ___nl__hashI) {
	NlArrHash *hash = (NlArrHash*)___nl__hashI;
	NlHash *ret = (NlHash *)alloc_mem(sizeof(NlHash));
	nl_data_init((ImmT)ret, ___TYPE_HASH);
	ret->size = 0;
	ret->capacity = START_HASH_SIZE;
	ret->tab = (NlHashNode*)alloc_mem(sizeof(NlHashNode) * ret->capacity);
	REP (i, ret->capacity) {
		ret->tab[i].name = NULL;
		ret->tab[i].value = NULL;
	}
	REP (i, hash->size) {
		set_to_hash(ret, hash->keys[i], hash->values[i]);
	}
	return ret;
}

ImmT c_rt_lib0hash_delete(ImmT *___ref___hashI, ImmT ___nl__keyI) {
	ImmT hash = priv_hash_to_change(___ref___hashI);
	if (!IS_STRING(___nl__keyI)) nl_die_internal("String expected %s;", NAME(___nl__keyI));
	if(IS_ARRHASH(hash))	del_from_arr_hash((NlArrHash*) hash, ___nl__keyI);
	else if(IS_HASH(hash))	del_from_hash((NlHash*) hash, ___nl__keyI);
	else	nl_die_internal("Hash expected %s;", NAME(hash));
	return NULL;
}

bool c_rt_lib0hash_has_key(ImmT ___nl__hashI, ImmT ___nl__keyI) {
	ImmT ret = NULL;
	if (!IS_STRING(___nl__keyI)) nl_die_internal("String expected %s;", NAME(___nl__keyI));
	if(IS_ARRHASH(___nl__hashI))	ret = get_from_arr_hash((NlArrHash*) ___nl__hashI, ___nl__keyI);
	else if(IS_HASH(___nl__hashI))	ret = get_from_hash((NlHash*) ___nl__hashI, ___nl__keyI);
	else	nl_die_internal("Hash expected %s;", NAME(___nl__hashI));
	return ret != NULL;
}

ImmT c_rt_lib0hash_get_value(ImmT ___nl__hashI, ImmT ___nl__keyI) {
	ImmT ret = NULL;
	if (!IS_STRING(___nl__keyI)) nl_die_internal("String expected %s;", NAME(___nl__keyI));
	if(IS_ARRHASH(___nl__hashI))	ret = get_from_arr_hash((NlArrHash*) ___nl__hashI, ___nl__keyI);
	else if(IS_HASH(___nl__hashI))	ret = get_from_hash((NlHash*) ___nl__hashI, ___nl__keyI);
	else	nl_die_internal("Hash expected %s;", NAME(___nl__hashI));
	if(ret == NULL){
		nl_die_internal("no exist key: %s in hash: %s", toStringIfImm(___nl__keyI)->s, aprint(___nl__hashI, 1));
	}
	inc_ref(ret);
	return ret;
}

ImmT c_rt_lib0hash_get_value_dec(ImmT ___nl__hashI, ImmT ___nl__keyI) {
	if (!IS_STRING(___nl__keyI)) nl_die_internal("String expected %s;", NAME(___nl__keyI));
	ImmT ret = c_rt_lib0hash_get_value(___nl__hashI, ___nl__keyI);
	dec_ref(___nl__keyI);
	return ret;
}

ImmT c_rt_lib0hash_set_value_dec(ImmT *___ref___hashI, ImmT ___nl__keyI, ImmT ___nl__val) {
	if (!IS_STRING(___nl__keyI)) nl_die_internal("String expected %s;", NAME(___nl__keyI));
	c_rt_lib0hash_set_value(___ref___hashI, ___nl__keyI, ___nl__val);
	dec_ref(___nl__keyI);
	return NULL;
}

ImmT c_rt_lib0hash_set_value(ImmT *___ref___hashI, ImmT ___nl__keyI, ImmT ___nl__val) {
	ImmT hash = *___ref___hashI;
	if (!IS_STRING(___nl__keyI)) nl_die_internal("String expected %s;", NAME(___nl__keyI));
	if(IS_ARRHASH(hash) && ((NlArrHash *)hash)->size == MAX_ARR_HASH_SIZE){
		hash = arr_hash_to_hash(hash);
		dec_ref(*___ref___hashI);
		*___ref___hashI = hash;
	} else
		hash = priv_hash_to_change(___ref___hashI);
	ImmT prev = NULL;
	if(IS_ARRHASH(hash))	prev = set_to_arr_hash((NlArrHash*) hash, ___nl__keyI, ___nl__val);
	else if(IS_HASH(hash))	prev = set_to_hash((NlHash*) hash, ___nl__keyI, ___nl__val);
	else	nl_die_internal("Hash expected %s;", NAME(hash));
	c_rt_lib0clear(&prev);
	return NULL;
}

int c_rt_lib0hash_size(ImmT ___nl__hashI) {
	return ((NlArrHash *)___nl__hashI)->size;
}

ImmT c_rt_lib0init_iter(ImmT ___nl__hashI) {
	ImmT arr = c_rt_lib0array_new();
	c_rt_lib0array_push(&arr, ___nl__hashI);
	if(IS_ARRHASH(___nl__hashI)){
		ImmT iter = c_rt_lib0int_new(-1);
		((NlInt *)iter)->i++;
		c_rt_lib0array_push(&arr, iter);
		dec_ref(iter);
	} else if(IS_HASH(___nl__hashI)){
		NlHash *hash = (NlHash*)___nl__hashI;
		ImmT iter = c_rt_lib0int_new(-1);
		int i = 0;
		while (i < hash->capacity && hash->tab[i].name == NULL) {
			i++;
		}
		((NlInt *)iter)->i = i;
		c_rt_lib0array_push(&arr, iter);
		dec_ref(iter);
	} else
		nl_die_internal("Hash expected %s;", NAME(___nl__hashI));
	return arr;
}

ImmT c_rt_lib0get_key_iter(ImmT ___nl__iter) {
	NlArray *arr = (NlArray *)___nl__iter;
	ImmT hashI = arr->arr[0];
	INT it = ((NlInt *)arr->arr[1])->i;
	ImmT ret;
	if(IS_ARRHASH(hashI)){
		ret = ((NlArrHash *)hashI)->keys[it];
	} else if(IS_HASH(hashI)){
		ret = ((NlHash *)hashI)->tab[it].name;
	} else nl_die();
	inc_ref(ret);
	return ret;
}

ImmT c_rt_lib0next_iter(ImmT ___nl__iter) {
	NlArray *arr = (NlArray *)___nl__iter;
	ImmT hashI = arr->arr[0];
	if(IS_ARRHASH(hashI)){
		((NlInt *)arr->arr[1])->i++;
	} else if(IS_HASH(hashI)){
		int it = ((NlInt *)arr->arr[1])->i;
		it++;
		NlHash* hash = (NlHash *)hashI;
		while (it < hash->capacity && hash->tab[it].name == NULL) {
			it++;
		}
		((NlInt *)arr->arr[1])->i = it;
	} else nl_die();
	inc_ref(___nl__iter);
	return ___nl__iter;
}

bool c_rt_lib0is_end_hash(ImmT ___nl__iter) {
	NlArray *arr = (NlArray *)___nl__iter;
	ImmT hashI = arr->arr[0];
	INT it = ((NlInt *)arr->arr[1])->i;
	if(IS_ARRHASH(hashI)){
		return it >= ((NlArrHash *)hashI)->size;
	} else if(IS_HASH(hashI)){
		return it >= ((NlHash *)hashI)->capacity;
	} else nl_die();
	return NULL;
}

ImmT c_rt_lib0ov_arg_new(ImmT ___nl__name, ImmT ___nl__arg){
	return c_rt_lib0ov_mk_arg(toStringIfSim(___nl__name), ___nl__arg);
}

ImmT c_rt_lib0ov_none_new(ImmT ___nl__name){
	return c_rt_lib0ov_mk_none(toStringIfSim(___nl__name));
}

ImmT c_rt_lib0ov_mk_arg(ImmT ___nl__name, ImmT ___nl__arg) {
	NlOv *ret = (NlOv *) alloc_mem(sizeof(NlOv));
	nl_data_init((ImmT)ret, ___TYPE_OV);
	inc_ref(___nl__arg);
	ret->name = (NlString *)___nl__name;
	ret->value = ___nl__arg;
	return ret;
}

ImmT c_rt_lib0ov_mk_arg_dec(ImmT ___nl__name, ImmT ___nl__arg) {
	ImmT ret = c_rt_lib0ov_mk_arg(___nl__name, ___nl__arg);
	dec_ref(___nl__arg);
	return ret;
}

ImmT c_rt_lib0ov_mk_none(ImmT ___nl__name) {
	NlOvNone *ret = (NlOvNone *)alloc_mem(sizeof(NlOvNone));
	nl_data_init((ImmT)ret, ___TYPE_OV_NONE);
	ret->name = (NlString *)___nl__name;
	return ret;
}

ImmT c_rt_lib0mk_ov(const char * var, ImmT ___nl__val){
	ImmT str = c_rt_lib0string_new(var);
	ImmT ret = c_rt_lib0ov_arg_new(str, ___nl__val);
	c_rt_lib0clear(&str);
	c_rt_lib0clear(&___nl__val);
	return ret;
}


bool c_rt_lib0ov_is(ImmT ___nl__variant, ImmT ___nl__is_val) {
	if(!IS_OV(___nl__variant) && !IS_OV_NONE(___nl__variant))
		nl_die_internal("expected variant: %s", NAME(___nl__variant));
	return nl_compare_internal(((NlOvNone *)___nl__variant)->name, ___nl__is_val);
}

ImmT c_rt_lib0ov_as(ImmT ___nl__variant, ImmT ___nl__as_val) {
	if (!IS_OV(___nl__variant)) {
		nl_die_internal("variant with argument expected: %s", NAME(___nl__variant));
	}
	NlOv *val = (NlOv *)___nl__variant;
	if (!nl_compare_internal(val->name, ___nl__as_val)) {
		nl_die_internal("variant with case %s as %s", toStringIfImm(val->name)->s, toStringIfImm(___nl__as_val)->s);
	}
	inc_ref(val->value);
	return val->value;
}

bool c_rt_lib0priv_is(ImmT ___nl__variant, ImmT ___nl__is_val) {
	bool r = c_rt_lib0ov_is(___nl__variant, ___nl__is_val);
	dec_ref(___nl__is_val);
	return r;
}

ImmT c_rt_lib0priv_as(ImmT ___nl__variant, ImmT ___nl__as_val) {
	ImmT ret = c_rt_lib0ov_as(___nl__variant, ___nl__as_val);
	dec_ref(___nl__as_val);
	return ret;
}

ImmT c_rt_lib0ov_get_value(ImmT ___nl__variant) {
	if (!IS_OV(___nl__variant)) {
		nl_die_internal("variant with argument expected: %s", NAME(___nl__variant));
	}
	NlOv *val = (NlOv *)___nl__variant;
	inc_ref(val->value);
	return val->value;
}

ImmT c_rt_lib0ov_get_element(ImmT ___nl__variant) {
	if(!IS_OV(___nl__variant) && !IS_OV_NONE(___nl__variant))
		nl_die_internal("expected variant: %s", NAME(___nl__variant));
	ImmT ret = ((NlOvNone *)___nl__variant)->name;
	inc_ref(ret);
	return ret;
}

ImmT c_rt_lib0ov_has_value(ImmT ___nl__variant) {
	if(!IS_OV(___nl__variant) && !IS_OV_NONE(___nl__variant))
		nl_die_internal("expected variant: %s", NAME(___nl__variant));
	return priv_to_nl_native(IS_OV(___nl__variant));
}

void gdb_die(const char *msg);

ImmT nl_die_internal(const char *format, ...) {
	char buffer[DIETABS];
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	fprintf(stderr, "\n");
	va_start(args, format);
	vsnprintf(buffer, DIETABS, format, args);
	va_end(args);
	fflush(stdout);
	gdb_die(buffer);
	exit(1);
}

ImmT nl_die() {
	nl_die_internal("nianio lang die failed");
	return NULL;
}

ImmT nl_die_arg(ImmT ___nl__0) {
	nl_die_internal("nianio lang die failed: \n%s", aprint(___nl__0, 3));
	return NULL;
}

void nl_data_init(ImmT dI, char type) {
	++_created[(unsigned)type];
	NlData *d = (NlData *)dI;
	d->type = type;
	d->refs = 1;
}

ImmT c_rt_lib0string_new_alloc(char *ss, int length, int capacity) {
	NlString *s = (NlString *)alloc_mem(sizeof(NlString));
	nl_data_init(s, ___TYPE_STRING);
	s->s = ss;
	s->length = length;
	s->capacity = capacity;
	return (ImmT)s;
}

ImmT c_rt_lib0string_new(const char *ss){
	return c_rt_lib0string_new_from_bytes(ss, strlen(ss));
}

ImmT c_rt_lib0string_new_from_bytes(const void *mem_loc, int bytes_count) {
	if(bytes_count == 0) {
		inc_ref(_empty_str);
		return _empty_str;
	}

	NlString *s = (NlString *)alloc_mem(sizeof(NlString));
	nl_data_init(s, ___TYPE_STRING);
	s->length = bytes_count;
	s->capacity = s->length+1;
	s->s = (char*)alloc_mem(sizeof(char)*(s->capacity));
	memcpy(s->s, mem_loc, bytes_count);
	s->s[bytes_count] = '\0';
	return (ImmT)s;
}

void c_rt_lib0string_new_to_memory(const char *ss, ImmT memory) {
	NlString *s = (NlString *)memory;
	nl_data_init(s, ___TYPE_STRING);
	s->length = strlen(ss);
	s->capacity = s->length + 1;
	s->s = (char*)alloc_mem(sizeof(char)*(s->capacity));
	memcpy(s->s, ss, sizeof(char) * s->capacity);
}

ImmT c_rt_lib0string_chr(ImmT ___nl__sI) {
	const char c = (char) getIntFromImm(___nl__sI);
	return c_rt_lib0string_new_from_bytes(&c, 1);
}

ImmT c_rt_lib0string_ord(ImmT ___nl__sI1) {
	NlString *sI = toStringIfSim(___nl__sI1);
	if(sI->length == 0) nl_die();
	ImmT ret = c_rt_lib0int_new(((unsigned char*)((NlString *)sI)->s)[0]);
	dec_ref(sI);
	return ret;
}

ImmT c_rt_lib0string_length(ImmT ___nl__sI1) {
	NlString *sI = toStringIfSim(___nl__sI1);
	ImmT ret = c_rt_lib0int_new(((NlString *)sI)->length);
	dec_ref(sI);
	return ret;
}

NlString* toStringIfImm(ImmT imm){
	char tab[50];
	if(IS_ARRHASH(imm)){
		sprintf(tab,"ARR_HASH(%p)", imm);
	} else if(IS_HASH(imm)){
		sprintf(tab,"HASH(%p)", imm);
	} else if(IS_ARR(imm)){
		sprintf(tab,"ARRAY(%p)", imm);
	} else if(IS_OV_NONE(imm)){
		sprintf(tab,"OV_NONE(%p)", imm);
	} else if(IS_OV(imm)){
		sprintf(tab,"OV_ARG(%p)", imm);
	} else {
		return toStringIfSim(imm);
	}
	return (NlString*)c_rt_lib0string_new(tab);
}

NlString* toStringIfSim(ImmT sim){
	if(IS_INT(sim)){
		char tab[ITABS];
		sprintf(tab,"%lld",((NlInt *)sim)->i);
		return (NlString*)c_rt_lib0string_new(tab);
	} else if(IS_STRING(sim)){
		inc_ref(sim);
		return (NlString*)sim;
	} else if(IS_FUNC(sim)){
		NlString* ret = ((NlFunction *)sim)->name;
		inc_ref((ImmT*)ret);
		return ret;
	} else
		nl_die_internal("can not converted to string %s;", NAME(sim));
	return NULL;
}

INT getIntFromImm(ImmT ___nl__num){
	if(IS_INT(___nl__num))
		return ((NlInt *)___nl__num)->i;
	nl_die_internal("expected int, got %s;", NAME(___nl__num));
	return 0;
}

double getFloatFromImm(ImmT ___nl__num){
	if (IS_STRING(___nl__num)) 
		return atof(((NlString*)___nl__num)->s);
	else if (IS_INT(___nl__num))
		return (double)((NlInt*)___nl__num)->i;

	nl_die_internal("can not converted to float %s;", NAME(___nl__num));
	return 0;
}

ImmT concat_new_string(NlString *ls, NlString *rs) {
	int len = ls->length + rs->length;
	char *_new = (char *)alloc_mem(sizeof(char)*(len + 1));
	memcpy(_new, ls->s, sizeof(char) * ls->length);
	memcpy(_new+ls->length, rs->s, sizeof(char) * rs->length);
	_new[len] = '\0';
	return c_rt_lib0string_new_alloc(_new, len, len + 1);
}

ImmT c_rt_lib0concat_new(ImmT ___nl__left, ImmT ___nl__right) {
	NlString *ls = toStringIfSim(___nl__left);
	NlString *rs = toStringIfSim(___nl__right);
	ImmT ret = concat_new_string(ls, rs);
	dec_ref(ls);
	dec_ref(rs);
	return ret;
}

ImmT c_rt_lib0concat_add(ImmT ___nl__left, ImmT ___nl__right) {
	NlString *ls = toStringIfSim(___nl__left);
	ImmT ret = ls;
	if (REFS(ls) <= 2) {
		c_rt_lib0fast_concat(&ret, ___nl__right);
	}else{
		NlString *rs = toStringIfSim(___nl__right);
		ret = concat_new_string(ls, rs);
		dec_ref(rs);
		dec_ref(ls);
	}
	return ret;
}

ImmT c_rt_lib0fast_concat(ImmT *___ref___left, ImmT ___nl__right){
	NlString *ls = (NlString*)(*___ref___left);
	NlString *rs = toStringIfSim(___nl__right);
	if(ls->capacity < ls->length + rs->length + 1){
		int size = sizeof(char)*ls->capacity;
		while(ls->capacity < ls->length + rs->length + 1){
			ls->capacity *= 2;
		}
		char * _new = (char *)alloc_mem(sizeof(char)*(ls->capacity));
		if(ls->length>0)
			memcpy(_new, ls->s, sizeof(char) * ls->length);
		free_mem(ls->s, size);
		ls->s = _new;
	}
	memcpy(ls->s+ls->length, rs->s, sizeof(char) * rs->length);
	ls->length += rs->length;
	ls->s[ls->length] = '\0';
	dec_ref(rs);
	return NULL;
}

ImmT c_rt_lib0array_new_alloc() {
	NlArray *ret = (NlArray *)alloc_mem(sizeof(NlArray));
	nl_data_init(ret, ___TYPE_ARR);
	ret->size = 0;
	ret->capacity = START_ARRAY_SIZE;
	ret->arr = (ImmT *)alloc_mem(sizeof(ImmT) * ret->capacity);
	return ret;
}

ImmT c_rt_lib0array_new() {
	inc_ref(_array);
	return _array;
}

INT c_rt_lib0array_len(ImmT ___nl__arrI) {
	if(!IS_ARR(___nl__arrI)) nl_die_internal("Array expected %s;", NAME(___nl__arrI));
	return((NlArray *)___nl__arrI)->size;
}

NlArray* nl_array_internal_copy(ImmT ___nl__arrI) {
	NlArray *arr = (NlArray *)___nl__arrI;
	NlArray *ret = (NlArray *)alloc_mem(sizeof(NlArray));
	nl_data_init(ret, ___TYPE_ARR);
	ret->arr = (ImmT *)alloc_mem(sizeof(ImmT) * arr->capacity);
	memcpy(ret->arr, arr->arr, sizeof(ImmT) * arr->capacity);
	ret->capacity = arr->capacity;
	ret->size = arr->size;
	REP(i, arr->size) {
		inc_ref(arr->arr[i]);
	}
	return ret;
}

NlArray *priv_arr_to_change(ImmT *___ref___arrI) {
	NlArray *arr = (NlArray *)*___ref___arrI;
	if (REFS(arr) > 1) {
		arr = nl_array_internal_copy(arr);
		dec_ref(*___ref___arrI);
		*___ref___arrI = arr;
	}
	return arr;
}

ImmT c_rt_lib0array_push(ImmT *___ref___arrI, ImmT ___nl__el) {
	if(!IS_ARR(*___ref___arrI)) nl_die_internal("Array expected %s;", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	if (arr->size == arr->capacity) {
		int size = sizeof(ImmT) * arr->capacity;
		arr->arr = (ImmT *)realloc_mem(arr->arr, size, size*2);
		arr->capacity *= 2;
		if (arr->arr == NULL) {
			nl_die();
		}
	}
	arr->arr[arr->size] = ___nl__el;
	inc_ref(___nl__el);
	++arr->size;
	return NULL;
}

ImmT c_rt_lib0array_pop(ImmT *___ref___arrI) {
	if(!IS_ARR(*___ref___arrI)) nl_die_internal("Array expected %s;", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	if (arr->size == 0) {
		nl_die_internal("pop on empty array");
	}
	--arr->size;
	dec_ref(arr->arr[arr->size]);
	if (arr->capacity > 2 && arr->size <= arr->capacity / 4) {
		int size = sizeof(ImmT)*arr->capacity;
		arr->arr = (ImmT *)realloc_mem(arr->arr, size, size/2);
		arr->capacity /= 2;
		if (arr->arr == NULL) {
			nl_die();
		}
	}
	return NULL;
}

ImmT c_rt_lib0int_new(INT i) {
	if(i==0){
		inc_ref(_int_0);
		return _int_0;
	}
	if(i==1){
		inc_ref(_int_1);
		return _int_1;
	}
	NlInt *ret = (NlInt *)alloc_mem(sizeof(NlInt));
	nl_data_init(ret, ___TYPE_INT);
	ret->i = i;
	return ret;
}

void c_rt_lib0int_new_to_memory(INT i, ImmT memory) {
	NlInt *ret = (NlInt *)memory;
	nl_data_init(ret, ___TYPE_INT);
	ret->i = i;
}

ImmT c_rt_lib0float_round(ImmT ___nl__f) {
	double number = getFloatFromImm(___nl__f);
	number = round(number);
	if (number == 0) number = 0;
	char number_str[20];
	sPrintFloat(number_str, number);
	return c_rt_lib0string_new(number_str);
}

ImmT c_rt_lib0float_fixed_str(ImmT ___nl__f) {
	char tab[FTABS];
	sPrintFloat(tab, getFloatFromImm(___nl__f));
	return (NlString*)c_rt_lib0string_new(tab);
}

ImmT c_rt_lib0array_get(ImmT ___nl__arrI, INT ___nl__int__indexI) {
	NlArray *arr = (NlArray *)___nl__arrI;
	INT index = ___nl__int__indexI;
	if (index < 0 || index >= arr->size)
		nl_die_internal("array index %d out of range, array size: %d", index, arr->size);
	ImmT ret = arr->arr[index];
	inc_ref(ret);
	return ret;
}

ImmT c_rt_lib0array_set(ImmT *___ref___arrI, INT ___nl__int__indexI, ImmT ___nl__el) {
	if(!IS_ARR(*___ref___arrI)) nl_die_internal("Array expected %s;", NAME(*___ref___arrI));
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	INT index = ___nl__int__indexI;
	if (index < 0 || index >= arr->size)
		nl_die_internal("array index %d out of range, array size: %d", index, arr->size);
	dec_ref(arr->arr[index]);
	inc_ref(___nl__el);
	arr->arr[index] = ___nl__el;
	return ___nl__el;
}

ImmT c_rt_lib0array_mk(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT arr = c_rt_lib0array_new();
	REP(i, nargs) {
		c_rt_lib0array_push(&arr, va_arg(a, ImmT));
	}
	va_end(a);
	return arr;
}

ImmT c_rt_lib0array_mk_dec(int nargs, ...) {
	va_list a;
	va_start(a, nargs);
	ImmT arr = c_rt_lib0array_new();
	REP(i, nargs) {
		ImmT arg = va_arg(a, ImmT);
		c_rt_lib0array_push(&arr, arg);
		dec_ref(arg);
	}
	va_end(a);
	return arr;
}

bool c_rt_lib0is_array(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_ARR(d))
		return true;
	return false;
}

bool c_rt_lib0is_hash(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_ARRHASH(d) || IS_HASH(d))
		return true;
	return false;
}

bool c_rt_lib0is_int(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	return IS_INT(d);
}

bool c_rt_lib0is_string(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	return IS_STRING(d) || IS_FUNC(d);
}

bool c_rt_lib0is_printable(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_STRING(d) || IS_INT(d) || IS_FUNC(d))
		return true;
	return false;
}

bool c_rt_lib0is_variant(ImmT ___nl__imm) {
	NlData *d =  (NlData *)___nl__imm;
	if (IS_OV(d) || IS_OV_NONE(d))
		return true;
	return false;
}

bool c_rt_lib0eq(ImmT ___nl__left, ImmT ___nl__right) {
	if (!IS_STRING(___nl__left) && !IS_FUNC(___nl__left)) nl_die_internal("String expected %s;", NAME(___nl__left));
	if (!IS_STRING(___nl__right) && !IS_FUNC(___nl__right)) nl_die_internal("String expected %s;", NAME(___nl__right));
	NlString *ls = toStringIfSim(___nl__left);
	NlString *rs = toStringIfSim(___nl__right);
	bool ret = nl_compare_internal(ls, rs);
	dec_ref(ls);
	dec_ref(rs);
	return ret;
}

bool c_rt_lib0ne(ImmT ___nl__left, ImmT ___nl__right) {
	return !c_rt_lib0eq(___nl__left, ___nl__right);
}

ImmT priv_to_nl_native(int arg) {
	return arg == 0 ? c_rt_lib0get_false() : c_rt_lib0get_true();
}

ImmT c_rt_lib0get_false(){
	inc_ref(_false);
	return _false;
}

ImmT c_rt_lib0get_true(){
	inc_ref(_true);
	return _true;
}

bool c_rt_lib0check_true_native(ImmT ___nl__arg) {
	if(!IS_OV_NONE(___nl__arg)) nl_die_internal("argument is not empty variant in boolean check");
	if(___nl__arg == _true) return true;
	if(___nl__arg == _false) return false;
	if (compare_string_with_cstr(((NlOv*)___nl__arg)->name, "TRUE") == 0) {
		return true;
	} else if (compare_string_with_cstr(((NlOv*)___nl__arg)->name, "FALSE") == 0) {
		return false;
	}
	char *name = ((NlOv*)___nl__arg)->name->s;
	nl_die_internal("bad variant in boolean check: %s", name);
	return false;
}

ImmT c_rt_lib0bool_to_nl_native(bool b) {
	return priv_to_nl_native(b);
}

ImmT c_rt_lib0not(ImmT ___nl__arg) {
	return priv_to_nl_native(!c_rt_lib0check_true_native(___nl__arg));
}

ImmT c_rt_lib0unary_minus(ImmT ___nl__arg) {
	return c_rt_lib0int_new(-getIntFromImm(___nl__arg));
}

ImmT c_rt_lib0unary_plus(ImmT ___nl__arg) {
	inc_ref(___nl__arg);
	return ___nl__arg;
}

ImmT c_rt_lib0get_ref_hash(ImmT ___nl__hashI, ImmT ___nl__keyI){
	ImmT ret = c_rt_lib0hash_get_value(___nl__hashI, ___nl__keyI);
	if (REFS(___nl__hashI) == 1)
		dec_ref(ret);
	return ret;
}

ImmT c_rt_lib0set_ref_hash(ImmT *___ref___hashI, ImmT ___nl__key, ImmT ___nl__val){
	if(REFS(*___ref___hashI) == 1) {
		ImmT hash = *___ref___hashI;
		ImmT prev = NULL;
		if(IS_ARRHASH(hash))	prev = set_to_arr_hash((NlArrHash*) hash, ___nl__key, ___nl__val);
		else if(IS_HASH(hash))	prev = set_to_hash((NlHash*) hash, ___nl__key, ___nl__val);
		else	nl_die_internal("Hash expected %s;", NAME(hash));
		if(prev == NULL) {
			nl_die_internal("set_ref_hash no exist key: %s in hash: %s", toStringIfImm(___nl__key)->s, aprint(hash, 1));
		}
		return NULL;
	}
	c_rt_lib0hash_set_value(___ref___hashI, ___nl__key, ___nl__val);
	return NULL;
}

ImmT c_rt_lib0get_ref_arr(ImmT ___nl__arrI, INT ___nl__int__indexI){
	ImmT ret = c_rt_lib0array_get(___nl__arrI, ___nl__int__indexI);
	if (REFS(___nl__arrI) == 1)
		dec_ref(ret);
	return ret;
}

ImmT c_rt_lib0set_ref_arr(ImmT *___ref___arrI, INT ___nl__int__indexI, ImmT ___nl__val){
	int many = REFS(*___ref___arrI) > 1;
	NlArray *arr = priv_arr_to_change(___ref___arrI);
	INT index = ___nl__int__indexI;
	if (index < 0 || index >= arr->size)
		nl_die_internal("array index %d out of range, array size: %d", index, arr->size);
	inc_ref(___nl__val);
	if(many) dec_ref(arr->arr[index]);
	arr->arr[index] = ___nl__val;
	return NULL;
}

ImmT c_rt_lib0print(ImmT ___nl__arg) {
	NlData *d =  (NlData *)___nl__arg;
	if (IS_STRING(d)) {
		fwrite(((NlString *)___nl__arg)->s, sizeof(char), ((NlString *)___nl__arg)->length, stdout);
	} else if (IS_INT(d)) {
		printf("%lld", ((NlInt *)___nl__arg)->i);
	} else if (IS_FUNC(d)) {
		printf("%s", ((NlFunction*)___nl__arg)->name->s);
	} else {
		printf("ADDR:(%p)", ___nl__arg);
	}
	return NULL;
}

ImmT c_rt_lib0flush(){
	fflush(stdout);
	return NULL;
}

ImmT c_rt_lib0print_shallow(ImmT ___nl__val){
	char* str = aprint(___nl__val, 2);
	fprintf(stderr, "%s", str);
	fflush(stderr);
	free(str);
	return NULL;
}

typedef struct {
	char* str;
	int size;
	int len;
} BUFFER;

void bprintf(BUFFER *buf, int add, const char* format, ...) {
	add+=strlen(format)+2;
	if(buf->size <= buf->len+add) {
		buf->size += buf->size+add;
		buf->str = realloc(buf->str, buf->size);
	}
	va_list a;
	va_start(a, format);
	buf->len += vsnprintf(buf->str+buf->len, buf->size-buf->len, format, a);
	va_end(a);
}

char* sprint_debug(ImmT val, BUFFER *buf, int deep){
	if (val == NULL) {
		bprintf(buf, 0, "NULL");
		return buf->str;
	}
	bprintf(buf, 0, NAME(val));
	if(deep==0 && !(IS_STRING(val) || IS_INT(val) || IS_FUNC(val))){
		return buf->str;
	}
	--deep;
	int type = ((NlData *)val)->type;
	if (type == ___TYPE_STRING) {
		NlString *ss = (NlString *)val;
		bprintf(buf, ss->length, " \"%s\"; ", ss->s);
	} else if (type == ___TYPE_ARRHASH) {
		NlArrHash *hash = (NlArrHash *)val;
		bprintf(buf, 10, " %d{",hash->size);
		REP(i, hash->size){
			sprint_debug(hash->keys[i], buf, deep);
			bprintf(buf, 0, "=>");
			sprint_debug(hash->values[i], buf, deep);
			bprintf(buf, 0, ", ");
		}
		bprintf(buf, 0, "}; ");
	} else if (type == ___TYPE_HASH) {
		NlHash *hash = (NlHash *)val;
		bprintf(buf, 10, " %d{",hash->size);
		REP (i, hash->capacity) {
			if (hash->tab[i].name != NULL) {
				sprint_debug(hash->tab[i].name, buf, deep);
				bprintf(buf, 0, "=>");
				sprint_debug(hash->tab[i].value, buf, deep);
				bprintf(buf, 0, ", ");
			}
		}
		bprintf(buf, 0, "}; ");
	} else if (type == ___TYPE_ARR) {
		NlArray *arr = (NlArray *)val;
		bprintf(buf, 10, " %d[", arr->size);
		REP(i, arr->size){
			sprint_debug(arr->arr[i], buf, deep);
			bprintf(buf, 0, ", ");
		}
		bprintf(buf, 0, "]; ");
	} else if (type == ___TYPE_OV_NONE) {
		NlOvNone *Ov = (NlOvNone *)val;
		bprintf(buf, Ov->name->length, " :%s; ", Ov->name->s);
	} else if (type == ___TYPE_OV) {
		NlOv *Ov = (NlOv *)val;
		bprintf(buf, Ov->name->length, " :%s( ", Ov->name->s);
		sprint_debug(Ov->value, buf, deep);
		bprintf(buf, 0, "); ");
	} else if (type == ___TYPE_INT) {
		bprintf(buf, 20, " %lld; ", ((NlInt *)val)->i);
	} else if (type == ___TYPE_FUNC) {
		NlFunction *f = (NlFunction *)val;
		bprintf(buf, f->name->length + f->module->length, " \"%s::%s\"; ", f->name->s, f->module->s);
	} else {
		bprintf(buf, 10, " %d; ", type);
	}
	return buf->str;
}

char* aprint(ImmT val, int deep){
	BUFFER buf;
	buf.len = buf.size = 0;
	buf.str = NULL;
	return sprint_debug(val, &buf, deep);
}

void* alloc_mem(int size){
	_mem_sum += size;
	void* ret = malloc(size);
	if(ret==NULL)
		nl_die_internal("can not alloc %d bytes;", size);
	return ret;
}

void* realloc_mem(void* ptr, int sold, int snew){
	_free_sum += sold;
	_mem_sum += snew;
	return realloc(ptr, snew);
}

void free_mem(void* ptr, int size){
	free(ptr);
	_free_sum += size;
}

void checktype(ImmT arg){
	NlData *d = (NlData *)arg;
	if(d->type>9 || d->type<1) nl_die_internal("checktype %d", d->type);
	if(d->refs<=0) nl_die_internal("checkrefs %d", d->refs);
}

void c_rt_lib0move(ImmT *___ref___left, ImmT ___nl__right){
	if(*___ref___left!=NULL) dec_ref(*___ref___left);
	*___ref___left = ___nl__right;
}

void c_rt_lib0copy(ImmT *___ref___left, ImmT ___nl__right){
	inc_ref(___nl__right);
	if(*___ref___left!=NULL) dec_ref(*___ref___left);
	*___ref___left = ___nl__right;
}

void c_rt_lib0clear(ImmT *___ref___arg){
	if(*___ref___arg == NULL) return;
	dec_ref(*___ref___arg);
	*___ref___arg = NULL;
}

void c_rt_lib0delete(ImmT ___nl__arg){
	if(___nl__arg == NULL) return;
	dec_ref(___nl__arg);
}

void c_rt_lib0arg_val(ImmT ___nl__arg){
	inc_ref(___nl__arg);
}

ImmT c_rt_lib0gen_imm(ImmT imm){
	((NlData*)imm)->refs--;
	return imm;
}

ImmT c_rt_lib0int_to_string(INT n) {
	char str[20];
	sprintf(str, "%lld", n);
	ImmT res = c_rt_lib0string_new(str);
	return res;
}

void inc_ref(ImmT dI) {
	checktype(dI);
	++((NlData*)dI)->refs;
}

void dec_ref(ImmT dI) {
	dec_ref_adv(dI, 1);
}

void dec_ref_adv(ImmT dI, int with_struct) {
	NlData *d = (NlData *)dI;
	checktype(dI);
	--d->refs;
	if (d->refs == 0) {
		int type = d->type;
		if (type == ___TYPE_ARR) {
			NlArray *arr = (NlArray *)d;
			REP(i, arr->size) {
				dec_ref_adv(arr->arr[i], with_struct);
			}
			free_mem(arr->arr, sizeof(ImmT)*arr->capacity);
			if(with_struct) free_mem(dI, sizeof(NlArray));
		} else if (type == ___TYPE_INT) {
			if(with_struct) free_mem(dI, sizeof(NlInt));
		} else if (type == ___TYPE_STRING) {
			free_mem(((NlString *)d)->s, ((NlString*)dI)->capacity);
			if(with_struct) free_mem(dI, sizeof(NlString));
		} else if (type == ___TYPE_ARRHASH) {
			NlArrHash *hash = (NlArrHash *)d;
			REP(i, hash->size) {
				dec_ref_adv(hash->values[i], with_struct);
				dec_ref_adv(hash->keys[i], with_struct);
			}
			free_mem(hash->values, sizeof(ImmT)*hash->capacity);
			free_mem(hash->keys, sizeof(ImmT)*hash->capacity);
			if(with_struct) free_mem(dI, sizeof(NlArrHash));
		} else if (type == ___TYPE_HASH) {
			NlHash *hash = (NlHash *)d;
			REP (i, hash->capacity) {
				if (hash->tab[i].name != NULL) {
					clear_hash_node(&(hash->tab[i]));
				}
			}
			free_mem(hash->tab, sizeof(NlHashNode) * hash->capacity);
			if(with_struct) free_mem(hash, sizeof(NlHash));
		} else if (type == ___TYPE_OV_NONE) {
			NlOvNone *ov = (NlOvNone *)d;
			dec_ref_adv((ImmT)ov->name, with_struct);
			if(with_struct) free_mem(dI, sizeof(NlOvNone));
		} else if (type == ___TYPE_OV) {
			NlOv *ov = (NlOv *)d;
			dec_ref_adv((ImmT)ov->name, with_struct);
			dec_ref_adv(ov->value, with_struct);
			if(with_struct) free_mem(dI, sizeof(NlOv));
		} else if (type == ___TYPE_FUNC) {
			NlFunction *func = (NlFunction *)d;
			dec_ref_adv((ImmT)func->name, with_struct);
			dec_ref_adv((ImmT)func->module, with_struct);
			if(with_struct) free_mem(dI, sizeof(NlFunction));
		} else {
			nl_die_internal("unimplementing deleting type");
		}
		++_deleted[(unsigned)type];
	}
}

void gdb_die(const char *msg){
	int dying_pid = getpid();
	int token_pipe[2];
	if (pipe(token_pipe)) {
		exit(1);
	}

	int child_pid = fork();
	if (child_pid < 0) {
		fprintf(stderr, "Cannot fork\n");
		exit(1);
	} else if (child_pid == 0) {
		close(token_pipe[1]);
		char t[10];
		if (read(token_pipe[0], t, 1) != 1) {
			perror("cannot read pipe");
			exit(1);
		}
		close(token_pipe[0]);

		char cmd[10024], cpath[1100], gdbpath[1100], time_part[1000];
		cpath[0] = '\0';
		gdbpath[0] = '\0';
		time_part[0] = '\0';

		struct tm *ti;
		struct timeval te;
		gettimeofday(&te, NULL);
		ti = localtime(&te.tv_sec);
		sprintf(time_part, "%04d%02d%02d_%02d%02d%02d%03d", ti->tm_year+1900, ti->tm_mon+1, ti->tm_mday, ti->tm_hour, ti->tm_min, ti->tm_sec, (int)te.tv_usec / 1000);
		char *logs_dir = get_logs_dir();
		sprintf(cpath, "%s/stacktrace_%s_%d_c.csv", logs_dir, time_part, dying_pid);
		sprintf(gdbpath, "%s/stacktrace_%s_%d_gdb.csv", logs_dir, time_part, dying_pid);
		sprintf(cmd, "mkdir -p \"%s\" | \
			gdb -p %d --batch -ex \"set width 0\" -ex \"set logging file %s\" -ex \"set logging on \" -ex backtrace \
			-ex \"set logging off\" -ex \"call gdb_save_stacktrace(\\\"%s\\\", \\\"%s\\\")\" -ex quit \
			> /dev/null 2> /dev/null",
			logs_dir, dying_pid, gdbpath, gdbpath, cpath);
		const char* argv[] = {"bash", "-c", cmd, 0};
		execve("/bin/bash", (char**)argv, 0);
		fprintf(stderr, "Cannot exec bash\n");
		exit(1);
	} else {
		close(token_pipe[0]);
		prctl(PR_SET_PTRACER, child_pid, 0, 0, 0);
		write(token_pipe[1], "t", 1);
		close(token_pipe[1]);
		waitpid(child_pid, 0, 0);
		exit(1);
	}
}

ImmT c_rt_lib0str_float_add(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	char res_str[20];
	sPrintFloat(res_str, getFloatFromImm(___nl__lhs) + getFloatFromImm(___nl__rhs));
	return c_rt_lib0string_new(res_str);
}

ImmT c_rt_lib0str_float_mul(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	char res_str[20];
	sPrintFloat(res_str, getFloatFromImm(___nl__lhs) * getFloatFromImm(___nl__rhs));
	return c_rt_lib0string_new(res_str);
}

ImmT c_rt_lib0str_float_sub(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	char res_str[20];
	sPrintFloat(res_str, getFloatFromImm(___nl__lhs) - getFloatFromImm(___nl__rhs));
	return c_rt_lib0string_new(res_str);
}

ImmT c_rt_lib0str_float_div(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	char res_str[20];
	sPrintFloat(res_str, getFloatFromImm(___nl__lhs) / getFloatFromImm(___nl__rhs));
	return c_rt_lib0string_new(res_str);
}

ImmT c_rt_lib0str_float_mod(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	char res_str[20];
	sPrintFloat(res_str, fmod(getFloatFromImm(___nl__lhs), getFloatFromImm(___nl__rhs)));
	return c_rt_lib0string_new(res_str);
}

bool c_rt_lib0str_float_eq(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	return getFloatFromImm(___nl__lhs) == getFloatFromImm(___nl__rhs);
}

bool c_rt_lib0str_float_ne(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	return getFloatFromImm(___nl__lhs) != getFloatFromImm(___nl__rhs);
}

bool c_rt_lib0str_float_lt(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	return getFloatFromImm(___nl__lhs) < getFloatFromImm(___nl__rhs);
}

bool c_rt_lib0str_float_gt(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	return getFloatFromImm(___nl__lhs) > getFloatFromImm(___nl__rhs);
}

bool c_rt_lib0str_float_leq(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	return getFloatFromImm(___nl__lhs) <= getFloatFromImm(___nl__rhs);
}

bool c_rt_lib0str_float_geq(ImmT ___nl__lhs, ImmT ___nl__rhs) {
	return getFloatFromImm(___nl__lhs) >= getFloatFromImm(___nl__rhs);
}

