
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "dfile.h"
#include "ov.h"
#include "c_std_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "nl.h"
#include "ptd.h"
#include "string_utils.h"
#include "ptd.h"
#line 1 "dfile.nl"

static ImmT *__const__f = NULL;
void dfile_priv0__const__init();
ImmT dfile_priv0__const__sim(int __nr);
ImmT dfile_priv0__const__sing(int __nr);

ImmT  dfile_priv0eat_ws(dfile0state_t0type* ___ref___im__0);
ImmT  dfile_priv0get_char(dfile0state_t0type* ___ref___im__0);
bool  dfile_priv0is_ov(dfile0state_t0type* ___ref___im__0);
ImmT  dfile_priv0eat_non_ws(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
ImmT  dfile_priv0parse_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2);
ImmT  dfile_priv0finish_quoted_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
ImmT  dfile_priv0finish_escape_seq(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
ImmT  dfile_priv0eat_hex_digit(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1);
bool  dfile_priv0match_s(dfile0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0parse(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2);
ImmT  dfile_priv0sp(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0sprintstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
bool  dfile_priv0is_simple_string(ImmT  ___nl__im__0);
ImmT  dfile_priv0sprint_hash_key(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0get_ind(INT  ___nl__int__0);
ImmT  dfile_priv0sprint_hash(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3);
bool  dfile_priv0handle_debug(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0sprint(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3);
ImmT  dfile_priv0print_net_formatstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  dfile_priv0print_net_format(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1);


ImmT  dfile0deep_eq0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0deep_eq");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = dfile0deep_eq(*var0, *var1);
return res;
}
ImmT  dfile0deep_eq(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
bool  ___nl__bool__41 = false;
bool  ___nl__bool__42 = false;
ImmT  ___nl__im__43 = NULL;
bool  ___nl__bool__44 = false;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
bool  ___nl__bool__51 = false;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
ImmT  ___nl__im__57 = NULL;
bool  ___nl__bool__58 = false;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
bool  ___nl__bool__64 = false;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
bool  ___nl__bool__67 = false;
ImmT  ___nl__im__68 = NULL;
bool  ___nl__bool__69 = false;
ImmT  ___nl__im__70 = NULL;
bool  ___nl__bool__71 = false;
bool  ___nl__bool__72 = false;
ImmT  ___nl__im__73 = NULL;
bool  ___nl__bool__74 = false;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
bool  ___nl__bool__79 = false;
ImmT  ___nl__im__80 = NULL;
#line 16
___nl__bool__2 = nl0is_hash(___nl__im__0);
#line 16
___nl__bool__2 = !___nl__bool__2;
#line 16
if(___nl__bool__2){ goto label_97;}
#line 17
___nl__bool__3 = nl0is_hash(___nl__im__1);
#line 17
___nl__bool__3 = !___nl__bool__3;
#line 17
___nl__bool__3 = !___nl__bool__3;
#line 17
if(___nl__bool__3){ goto label_16;}
#line 17
___nl__bool__4 = false;
#line 17
c_rt_lib0move(&___nl__im__5, c_rt_lib0bool_to_nl_native(___nl__bool__4));
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
c_rt_lib0clear(&___nl__im__1);
#line 17
//clear ___nl__bool__2;
#line 17
//clear ___nl__bool__3;
#line 17
//clear ___nl__bool__4;
#line 17
return ___nl__im__5;
#line 17
goto label_16;
#line 17
label_16:
;
#line 17
//clear ___nl__bool__3;
#line 17
//clear ___nl__bool__4;
#line 17
c_rt_lib0clear(&___nl__im__5);
#line 18
___nl__int__7 = hash0size(___nl__im__0);
#line 18
___nl__int__8 = hash0size(___nl__im__1);
#line 18
___nl__bool__6 = ___nl__int__7 == ___nl__int__8;
#line 18
//clear ___nl__int__7;
#line 18
//clear ___nl__int__8;
#line 18
___nl__bool__6 = !___nl__bool__6;
#line 18
___nl__bool__6 = !___nl__bool__6;
#line 18
if(___nl__bool__6){ goto label_37;}
#line 18
___nl__bool__9 = false;
#line 18
c_rt_lib0move(&___nl__im__10, c_rt_lib0bool_to_nl_native(___nl__bool__9));
#line 18
c_rt_lib0clear(&___nl__im__0);
#line 18
c_rt_lib0clear(&___nl__im__1);
#line 18
//clear ___nl__bool__2;
#line 18
//clear ___nl__bool__6;
#line 18
//clear ___nl__bool__9;
#line 18
return ___nl__im__10;
#line 18
goto label_37;
#line 18
label_37:
;
#line 18
//clear ___nl__bool__6;
#line 18
//clear ___nl__bool__9;
#line 18
c_rt_lib0clear(&___nl__im__10);
#line 19
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__0));
#line 19
label_42:
;
#line 19
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 19
if(___nl__bool__12){ goto label_95;}
#line 19
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 19
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__11));
#line 20
___nl__bool__15 = hash0has_key(___nl__im__1, ___nl__im__11);
#line 20
___nl__bool__15 = !___nl__bool__15;
#line 20
___nl__bool__15 = !___nl__bool__15;
#line 20
if(___nl__bool__15){ goto label_64;}
#line 20
___nl__bool__16 = false;
#line 20
c_rt_lib0move(&___nl__im__17, c_rt_lib0bool_to_nl_native(___nl__bool__16));
#line 20
c_rt_lib0clear(&___nl__im__0);
#line 20
c_rt_lib0clear(&___nl__im__1);
#line 20
//clear ___nl__bool__2;
#line 20
c_rt_lib0clear(&___nl__im__11);
#line 20
//clear ___nl__bool__12;
#line 20
c_rt_lib0clear(&___nl__im__13);
#line 20
c_rt_lib0clear(&___nl__im__14);
#line 20
//clear ___nl__bool__15;
#line 20
//clear ___nl__bool__16;
#line 20
return ___nl__im__17;
#line 20
goto label_64;
#line 20
label_64:
;
#line 20
//clear ___nl__bool__15;
#line 20
//clear ___nl__bool__16;
#line 20
c_rt_lib0clear(&___nl__im__17);
#line 21
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__11));
#line 21
c_rt_lib0move(&___nl__im__20, dfile0deep_eq(___nl__im__13, ___nl__im__19));
#line 21
___nl__bool__18 = c_rt_lib0check_true_native(___nl__im__20);
#line 21
c_rt_lib0clear(&___nl__im__19);
#line 21
c_rt_lib0clear(&___nl__im__20);
#line 21
___nl__bool__18 = !___nl__bool__18;
#line 21
___nl__bool__18 = !___nl__bool__18;
#line 21
if(___nl__bool__18){ goto label_89;}
#line 21
___nl__bool__21 = false;
#line 21
c_rt_lib0move(&___nl__im__22, c_rt_lib0bool_to_nl_native(___nl__bool__21));
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
c_rt_lib0clear(&___nl__im__1);
#line 21
//clear ___nl__bool__2;
#line 21
c_rt_lib0clear(&___nl__im__11);
#line 21
//clear ___nl__bool__12;
#line 21
c_rt_lib0clear(&___nl__im__13);
#line 21
c_rt_lib0clear(&___nl__im__14);
#line 21
//clear ___nl__bool__18;
#line 21
//clear ___nl__bool__21;
#line 21
return ___nl__im__22;
#line 21
goto label_89;
#line 21
label_89:
;
#line 21
//clear ___nl__bool__18;
#line 21
//clear ___nl__bool__21;
#line 21
c_rt_lib0clear(&___nl__im__22);
#line 22
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 22
goto label_42;
#line 22
label_95:
;
#line 23
goto label_437;
#line 23
label_97:
;
#line 23
___nl__bool__2 = nl0is_array(___nl__im__0);
#line 23
___nl__bool__2 = !___nl__bool__2;
#line 23
if(___nl__bool__2){ goto label_188;}
#line 24
___nl__bool__23 = nl0is_array(___nl__im__1);
#line 24
___nl__bool__23 = !___nl__bool__23;
#line 24
___nl__bool__23 = !___nl__bool__23;
#line 24
if(___nl__bool__23){ goto label_118;}
#line 24
___nl__bool__24 = false;
#line 24
c_rt_lib0move(&___nl__im__25, c_rt_lib0bool_to_nl_native(___nl__bool__24));
#line 24
c_rt_lib0clear(&___nl__im__0);
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
//clear ___nl__bool__2;
#line 24
c_rt_lib0clear(&___nl__im__11);
#line 24
//clear ___nl__bool__12;
#line 24
c_rt_lib0clear(&___nl__im__13);
#line 24
c_rt_lib0clear(&___nl__im__14);
#line 24
//clear ___nl__bool__23;
#line 24
//clear ___nl__bool__24;
#line 24
return ___nl__im__25;
#line 24
goto label_118;
#line 24
label_118:
;
#line 24
//clear ___nl__bool__23;
#line 24
//clear ___nl__bool__24;
#line 24
c_rt_lib0clear(&___nl__im__25);
#line 25
___nl__int__27 = c_rt_lib0array_len(___nl__im__0);
#line 25
___nl__int__28 = c_rt_lib0array_len(___nl__im__1);
#line 25
___nl__bool__26 = ___nl__int__27 == ___nl__int__28;
#line 25
//clear ___nl__int__27;
#line 25
//clear ___nl__int__28;
#line 25
___nl__bool__26 = !___nl__bool__26;
#line 25
___nl__bool__26 = !___nl__bool__26;
#line 25
if(___nl__bool__26){ goto label_143;}
#line 25
___nl__bool__29 = false;
#line 25
c_rt_lib0move(&___nl__im__30, c_rt_lib0bool_to_nl_native(___nl__bool__29));
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
c_rt_lib0clear(&___nl__im__1);
#line 25
//clear ___nl__bool__2;
#line 25
c_rt_lib0clear(&___nl__im__11);
#line 25
//clear ___nl__bool__12;
#line 25
c_rt_lib0clear(&___nl__im__13);
#line 25
c_rt_lib0clear(&___nl__im__14);
#line 25
//clear ___nl__bool__26;
#line 25
//clear ___nl__bool__29;
#line 25
return ___nl__im__30;
#line 25
goto label_143;
#line 25
label_143:
;
#line 25
//clear ___nl__bool__26;
#line 25
//clear ___nl__bool__29;
#line 25
c_rt_lib0clear(&___nl__im__30);
#line 26
___nl__int__31 = c_rt_lib0array_len(___nl__im__0);
#line 26
___nl__int__32 = 0;
#line 26
___nl__int__33 = 1;
#line 26
label_150:
;
#line 26
___nl__bool__34 = ___nl__int__32 >= ___nl__int__31;
#line 26
if(___nl__bool__34){ goto label_186;}
#line 27
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get(___nl__im__0, ___nl__int__32));
#line 27
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get(___nl__im__1, ___nl__int__32));
#line 27
c_rt_lib0move(&___nl__im__38, dfile0deep_eq(___nl__im__36, ___nl__im__37));
#line 27
___nl__bool__35 = c_rt_lib0check_true_native(___nl__im__38);
#line 27
c_rt_lib0clear(&___nl__im__36);
#line 27
c_rt_lib0clear(&___nl__im__37);
#line 27
c_rt_lib0clear(&___nl__im__38);
#line 27
___nl__bool__35 = !___nl__bool__35;
#line 27
___nl__bool__35 = !___nl__bool__35;
#line 27
if(___nl__bool__35){ goto label_180;}
#line 27
___nl__bool__39 = false;
#line 27
c_rt_lib0move(&___nl__im__40, c_rt_lib0bool_to_nl_native(___nl__bool__39));
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
c_rt_lib0clear(&___nl__im__1);
#line 27
//clear ___nl__bool__2;
#line 27
c_rt_lib0clear(&___nl__im__11);
#line 27
//clear ___nl__bool__12;
#line 27
c_rt_lib0clear(&___nl__im__13);
#line 27
c_rt_lib0clear(&___nl__im__14);
#line 27
//clear ___nl__int__31;
#line 27
//clear ___nl__int__32;
#line 27
//clear ___nl__int__33;
#line 27
//clear ___nl__bool__34;
#line 27
//clear ___nl__bool__35;
#line 27
//clear ___nl__bool__39;
#line 27
return ___nl__im__40;
#line 27
goto label_180;
#line 27
label_180:
;
#line 27
//clear ___nl__bool__35;
#line 27
//clear ___nl__bool__39;
#line 27
c_rt_lib0clear(&___nl__im__40);
#line 28
___nl__int__32 = ___nl__int__32 + ___nl__int__33;
#line 28
goto label_150;
#line 28
label_186:
;
#line 29
goto label_437;
#line 29
label_188:
;
#line 29
___nl__bool__2 = nl0is_variant(___nl__im__0);
#line 29
___nl__bool__2 = !___nl__bool__2;
#line 29
if(___nl__bool__2){ goto label_335;}
#line 30
___nl__bool__41 = nl0is_variant(___nl__im__1);
#line 30
___nl__bool__41 = !___nl__bool__41;
#line 30
___nl__bool__41 = !___nl__bool__41;
#line 30
if(___nl__bool__41){ goto label_213;}
#line 30
___nl__bool__42 = false;
#line 30
c_rt_lib0move(&___nl__im__43, c_rt_lib0bool_to_nl_native(___nl__bool__42));
#line 30
c_rt_lib0clear(&___nl__im__0);
#line 30
c_rt_lib0clear(&___nl__im__1);
#line 30
//clear ___nl__bool__2;
#line 30
c_rt_lib0clear(&___nl__im__11);
#line 30
//clear ___nl__bool__12;
#line 30
c_rt_lib0clear(&___nl__im__13);
#line 30
c_rt_lib0clear(&___nl__im__14);
#line 30
//clear ___nl__int__31;
#line 30
//clear ___nl__int__32;
#line 30
//clear ___nl__int__33;
#line 30
//clear ___nl__bool__34;
#line 30
//clear ___nl__bool__41;
#line 30
//clear ___nl__bool__42;
#line 30
return ___nl__im__43;
#line 30
goto label_213;
#line 30
label_213:
;
#line 30
//clear ___nl__bool__41;
#line 30
//clear ___nl__bool__42;
#line 30
c_rt_lib0clear(&___nl__im__43);
#line 31
c_rt_lib0move(&___nl__im__46, ov0has_value(___nl__im__0));
#line 31
___nl__bool__44 = c_rt_lib0check_true_native(___nl__im__46);
#line 31
c_rt_lib0clear(&___nl__im__46);
#line 31
___nl__bool__45 = !___nl__bool__44;
#line 31
if(___nl__bool__45){ goto label_225;}
#line 31
c_rt_lib0move(&___nl__im__47, ov0has_value(___nl__im__1));
#line 31
___nl__bool__44 = c_rt_lib0check_true_native(___nl__im__47);
#line 31
c_rt_lib0clear(&___nl__im__47);
#line 31
label_225:
;
#line 31
//clear ___nl__bool__45;
#line 31
if(___nl__bool__44){ goto label_240;}
#line 32
c_rt_lib0move(&___nl__im__49, ov0has_value(___nl__im__0));
#line 32
___nl__bool__44 = c_rt_lib0check_true_native(___nl__im__49);
#line 32
c_rt_lib0clear(&___nl__im__49);
#line 32
___nl__bool__44 = !___nl__bool__44;
#line 32
___nl__bool__48 = !___nl__bool__44;
#line 32
if(___nl__bool__48){ goto label_238;}
#line 32
c_rt_lib0move(&___nl__im__50, ov0has_value(___nl__im__1));
#line 32
___nl__bool__44 = c_rt_lib0check_true_native(___nl__im__50);
#line 32
c_rt_lib0clear(&___nl__im__50);
#line 32
___nl__bool__44 = !___nl__bool__44;
#line 32
label_238:
;
#line 32
//clear ___nl__bool__48;
#line 32
label_240:
;
#line 32
___nl__bool__44 = !___nl__bool__44;
#line 32
___nl__bool__44 = !___nl__bool__44;
#line 32
if(___nl__bool__44){ goto label_261;}
#line 31
___nl__bool__51 = false;
#line 31
c_rt_lib0move(&___nl__im__52, c_rt_lib0bool_to_nl_native(___nl__bool__51));
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
c_rt_lib0clear(&___nl__im__1);
#line 31
//clear ___nl__bool__2;
#line 31
c_rt_lib0clear(&___nl__im__11);
#line 31
//clear ___nl__bool__12;
#line 31
c_rt_lib0clear(&___nl__im__13);
#line 31
c_rt_lib0clear(&___nl__im__14);
#line 31
//clear ___nl__int__31;
#line 31
//clear ___nl__int__32;
#line 31
//clear ___nl__int__33;
#line 31
//clear ___nl__bool__34;
#line 31
//clear ___nl__bool__44;
#line 31
//clear ___nl__bool__51;
#line 31
return ___nl__im__52;
#line 31
goto label_261;
#line 31
label_261:
;
#line 31
//clear ___nl__bool__44;
#line 31
//clear ___nl__bool__51;
#line 31
c_rt_lib0clear(&___nl__im__52);
#line 33
c_rt_lib0move(&___nl__im__54, ov0get_element(___nl__im__0));
#line 33
c_rt_lib0move(&___nl__im__55, ov0get_element(___nl__im__1));
#line 33
___nl__bool__53 = c_rt_lib0eq(___nl__im__54, ___nl__im__55);
#line 33
c_rt_lib0clear(&___nl__im__54);
#line 33
c_rt_lib0clear(&___nl__im__55);
#line 33
___nl__bool__53 = !___nl__bool__53;
#line 33
___nl__bool__53 = !___nl__bool__53;
#line 33
if(___nl__bool__53){ goto label_290;}
#line 33
___nl__bool__56 = false;
#line 33
c_rt_lib0move(&___nl__im__57, c_rt_lib0bool_to_nl_native(___nl__bool__56));
#line 33
c_rt_lib0clear(&___nl__im__0);
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
//clear ___nl__bool__2;
#line 33
c_rt_lib0clear(&___nl__im__11);
#line 33
//clear ___nl__bool__12;
#line 33
c_rt_lib0clear(&___nl__im__13);
#line 33
c_rt_lib0clear(&___nl__im__14);
#line 33
//clear ___nl__int__31;
#line 33
//clear ___nl__int__32;
#line 33
//clear ___nl__int__33;
#line 33
//clear ___nl__bool__34;
#line 33
//clear ___nl__bool__53;
#line 33
//clear ___nl__bool__56;
#line 33
return ___nl__im__57;
#line 33
goto label_290;
#line 33
label_290:
;
#line 33
//clear ___nl__bool__53;
#line 33
//clear ___nl__bool__56;
#line 33
c_rt_lib0clear(&___nl__im__57);
#line 34
c_rt_lib0move(&___nl__im__59, ov0has_value(___nl__im__0));
#line 34
___nl__bool__58 = c_rt_lib0check_true_native(___nl__im__59);
#line 34
c_rt_lib0clear(&___nl__im__59);
#line 34
___nl__bool__58 = !___nl__bool__58;
#line 34
if(___nl__bool__58){ goto label_332;}
#line 35
c_rt_lib0move(&___nl__im__61, ov0get_value(___nl__im__0));
#line 35
c_rt_lib0move(&___nl__im__62, ov0get_value(___nl__im__1));
#line 35
c_rt_lib0move(&___nl__im__63, dfile0deep_eq(___nl__im__61, ___nl__im__62));
#line 35
___nl__bool__60 = c_rt_lib0check_true_native(___nl__im__63);
#line 35
c_rt_lib0clear(&___nl__im__61);
#line 35
c_rt_lib0clear(&___nl__im__62);
#line 35
c_rt_lib0clear(&___nl__im__63);
#line 35
___nl__bool__60 = !___nl__bool__60;
#line 35
___nl__bool__60 = !___nl__bool__60;
#line 35
if(___nl__bool__60){ goto label_327;}
#line 35
___nl__bool__64 = false;
#line 35
c_rt_lib0move(&___nl__im__65, c_rt_lib0bool_to_nl_native(___nl__bool__64));
#line 35
c_rt_lib0clear(&___nl__im__0);
#line 35
c_rt_lib0clear(&___nl__im__1);
#line 35
//clear ___nl__bool__2;
#line 35
c_rt_lib0clear(&___nl__im__11);
#line 35
//clear ___nl__bool__12;
#line 35
c_rt_lib0clear(&___nl__im__13);
#line 35
c_rt_lib0clear(&___nl__im__14);
#line 35
//clear ___nl__int__31;
#line 35
//clear ___nl__int__32;
#line 35
//clear ___nl__int__33;
#line 35
//clear ___nl__bool__34;
#line 35
//clear ___nl__bool__58;
#line 35
//clear ___nl__bool__60;
#line 35
//clear ___nl__bool__64;
#line 35
return ___nl__im__65;
#line 35
goto label_327;
#line 35
label_327:
;
#line 35
//clear ___nl__bool__60;
#line 35
//clear ___nl__bool__64;
#line 35
c_rt_lib0clear(&___nl__im__65);
#line 36
goto label_332;
#line 36
label_332:
;
#line 36
//clear ___nl__bool__58;
#line 37
goto label_437;
#line 37
label_335:
;
#line 37
___nl__bool__2 = nl0is_string(___nl__im__0);
#line 37
___nl__bool__2 = !___nl__bool__2;
#line 37
if(___nl__bool__2){ goto label_380;}
#line 38
___nl__bool__66 = nl0is_string(___nl__im__1);
#line 38
___nl__bool__66 = !___nl__bool__66;
#line 38
___nl__bool__66 = !___nl__bool__66;
#line 38
if(___nl__bool__66){ goto label_360;}
#line 38
___nl__bool__67 = false;
#line 38
c_rt_lib0move(&___nl__im__68, c_rt_lib0bool_to_nl_native(___nl__bool__67));
#line 38
c_rt_lib0clear(&___nl__im__0);
#line 38
c_rt_lib0clear(&___nl__im__1);
#line 38
//clear ___nl__bool__2;
#line 38
c_rt_lib0clear(&___nl__im__11);
#line 38
//clear ___nl__bool__12;
#line 38
c_rt_lib0clear(&___nl__im__13);
#line 38
c_rt_lib0clear(&___nl__im__14);
#line 38
//clear ___nl__int__31;
#line 38
//clear ___nl__int__32;
#line 38
//clear ___nl__int__33;
#line 38
//clear ___nl__bool__34;
#line 38
//clear ___nl__bool__66;
#line 38
//clear ___nl__bool__67;
#line 38
return ___nl__im__68;
#line 38
goto label_360;
#line 38
label_360:
;
#line 38
//clear ___nl__bool__66;
#line 38
//clear ___nl__bool__67;
#line 38
c_rt_lib0clear(&___nl__im__68);
#line 39
___nl__bool__69 = c_rt_lib0eq(___nl__im__0, ___nl__im__1);
#line 39
c_rt_lib0move(&___nl__im__70, c_rt_lib0bool_to_nl_native(___nl__bool__69));
#line 39
c_rt_lib0clear(&___nl__im__0);
#line 39
c_rt_lib0clear(&___nl__im__1);
#line 39
//clear ___nl__bool__2;
#line 39
c_rt_lib0clear(&___nl__im__11);
#line 39
//clear ___nl__bool__12;
#line 39
c_rt_lib0clear(&___nl__im__13);
#line 39
c_rt_lib0clear(&___nl__im__14);
#line 39
//clear ___nl__int__31;
#line 39
//clear ___nl__int__32;
#line 39
//clear ___nl__int__33;
#line 39
//clear ___nl__bool__34;
#line 39
//clear ___nl__bool__69;
#line 39
return ___nl__im__70;
#line 40
goto label_437;
#line 40
label_380:
;
#line 40
___nl__bool__2 = nl0is_int(___nl__im__0);
#line 40
___nl__bool__2 = !___nl__bool__2;
#line 40
if(___nl__bool__2){ goto label_433;}
#line 41
___nl__bool__71 = nl0is_int(___nl__im__1);
#line 41
___nl__bool__71 = !___nl__bool__71;
#line 41
___nl__bool__71 = !___nl__bool__71;
#line 41
if(___nl__bool__71){ goto label_407;}
#line 41
___nl__bool__72 = false;
#line 41
c_rt_lib0move(&___nl__im__73, c_rt_lib0bool_to_nl_native(___nl__bool__72));
#line 41
c_rt_lib0clear(&___nl__im__0);
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
//clear ___nl__bool__2;
#line 41
c_rt_lib0clear(&___nl__im__11);
#line 41
//clear ___nl__bool__12;
#line 41
c_rt_lib0clear(&___nl__im__13);
#line 41
c_rt_lib0clear(&___nl__im__14);
#line 41
//clear ___nl__int__31;
#line 41
//clear ___nl__int__32;
#line 41
//clear ___nl__int__33;
#line 41
//clear ___nl__bool__34;
#line 41
//clear ___nl__bool__69;
#line 41
c_rt_lib0clear(&___nl__im__70);
#line 41
//clear ___nl__bool__71;
#line 41
//clear ___nl__bool__72;
#line 41
return ___nl__im__73;
#line 41
goto label_407;
#line 41
label_407:
;
#line 41
//clear ___nl__bool__71;
#line 41
//clear ___nl__bool__72;
#line 41
c_rt_lib0clear(&___nl__im__73);
#line 42
___nl__int__75 = getIntFromImm(___nl__im__0);
#line 42
___nl__int__76 = getIntFromImm(___nl__im__1);
#line 42
___nl__bool__74 = ___nl__int__75 == ___nl__int__76;
#line 42
//clear ___nl__int__75;
#line 42
//clear ___nl__int__76;
#line 42
c_rt_lib0move(&___nl__im__77, c_rt_lib0bool_to_nl_native(___nl__bool__74));
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
c_rt_lib0clear(&___nl__im__1);
#line 42
//clear ___nl__bool__2;
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
//clear ___nl__bool__12;
#line 42
c_rt_lib0clear(&___nl__im__13);
#line 42
c_rt_lib0clear(&___nl__im__14);
#line 42
//clear ___nl__int__31;
#line 42
//clear ___nl__int__32;
#line 42
//clear ___nl__int__33;
#line 42
//clear ___nl__bool__34;
#line 42
//clear ___nl__bool__69;
#line 42
c_rt_lib0clear(&___nl__im__70);
#line 42
//clear ___nl__bool__74;
#line 42
return ___nl__im__77;
#line 43
goto label_437;
#line 43
label_433:
;
#line 44
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(0));
#line 44
nl_die_arg(___nl__im__78);
#line 45
goto label_437;
#line 45
label_437:
;
#line 45
//clear ___nl__bool__2;
#line 45
c_rt_lib0clear(&___nl__im__11);
#line 45
//clear ___nl__bool__12;
#line 45
c_rt_lib0clear(&___nl__im__13);
#line 45
c_rt_lib0clear(&___nl__im__14);
#line 45
//clear ___nl__int__31;
#line 45
//clear ___nl__int__32;
#line 45
//clear ___nl__int__33;
#line 45
//clear ___nl__bool__34;
#line 45
//clear ___nl__bool__69;
#line 45
c_rt_lib0clear(&___nl__im__70);
#line 45
//clear ___nl__bool__74;
#line 45
c_rt_lib0clear(&___nl__im__77);
#line 45
c_rt_lib0clear(&___nl__im__78);
#line 46
___nl__bool__79 = true;
#line 46
c_rt_lib0move(&___nl__im__80, c_rt_lib0bool_to_nl_native(___nl__bool__79));
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
//clear ___nl__bool__79;
#line 46
return ___nl__im__80;
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
c_rt_lib0clear(&___nl__im__1);
#line 46
//clear ___nl__bool__79;
#line 46
c_rt_lib0clear(&___nl__im__80);
#line 46
return NULL;
return NULL;

}

ImmT  dfile0rs0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0rs");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = dfile0rs(*var0, *var1);
return res;
}
ImmT  dfile0rs(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
#line 50
c_rt_lib0move(&___nl__im__3,___get_global_string_const(36));
#line 50
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(0));
#line 50
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_string_const(280), ___nl__im__3, ___get_global_string_const(281), ___nl__im__4));
#line 50
c_rt_lib0clear(&___nl__im__3);
#line 50
c_rt_lib0clear(&___nl__im__4);
#line 51
___nl__int__7 = 0;
#line 51
___nl__int__8 = getIntFromImm(___nl__im__1);
#line 51
___nl__bool__5 = ___nl__int__8 != ___nl__int__7;
#line 51
//clear ___nl__int__7;
#line 51
//clear ___nl__int__8;
#line 51
___nl__bool__6 = !___nl__bool__5;
#line 51
if(___nl__bool__6){ goto label_13;}
#line 51
___nl__bool__5 = dfile_priv0is_simple_string(___nl__im__0);
#line 51
label_13:
;
#line 51
//clear ___nl__bool__6;
#line 51
___nl__bool__5 = !___nl__bool__5;
#line 51
if(___nl__bool__5){ goto label_19;}
#line 52
c_rt_lib0delete(dfile_priv0sp(&___nl__im__2, ___nl__im__0));
#line 53
goto label_22;
#line 53
label_19:
;
#line 54
c_rt_lib0delete(dfile_priv0sprintstr(&___nl__im__2, ___nl__im__0));
#line 55
goto label_22;
#line 55
label_22:
;
#line 55
//clear ___nl__bool__5;
#line 56
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(280)));
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
return ___nl__im__9;
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__1);
#line 56
c_rt_lib0clear(&___nl__im__2);
#line 56
c_rt_lib0clear(&___nl__im__9);
#line 56
return NULL;
return NULL;

}

ImmT  dfile0ssave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave");
ImmT  *var0 = &(_tab[0]);
ImmT  res = dfile0ssave(*var0);
return res;
}
ImmT  dfile0ssave(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 60
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 60
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(280), ___nl__im__2, ___get_global_string_const(281), ___nl__im__3));
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 61
___nl__int__4 = 0;
#line 61
___nl__bool__5 = false;
#line 61
c_rt_lib0delete(dfile_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 61
//clear ___nl__int__4;
#line 61
//clear ___nl__bool__5;
#line 62
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(280)));
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
return ___nl__im__6;
return NULL;

}

ImmT  dfile0debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0debug");
ImmT  *var0 = &(_tab[0]);
ImmT  res = dfile0debug(*var0);
return res;
}
ImmT  dfile0debug(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
#line 66
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 66
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 66
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(280), ___nl__im__2, ___get_global_string_const(281), ___nl__im__3));
#line 66
c_rt_lib0clear(&___nl__im__2);
#line 66
c_rt_lib0clear(&___nl__im__3);
#line 67
___nl__int__4 = 0;
#line 67
___nl__bool__5 = true;
#line 67
c_rt_lib0delete(dfile_priv0sprint(&___nl__im__1, ___nl__im__0, ___nl__int__4, ___nl__bool__5));
#line 67
//clear ___nl__int__4;
#line 67
//clear ___nl__bool__5;
#line 68
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(280)));
#line 68
c_rt_lib0clear(&___nl__im__0);
#line 68
c_rt_lib0clear(&___nl__im__1);
#line 68
return ___nl__im__6;
return NULL;

}

ImmT  dfile0ssave_net_format0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave_net_format");
ImmT  *var0 = &(_tab[0]);
ImmT  res = dfile0ssave_net_format(*var0);
return res;
}
ImmT  dfile0ssave_net_format(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 72
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 72
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(0));
#line 72
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(280), ___nl__im__2, ___get_global_string_const(281), ___nl__im__3));
#line 72
c_rt_lib0clear(&___nl__im__2);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 73
c_rt_lib0delete(dfile_priv0print_net_format(&___nl__im__1, ___nl__im__0));
#line 74
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(280)));
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
return ___nl__im__4;
return NULL;

}

ImmT  dfile_priv0eat_ws(dfile0state_t0type* ___ref___im__0) {
dfile_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
ImmT  ___nl__string__17 = NULL;
#line 78
label_0:
;
#line 79
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 79
___nl__int__2 = getIntFromImm(___nl__im__3);
#line 79
c_rt_lib0clear(&___nl__im__3);
#line 79
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(283)));
#line 79
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 79
c_rt_lib0clear(&___nl__im__5);
#line 79
___nl__bool__1 = ___nl__int__2 == ___nl__int__4;
#line 79
//clear ___nl__int__2;
#line 79
//clear ___nl__int__4;
#line 79
___nl__bool__1 = !___nl__bool__1;
#line 79
if(___nl__bool__1){ goto label_15;}
#line 79
//clear ___nl__bool__1;
#line 79
return NULL;
#line 79
goto label_15;
#line 79
label_15:
;
#line 79
//clear ___nl__bool__1;
#line 80
c_rt_lib0move(&___nl__im__7, dfile_priv0get_char(___ref___im__0));
#line 80
___nl__int__6 = string0ord(___nl__im__7);
#line 80
c_rt_lib0clear(&___nl__im__7);
#line 81
___nl__int__9 = 9;
#line 81
___nl__bool__8 = ___nl__int__6 == ___nl__int__9;
#line 81
//clear ___nl__int__9;
#line 81
if(___nl__bool__8){ goto label_27;}
#line 81
___nl__int__10 = 10;
#line 81
___nl__bool__8 = ___nl__int__6 == ___nl__int__10;
#line 81
//clear ___nl__int__10;
#line 81
label_27:
;
#line 81
if(___nl__bool__8){ goto label_32;}
#line 81
___nl__int__11 = 13;
#line 81
___nl__bool__8 = ___nl__int__6 == ___nl__int__11;
#line 81
//clear ___nl__int__11;
#line 81
label_32:
;
#line 81
if(___nl__bool__8){ goto label_37;}
#line 81
___nl__int__12 = 32;
#line 81
___nl__bool__8 = ___nl__int__6 == ___nl__int__12;
#line 81
//clear ___nl__int__12;
#line 81
label_37:
;
#line 81
___nl__bool__8 = !___nl__bool__8;
#line 81
if(___nl__bool__8){ goto label_54;}
#line 82
c_rt_lib0move(&___nl__im__13,___get_global_string_const(282));
#line 82
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__13));
#line 82
___nl__int__14 = 1;
#line 82
___nl__int__15 = getIntFromImm(___nl__im__13);
#line 82
___nl__int__16 = ___nl__int__15 + ___nl__int__14;
#line 82
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__16));
#line 82
c_rt_lib0move(&___nl__string__17,___get_global_string_const(282));
#line 82
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__17, ___nl__im__13));
#line 82
c_rt_lib0clear(&___nl__im__13);
#line 82
//clear ___nl__int__14;
#line 82
//clear ___nl__int__15;
#line 82
//clear ___nl__int__16;
#line 82
c_rt_lib0clear(&___nl__string__17);
#line 83
goto label_59;
#line 83
label_54:
;
#line 84
//clear ___nl__int__6;
#line 84
//clear ___nl__bool__8;
#line 84
return NULL;
#line 85
goto label_59;
#line 85
label_59:
;
#line 85
//clear ___nl__bool__8;
#line 85
//clear ___nl__int__6;
#line 78
goto label_0;
#line 78
//clear ___nl__int__6;
#line 78
return NULL;
return NULL;

}

ImmT  dfile_priv0get_char(dfile0state_t0type* ___ref___im__0) {
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
#line 90
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(280)));
#line 90
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 90
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 90
c_rt_lib0clear(&___nl__im__4);
#line 90
c_rt_lib0move(&___nl__im__5, c_rt_lib0int_new(___nl__int__3));
#line 90
___nl__int__6 = 1;
#line 90
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 90
c_rt_lib0move(&___nl__im__1, c_std_lib0fast_substr(___nl__im__2, ___nl__im__5, ___nl__im__7));
#line 90
c_rt_lib0clear(&___nl__im__2);
#line 90
//clear ___nl__int__3;
#line 90
c_rt_lib0clear(&___nl__im__5);
#line 90
//clear ___nl__int__6;
#line 90
c_rt_lib0clear(&___nl__im__7);
#line 90
return ___nl__im__1;
return NULL;

}

bool  dfile_priv0is_ov(dfile0state_t0type* ___ref___im__0) {
dfile_priv0__const__init();
bool  ___nl__bool__1 = false;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 94
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(280)));
#line 94
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 94
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 94
c_rt_lib0clear(&___nl__im__5);
#line 94
c_rt_lib0move(&___nl__im__6, c_rt_lib0int_new(___nl__int__4));
#line 94
___nl__int__7 = 7;
#line 94
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__7));
#line 94
c_rt_lib0move(&___nl__im__2, c_std_lib0fast_substr(___nl__im__3, ___nl__im__6, ___nl__im__8));
#line 94
c_rt_lib0clear(&___nl__im__3);
#line 94
//clear ___nl__int__4;
#line 94
c_rt_lib0clear(&___nl__im__6);
#line 94
//clear ___nl__int__7;
#line 94
c_rt_lib0clear(&___nl__im__8);
#line 94
c_rt_lib0move(&___nl__im__9,___get_global_string_const(284));
#line 94
___nl__bool__1 = c_rt_lib0eq(___nl__im__2, ___nl__im__9);
#line 94
c_rt_lib0clear(&___nl__im__2);
#line 94
c_rt_lib0clear(&___nl__im__9);
#line 94
return ___nl__bool__1;
return false;

}

ImmT  dfile_priv0eat_non_ws(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__string__22 = NULL;
bool  ___nl__bool__23 = false;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__string__33 = NULL;
ImmT  ___nl__im__34 = NULL;
#line 98
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 99
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(283)));
#line 99
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 99
c_rt_lib0clear(&___nl__im__4);
#line 100
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 100
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 100
c_rt_lib0clear(&___nl__im__7);
#line 100
___nl__bool__5 = ___nl__int__6 >= ___nl__int__3;
#line 100
//clear ___nl__int__6;
#line 100
___nl__bool__5 = !___nl__bool__5;
#line 100
if(___nl__bool__5){ goto label_30;}
#line 101
(*___ref___bool__1) = true;
#line 102
c_rt_lib0move(&___nl__im__10,___get_global_string_const(285));
#line 102
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 102
___nl__int__11 = getIntFromImm(___nl__im__12);
#line 102
c_rt_lib0clear(&___nl__im__12);
#line 102
c_rt_lib0move(&___nl__string__13, c_rt_lib0int_to_string(___nl__int__11));
#line 102
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__string__13));
#line 102
c_rt_lib0clear(&___nl__im__10);
#line 102
//clear ___nl__int__11;
#line 102
c_rt_lib0clear(&___nl__string__13);
#line 102
c_rt_lib0move(&___nl__im__14,___get_global_string_const(286));
#line 102
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 102
c_rt_lib0clear(&___nl__im__9);
#line 102
c_rt_lib0clear(&___nl__im__14);
#line 102
c_rt_lib0clear(&___nl__im__2);
#line 102
//clear ___nl__int__3;
#line 102
//clear ___nl__bool__5;
#line 102
return ___nl__im__8;
#line 103
goto label_30;
#line 103
label_30:
;
#line 103
//clear ___nl__bool__5;
#line 103
c_rt_lib0clear(&___nl__im__8);
#line 104
label_33:
;
#line 105
c_rt_lib0move(&___nl__im__15, dfile_priv0get_char(___ref___im__0));
#line 106
___nl__bool__16 = string0is_letter(___nl__im__15);
#line 106
if(___nl__bool__16){ goto label_38;}
#line 106
___nl__bool__16 = string0is_digit(___nl__im__15);
#line 106
label_38:
;
#line 106
if(___nl__bool__16){ goto label_43;}
#line 106
c_rt_lib0move(&___nl__im__17,___get_global_string_const(107));
#line 106
___nl__bool__16 = c_rt_lib0eq(___nl__im__15, ___nl__im__17);
#line 106
c_rt_lib0clear(&___nl__im__17);
#line 106
label_43:
;
#line 106
___nl__bool__16 = !___nl__bool__16;
#line 106
___nl__bool__16 = !___nl__bool__16;
#line 106
if(___nl__bool__16){ goto label_51;}
#line 106
c_rt_lib0clear(&___nl__im__15);
#line 106
//clear ___nl__bool__16;
#line 106
goto label_82;
#line 106
goto label_51;
#line 106
label_51:
;
#line 106
//clear ___nl__bool__16;
#line 107
c_rt_lib0move(&___nl__im__18,___get_global_string_const(282));
#line 107
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__18));
#line 107
___nl__int__19 = 1;
#line 107
___nl__int__20 = getIntFromImm(___nl__im__18);
#line 107
___nl__int__21 = ___nl__int__20 + ___nl__int__19;
#line 107
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__21));
#line 107
c_rt_lib0move(&___nl__string__22,___get_global_string_const(282));
#line 107
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__22, ___nl__im__18));
#line 107
c_rt_lib0clear(&___nl__im__18);
#line 107
//clear ___nl__int__19;
#line 107
//clear ___nl__int__20;
#line 107
//clear ___nl__int__21;
#line 107
c_rt_lib0clear(&___nl__string__22);
#line 108
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 109
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 109
___nl__int__24 = getIntFromImm(___nl__im__25);
#line 109
c_rt_lib0clear(&___nl__im__25);
#line 109
___nl__bool__23 = ___nl__int__24 >= ___nl__int__3;
#line 109
//clear ___nl__int__24;
#line 109
___nl__bool__23 = !___nl__bool__23;
#line 109
if(___nl__bool__23){ goto label_78;}
#line 109
c_rt_lib0clear(&___nl__im__15);
#line 109
//clear ___nl__bool__23;
#line 109
goto label_82;
#line 109
goto label_78;
#line 109
label_78:
;
#line 109
//clear ___nl__bool__23;
#line 109
c_rt_lib0clear(&___nl__im__15);
#line 104
goto label_33;
#line 104
label_82:
;
#line 111
c_rt_lib0move(&___nl__im__27,___get_global_string_const(36));
#line 111
___nl__bool__26 = c_rt_lib0eq(___nl__im__2, ___nl__im__27);
#line 111
c_rt_lib0clear(&___nl__im__27);
#line 111
___nl__bool__26 = !___nl__bool__26;
#line 111
if(___nl__bool__26){ goto label_108;}
#line 112
(*___ref___bool__1) = true;
#line 113
c_rt_lib0move(&___nl__im__30,___get_global_string_const(285));
#line 113
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 113
___nl__int__31 = getIntFromImm(___nl__im__32);
#line 113
c_rt_lib0clear(&___nl__im__32);
#line 113
c_rt_lib0move(&___nl__string__33, c_rt_lib0int_to_string(___nl__int__31));
#line 113
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__string__33));
#line 113
c_rt_lib0clear(&___nl__im__30);
#line 113
//clear ___nl__int__31;
#line 113
c_rt_lib0clear(&___nl__string__33);
#line 113
c_rt_lib0move(&___nl__im__34,___get_global_string_const(286));
#line 113
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__34));
#line 113
c_rt_lib0clear(&___nl__im__29);
#line 113
c_rt_lib0clear(&___nl__im__34);
#line 113
c_rt_lib0clear(&___nl__im__2);
#line 113
//clear ___nl__int__3;
#line 113
c_rt_lib0clear(&___nl__im__15);
#line 113
//clear ___nl__bool__26;
#line 113
return ___nl__im__28;
#line 114
goto label_108;
#line 114
label_108:
;
#line 114
//clear ___nl__bool__26;
#line 114
c_rt_lib0clear(&___nl__im__28);
#line 115
//clear ___nl__int__3;
#line 115
c_rt_lib0clear(&___nl__im__15);
#line 115
return ___nl__im__2;
return NULL;

}

ImmT  dfile_priv0parse_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
dfile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
ImmT  ___nl__string__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 119
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 121
c_rt_lib0move(&___nl__im__5, dfile_priv0get_char(___ref___im__0));
#line 121
c_rt_lib0move(&___nl__im__6,___get_global_string_const(279));
#line 121
___nl__bool__4 = c_rt_lib0eq(___nl__im__5, ___nl__im__6);
#line 121
c_rt_lib0clear(&___nl__im__5);
#line 121
c_rt_lib0clear(&___nl__im__6);
#line 121
___nl__bool__4 = !___nl__bool__4;
#line 121
if(___nl__bool__4){ goto label_23;}
#line 122
c_rt_lib0move(&___nl__im__7,___get_global_string_const(282));
#line 122
c_rt_lib0move(&___nl__im__7, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__7));
#line 122
___nl__int__8 = 1;
#line 122
___nl__int__9 = getIntFromImm(___nl__im__7);
#line 122
___nl__int__10 = ___nl__int__9 + ___nl__int__8;
#line 122
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__10));
#line 122
c_rt_lib0move(&___nl__string__11,___get_global_string_const(282));
#line 122
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__11, ___nl__im__7));
#line 122
c_rt_lib0clear(&___nl__im__7);
#line 122
//clear ___nl__int__8;
#line 122
//clear ___nl__int__9;
#line 122
//clear ___nl__int__10;
#line 122
c_rt_lib0clear(&___nl__string__11);
#line 123
c_rt_lib0move(&___nl__im__3, dfile_priv0finish_quoted_scalar(___ref___im__0, ___ref___bool__1));
#line 124
goto label_26;
#line 124
label_23:
;
#line 125
c_rt_lib0move(&___nl__im__3, dfile_priv0eat_non_ws(___ref___im__0, ___ref___bool__1));
#line 126
goto label_26;
#line 126
label_26:
;
#line 126
//clear ___nl__bool__4;
#line 127
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(287));
#line 127
if(___nl__bool__12){ goto label_31;}
#line 127
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(288));
#line 127
label_31:
;
#line 127
___nl__bool__12 = !___nl__bool__12;
#line 127
if(___nl__bool__12){ goto label_38;}
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 128
//clear ___nl__bool__12;
#line 128
return ___nl__im__3;
#line 129
goto label_109;
#line 129
label_38:
;
#line 129
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(289));
#line 129
___nl__bool__12 = !___nl__bool__12;
#line 129
if(___nl__bool__12){ goto label_84;}
#line 130
c_rt_lib0move(&___nl__im__13, string_utils0get_integer(___nl__im__3));
#line 130
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(78));
#line 130
if(___nl__bool__14){ goto label_50;}
#line 132
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(77));
#line 132
if(___nl__bool__14){ goto label_64;}
#line 132
c_rt_lib0move(&___nl__im__15,___get_global_string_const(15));
#line 132
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 132
nl_die_arg(___nl__im__15);
#line 130
label_50:
;
#line 130
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(78)));
#line 130
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 131
c_rt_lib0move(&___nl__im__18, c_rt_lib0int_new(___nl__int__16));
#line 131
c_rt_lib0clear(&___nl__im__2);
#line 131
c_rt_lib0clear(&___nl__im__3);
#line 131
//clear ___nl__bool__12;
#line 131
c_rt_lib0clear(&___nl__im__13);
#line 131
//clear ___nl__bool__14;
#line 131
c_rt_lib0clear(&___nl__im__15);
#line 131
//clear ___nl__int__16;
#line 131
c_rt_lib0clear(&___nl__im__17);
#line 131
return ___nl__im__18;
#line 132
goto label_82;
#line 132
label_64:
;
#line 132
c_rt_lib0move(&___nl__im__20, c_rt_lib0priv_as(___nl__im__13, ___get_global_string_const(77)));
#line 132
c_rt_lib0copy(&___nl__im__19, ___nl__im__20);
#line 133
(*___ref___bool__1) = true;
#line 134
c_rt_lib0move(&___nl__im__21,___get_global_string_const(290));
#line 134
c_rt_lib0clear(&___nl__im__2);
#line 134
c_rt_lib0clear(&___nl__im__3);
#line 134
//clear ___nl__bool__12;
#line 134
c_rt_lib0clear(&___nl__im__13);
#line 134
//clear ___nl__bool__14;
#line 134
c_rt_lib0clear(&___nl__im__15);
#line 134
//clear ___nl__int__16;
#line 134
c_rt_lib0clear(&___nl__im__17);
#line 134
c_rt_lib0clear(&___nl__im__18);
#line 134
c_rt_lib0clear(&___nl__im__19);
#line 134
c_rt_lib0clear(&___nl__im__20);
#line 134
return ___nl__im__21;
#line 135
goto label_82;
#line 135
label_82:
;
#line 136
goto label_109;
#line 136
label_84:
;
#line 137
(*___ref___bool__1) = true;
#line 138
c_rt_lib0move(&___nl__im__24,___get_global_string_const(291));
#line 138
c_rt_lib0move(&___nl__im__25, dfile0ssave(___nl__im__2));
#line 138
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__25));
#line 138
c_rt_lib0clear(&___nl__im__24);
#line 138
c_rt_lib0clear(&___nl__im__25);
#line 138
c_rt_lib0move(&___nl__im__26,___get_global_string_const(292));
#line 138
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 138
c_rt_lib0clear(&___nl__im__23);
#line 138
c_rt_lib0clear(&___nl__im__26);
#line 138
c_rt_lib0clear(&___nl__im__2);
#line 138
c_rt_lib0clear(&___nl__im__3);
#line 138
//clear ___nl__bool__12;
#line 138
c_rt_lib0clear(&___nl__im__13);
#line 138
//clear ___nl__bool__14;
#line 138
c_rt_lib0clear(&___nl__im__15);
#line 138
//clear ___nl__int__16;
#line 138
c_rt_lib0clear(&___nl__im__17);
#line 138
c_rt_lib0clear(&___nl__im__18);
#line 138
c_rt_lib0clear(&___nl__im__19);
#line 138
c_rt_lib0clear(&___nl__im__20);
#line 138
c_rt_lib0clear(&___nl__im__21);
#line 138
return ___nl__im__22;
#line 139
goto label_109;
#line 139
label_109:
;
#line 139
//clear ___nl__bool__12;
#line 139
c_rt_lib0clear(&___nl__im__13);
#line 139
//clear ___nl__bool__14;
#line 139
c_rt_lib0clear(&___nl__im__15);
#line 139
//clear ___nl__int__16;
#line 139
c_rt_lib0clear(&___nl__im__17);
#line 139
c_rt_lib0clear(&___nl__im__18);
#line 139
c_rt_lib0clear(&___nl__im__19);
#line 139
c_rt_lib0clear(&___nl__im__20);
#line 139
c_rt_lib0clear(&___nl__im__21);
#line 139
c_rt_lib0clear(&___nl__im__22);
#line 139
c_rt_lib0clear(&___nl__im__2);
#line 139
c_rt_lib0clear(&___nl__im__3);
#line 139
return NULL;
return NULL;

}

ImmT  dfile_priv0finish_quoted_scalar(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
INT  ___nl__int__4 = 0;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__string__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
ImmT  ___nl__string__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
#line 144
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 145
label_1:
;
#line 146
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 146
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 146
c_rt_lib0clear(&___nl__im__5);
#line 146
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(283)));
#line 146
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 146
c_rt_lib0clear(&___nl__im__7);
#line 146
___nl__bool__3 = ___nl__int__4 >= ___nl__int__6;
#line 146
//clear ___nl__int__4;
#line 146
//clear ___nl__int__6;
#line 146
___nl__bool__3 = !___nl__bool__3;
#line 146
if(___nl__bool__3){ goto label_31;}
#line 147
(*___ref___bool__1) = true;
#line 148
c_rt_lib0move(&___nl__im__10,___get_global_string_const(285));
#line 148
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 148
___nl__int__11 = getIntFromImm(___nl__im__12);
#line 148
c_rt_lib0clear(&___nl__im__12);
#line 148
c_rt_lib0move(&___nl__string__13, c_rt_lib0int_to_string(___nl__int__11));
#line 148
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__string__13));
#line 148
c_rt_lib0clear(&___nl__im__10);
#line 148
//clear ___nl__int__11;
#line 148
c_rt_lib0clear(&___nl__string__13);
#line 148
c_rt_lib0move(&___nl__im__14,___get_global_string_const(293));
#line 148
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 148
c_rt_lib0clear(&___nl__im__9);
#line 148
c_rt_lib0clear(&___nl__im__14);
#line 148
c_rt_lib0clear(&___nl__im__2);
#line 148
//clear ___nl__bool__3;
#line 148
return ___nl__im__8;
#line 149
goto label_31;
#line 149
label_31:
;
#line 149
//clear ___nl__bool__3;
#line 149
c_rt_lib0clear(&___nl__im__8);
#line 150
c_rt_lib0move(&___nl__im__15, dfile_priv0get_char(___ref___im__0));
#line 151
c_rt_lib0move(&___nl__im__16,___get_global_string_const(282));
#line 151
c_rt_lib0move(&___nl__im__16, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__16));
#line 151
___nl__int__17 = 1;
#line 151
___nl__int__18 = getIntFromImm(___nl__im__16);
#line 151
___nl__int__19 = ___nl__int__18 + ___nl__int__17;
#line 151
c_rt_lib0move(&___nl__im__16, c_rt_lib0int_new(___nl__int__19));
#line 151
c_rt_lib0move(&___nl__string__20,___get_global_string_const(282));
#line 151
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__20, ___nl__im__16));
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
//clear ___nl__int__17;
#line 151
//clear ___nl__int__18;
#line 151
//clear ___nl__int__19;
#line 151
c_rt_lib0clear(&___nl__string__20);
#line 152
c_rt_lib0move(&___nl__im__22,___get_global_string_const(279));
#line 152
___nl__bool__21 = c_rt_lib0eq(___nl__im__15, ___nl__im__22);
#line 152
c_rt_lib0clear(&___nl__im__22);
#line 152
___nl__bool__21 = !___nl__bool__21;
#line 152
if(___nl__bool__21){ goto label_57;}
#line 153
c_rt_lib0clear(&___nl__im__15);
#line 153
//clear ___nl__bool__21;
#line 153
goto label_85;
#line 154
goto label_80;
#line 154
label_57:
;
#line 154
c_rt_lib0move(&___nl__im__23,___get_global_string_const(109));
#line 154
___nl__bool__21 = c_rt_lib0eq(___nl__im__15, ___nl__im__23);
#line 154
c_rt_lib0clear(&___nl__im__23);
#line 154
___nl__bool__21 = !___nl__bool__21;
#line 154
if(___nl__bool__21){ goto label_77;}
#line 155
c_rt_lib0move(&___nl__im__24, dfile_priv0finish_escape_seq(___ref___im__0, ___ref___bool__1));
#line 156
___nl__bool__25 = (*___ref___bool__1);
#line 156
___nl__bool__25 = !___nl__bool__25;
#line 156
if(___nl__bool__25){ goto label_73;}
#line 156
c_rt_lib0clear(&___nl__im__2);
#line 156
c_rt_lib0clear(&___nl__im__15);
#line 156
//clear ___nl__bool__21;
#line 156
//clear ___nl__bool__25;
#line 156
return ___nl__im__24;
#line 156
goto label_73;
#line 156
label_73:
;
#line 156
//clear ___nl__bool__25;
#line 157
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__24));
#line 158
goto label_80;
#line 158
label_77:
;
#line 159
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__15));
#line 160
goto label_80;
#line 160
label_80:
;
#line 160
//clear ___nl__bool__21;
#line 160
c_rt_lib0clear(&___nl__im__24);
#line 160
c_rt_lib0clear(&___nl__im__15);
#line 145
goto label_1;
#line 145
label_85:
;
#line 162
c_rt_lib0clear(&___nl__im__15);
#line 162
return ___nl__im__2;
return NULL;

}

ImmT  dfile_priv0finish_escape_seq(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__string__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
ImmT  ___nl__string__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
bool  ___nl__bool__35 = false;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
INT  ___nl__int__46 = 0;
INT  ___nl__int__47 = 0;
ImmT  ___nl__im__48 = NULL;
INT  ___nl__int__49 = 0;
ImmT  ___nl__string__50 = NULL;
ImmT  ___nl__im__51 = NULL;
#line 166
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 166
___nl__int__3 = getIntFromImm(___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(283)));
#line 166
___nl__int__5 = getIntFromImm(___nl__im__6);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
___nl__bool__2 = ___nl__int__3 >= ___nl__int__5;
#line 166
//clear ___nl__int__3;
#line 166
//clear ___nl__int__5;
#line 166
___nl__bool__2 = !___nl__bool__2;
#line 166
if(___nl__bool__2){ goto label_28;}
#line 167
(*___ref___bool__1) = true;
#line 168
c_rt_lib0move(&___nl__im__9,___get_global_string_const(285));
#line 168
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 168
___nl__int__10 = getIntFromImm(___nl__im__11);
#line 168
c_rt_lib0clear(&___nl__im__11);
#line 168
c_rt_lib0move(&___nl__string__12, c_rt_lib0int_to_string(___nl__int__10));
#line 168
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__string__12));
#line 168
c_rt_lib0clear(&___nl__im__9);
#line 168
//clear ___nl__int__10;
#line 168
c_rt_lib0clear(&___nl__string__12);
#line 168
c_rt_lib0move(&___nl__im__13,___get_global_string_const(294));
#line 168
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 168
c_rt_lib0clear(&___nl__im__8);
#line 168
c_rt_lib0clear(&___nl__im__13);
#line 168
//clear ___nl__bool__2;
#line 168
return ___nl__im__7;
#line 169
goto label_28;
#line 169
label_28:
;
#line 169
//clear ___nl__bool__2;
#line 169
c_rt_lib0clear(&___nl__im__7);
#line 170
c_rt_lib0move(&___nl__im__14, dfile_priv0get_char(___ref___im__0));
#line 171
c_rt_lib0move(&___nl__im__15,___get_global_string_const(282));
#line 171
c_rt_lib0move(&___nl__im__15, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__15));
#line 171
___nl__int__16 = 1;
#line 171
___nl__int__17 = getIntFromImm(___nl__im__15);
#line 171
___nl__int__18 = ___nl__int__17 + ___nl__int__16;
#line 171
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__18));
#line 171
c_rt_lib0move(&___nl__string__19,___get_global_string_const(282));
#line 171
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__19, ___nl__im__15));
#line 171
c_rt_lib0clear(&___nl__im__15);
#line 171
//clear ___nl__int__16;
#line 171
//clear ___nl__int__17;
#line 171
//clear ___nl__int__18;
#line 171
c_rt_lib0clear(&___nl__string__19);
#line 172
c_rt_lib0move(&___nl__im__21,___get_global_string_const(295));
#line 172
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__21);
#line 172
c_rt_lib0clear(&___nl__im__21);
#line 172
___nl__bool__20 = !___nl__bool__20;
#line 172
if(___nl__bool__20){ goto label_55;}
#line 173
c_rt_lib0move(&___nl__im__22, string0lf());
#line 173
c_rt_lib0clear(&___nl__im__14);
#line 173
//clear ___nl__bool__20;
#line 173
return ___nl__im__22;
#line 174
goto label_193;
#line 174
label_55:
;
#line 174
c_rt_lib0move(&___nl__im__23,___get_global_string_const(296));
#line 174
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__23);
#line 174
c_rt_lib0clear(&___nl__im__23);
#line 174
___nl__bool__20 = !___nl__bool__20;
#line 174
if(___nl__bool__20){ goto label_67;}
#line 175
c_rt_lib0move(&___nl__im__24, string0r());
#line 175
c_rt_lib0clear(&___nl__im__14);
#line 175
//clear ___nl__bool__20;
#line 175
c_rt_lib0clear(&___nl__im__22);
#line 175
return ___nl__im__24;
#line 176
goto label_193;
#line 176
label_67:
;
#line 176
c_rt_lib0move(&___nl__im__25,___get_global_string_const(297));
#line 176
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__25);
#line 176
c_rt_lib0clear(&___nl__im__25);
#line 176
___nl__bool__20 = !___nl__bool__20;
#line 176
if(___nl__bool__20){ goto label_80;}
#line 177
c_rt_lib0move(&___nl__im__26, string0tab());
#line 177
c_rt_lib0clear(&___nl__im__14);
#line 177
//clear ___nl__bool__20;
#line 177
c_rt_lib0clear(&___nl__im__22);
#line 177
c_rt_lib0clear(&___nl__im__24);
#line 177
return ___nl__im__26;
#line 178
goto label_193;
#line 178
label_80:
;
#line 178
c_rt_lib0move(&___nl__im__27,___get_global_string_const(109));
#line 178
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__27);
#line 178
c_rt_lib0clear(&___nl__im__27);
#line 178
if(___nl__bool__20){ goto label_88;}
#line 178
c_rt_lib0move(&___nl__im__28,___get_global_string_const(279));
#line 178
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__28);
#line 178
c_rt_lib0clear(&___nl__im__28);
#line 178
label_88:
;
#line 178
if(___nl__bool__20){ goto label_93;}
#line 178
c_rt_lib0move(&___nl__im__29,___get_global_string_const(298));
#line 178
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__29);
#line 178
c_rt_lib0clear(&___nl__im__29);
#line 178
label_93:
;
#line 178
if(___nl__bool__20){ goto label_98;}
#line 178
c_rt_lib0move(&___nl__im__30,___get_global_string_const(299));
#line 178
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__30);
#line 178
c_rt_lib0clear(&___nl__im__30);
#line 178
label_98:
;
#line 178
___nl__bool__20 = !___nl__bool__20;
#line 178
if(___nl__bool__20){ goto label_107;}
#line 179
//clear ___nl__bool__20;
#line 179
c_rt_lib0clear(&___nl__im__22);
#line 179
c_rt_lib0clear(&___nl__im__24);
#line 179
c_rt_lib0clear(&___nl__im__26);
#line 179
return ___nl__im__14;
#line 180
goto label_193;
#line 180
label_107:
;
#line 180
c_rt_lib0move(&___nl__im__31,___get_global_string_const(300));
#line 180
___nl__bool__20 = c_rt_lib0eq(___nl__im__14, ___nl__im__31);
#line 180
c_rt_lib0clear(&___nl__im__31);
#line 180
___nl__bool__20 = !___nl__bool__20;
#line 180
if(___nl__bool__20){ goto label_164;}
#line 181
c_rt_lib0move(&___nl__im__32, dfile_priv0eat_hex_digit(___ref___im__0, ___ref___bool__1));
#line 182
___nl__bool__33 = (*___ref___bool__1);
#line 182
___nl__bool__33 = !___nl__bool__33;
#line 182
if(___nl__bool__33){ goto label_125;}
#line 182
c_rt_lib0clear(&___nl__im__14);
#line 182
//clear ___nl__bool__20;
#line 182
c_rt_lib0clear(&___nl__im__22);
#line 182
c_rt_lib0clear(&___nl__im__24);
#line 182
c_rt_lib0clear(&___nl__im__26);
#line 182
//clear ___nl__bool__33;
#line 182
return ___nl__im__32;
#line 182
goto label_125;
#line 182
label_125:
;
#line 182
//clear ___nl__bool__33;
#line 183
c_rt_lib0move(&___nl__im__34, dfile_priv0eat_hex_digit(___ref___im__0, ___ref___bool__1));
#line 184
___nl__bool__35 = (*___ref___bool__1);
#line 184
___nl__bool__35 = !___nl__bool__35;
#line 184
if(___nl__bool__35){ goto label_140;}
#line 184
c_rt_lib0clear(&___nl__im__14);
#line 184
//clear ___nl__bool__20;
#line 184
c_rt_lib0clear(&___nl__im__22);
#line 184
c_rt_lib0clear(&___nl__im__24);
#line 184
c_rt_lib0clear(&___nl__im__26);
#line 184
c_rt_lib0clear(&___nl__im__32);
#line 184
//clear ___nl__bool__35;
#line 184
return ___nl__im__34;
#line 184
goto label_140;
#line 184
label_140:
;
#line 184
//clear ___nl__bool__35;
#line 185
c_rt_lib0move(&___nl__im__37, ptd0string());
#line 185
___nl__int__39 = string0ord(___nl__im__32);
#line 185
c_rt_lib0move(&___nl__im__40, c_rt_lib0int_new(___nl__int__39));
#line 185
___nl__int__41 = string0ord(___nl__im__34);
#line 185
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__41));
#line 185
c_rt_lib0move(&___nl__im__38, string_utils0hex2char(___nl__im__40, ___nl__im__42));
#line 185
//clear ___nl__int__39;
#line 185
c_rt_lib0clear(&___nl__im__40);
#line 185
//clear ___nl__int__41;
#line 185
c_rt_lib0clear(&___nl__im__42);
#line 185
c_rt_lib0move(&___nl__im__36, ptd0ensure(___nl__im__37, ___nl__im__38));
#line 185
c_rt_lib0clear(&___nl__im__37);
#line 185
c_rt_lib0clear(&___nl__im__38);
#line 185
c_rt_lib0clear(&___nl__im__14);
#line 185
//clear ___nl__bool__20;
#line 185
c_rt_lib0clear(&___nl__im__22);
#line 185
c_rt_lib0clear(&___nl__im__24);
#line 185
c_rt_lib0clear(&___nl__im__26);
#line 185
c_rt_lib0clear(&___nl__im__32);
#line 185
c_rt_lib0clear(&___nl__im__34);
#line 185
return ___nl__im__36;
#line 186
goto label_193;
#line 186
label_164:
;
#line 187
(*___ref___bool__1) = true;
#line 188
c_rt_lib0move(&___nl__im__45,___get_global_string_const(285));
#line 188
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 188
___nl__int__47 = getIntFromImm(___nl__im__48);
#line 188
c_rt_lib0clear(&___nl__im__48);
#line 188
___nl__int__49 = 1;
#line 188
___nl__int__46 = ___nl__int__47 - ___nl__int__49;
#line 188
//clear ___nl__int__47;
#line 188
//clear ___nl__int__49;
#line 188
c_rt_lib0move(&___nl__string__50, c_rt_lib0int_to_string(___nl__int__46));
#line 188
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__string__50));
#line 188
c_rt_lib0clear(&___nl__im__45);
#line 188
//clear ___nl__int__46;
#line 188
c_rt_lib0clear(&___nl__string__50);
#line 188
c_rt_lib0move(&___nl__im__51,___get_global_string_const(294));
#line 188
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__51));
#line 188
c_rt_lib0clear(&___nl__im__44);
#line 188
c_rt_lib0clear(&___nl__im__51);
#line 188
c_rt_lib0clear(&___nl__im__14);
#line 188
//clear ___nl__bool__20;
#line 188
c_rt_lib0clear(&___nl__im__22);
#line 188
c_rt_lib0clear(&___nl__im__24);
#line 188
c_rt_lib0clear(&___nl__im__26);
#line 188
c_rt_lib0clear(&___nl__im__32);
#line 188
c_rt_lib0clear(&___nl__im__34);
#line 188
c_rt_lib0clear(&___nl__im__36);
#line 188
return ___nl__im__43;
#line 189
goto label_193;
#line 189
label_193:
;
#line 189
//clear ___nl__bool__20;
#line 189
c_rt_lib0clear(&___nl__im__22);
#line 189
c_rt_lib0clear(&___nl__im__24);
#line 189
c_rt_lib0clear(&___nl__im__26);
#line 189
c_rt_lib0clear(&___nl__im__32);
#line 189
c_rt_lib0clear(&___nl__im__34);
#line 189
c_rt_lib0clear(&___nl__im__36);
#line 189
c_rt_lib0clear(&___nl__im__43);
return NULL;

}

ImmT  dfile_priv0eat_hex_digit(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1) {
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__string__15 = NULL;
#line 193
c_rt_lib0move(&___nl__im__2, dfile_priv0get_char(___ref___im__0));
#line 194
___nl__bool__3 = string0is_hex_digit(___nl__im__2);
#line 194
___nl__bool__3 = !___nl__bool__3;
#line 194
___nl__bool__3 = !___nl__bool__3;
#line 194
if(___nl__bool__3){ goto label_23;}
#line 195
(*___ref___bool__1) = true;
#line 196
c_rt_lib0move(&___nl__im__6,___get_global_string_const(285));
#line 196
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 196
___nl__int__7 = getIntFromImm(___nl__im__8);
#line 196
c_rt_lib0clear(&___nl__im__8);
#line 196
c_rt_lib0move(&___nl__string__9, c_rt_lib0int_to_string(___nl__int__7));
#line 196
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__string__9));
#line 196
c_rt_lib0clear(&___nl__im__6);
#line 196
//clear ___nl__int__7;
#line 196
c_rt_lib0clear(&___nl__string__9);
#line 196
c_rt_lib0move(&___nl__im__10,___get_global_string_const(301));
#line 196
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__10));
#line 196
c_rt_lib0clear(&___nl__im__5);
#line 196
c_rt_lib0clear(&___nl__im__10);
#line 196
c_rt_lib0clear(&___nl__im__2);
#line 196
//clear ___nl__bool__3;
#line 196
return ___nl__im__4;
#line 197
goto label_23;
#line 197
label_23:
;
#line 197
//clear ___nl__bool__3;
#line 197
c_rt_lib0clear(&___nl__im__4);
#line 198
c_rt_lib0move(&___nl__im__11,___get_global_string_const(282));
#line 198
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__11));
#line 198
___nl__int__12 = 1;
#line 198
___nl__int__13 = getIntFromImm(___nl__im__11);
#line 198
___nl__int__14 = ___nl__int__13 + ___nl__int__12;
#line 198
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__14));
#line 198
c_rt_lib0move(&___nl__string__15,___get_global_string_const(282));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__15, ___nl__im__11));
#line 198
c_rt_lib0clear(&___nl__im__11);
#line 198
//clear ___nl__int__12;
#line 198
//clear ___nl__int__13;
#line 198
//clear ___nl__int__14;
#line 198
c_rt_lib0clear(&___nl__string__15);
#line 199
return ___nl__im__2;
return NULL;

}

bool  dfile_priv0match_s(dfile0state_t0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
INT  ___nl__int__2 = 0;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
ImmT  ___nl__string__13 = NULL;
bool  ___nl__bool__14 = false;
bool  ___nl__bool__15 = false;
#line 203
___nl__int__2 = string0length(___nl__im__1);
#line 204
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(280)));
#line 204
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 204
___nl__int__6 = getIntFromImm(___nl__im__7);
#line 204
c_rt_lib0clear(&___nl__im__7);
#line 204
c_rt_lib0move(&___nl__im__8, c_rt_lib0int_new(___nl__int__6));
#line 204
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__2));
#line 204
c_rt_lib0move(&___nl__im__4, c_std_lib0fast_substr(___nl__im__5, ___nl__im__8, ___nl__im__9));
#line 204
c_rt_lib0clear(&___nl__im__5);
#line 204
//clear ___nl__int__6;
#line 204
c_rt_lib0clear(&___nl__im__8);
#line 204
c_rt_lib0clear(&___nl__im__9);
#line 204
___nl__bool__3 = c_rt_lib0eq(___nl__im__4, ___nl__im__1);
#line 204
c_rt_lib0clear(&___nl__im__4);
#line 204
___nl__bool__3 = !___nl__bool__3;
#line 204
if(___nl__bool__3){ goto label_33;}
#line 205
c_rt_lib0move(&___nl__im__10,___get_global_string_const(282));
#line 205
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__10));
#line 205
___nl__int__11 = getIntFromImm(___nl__im__10);
#line 205
___nl__int__12 = ___nl__int__11 + ___nl__int__2;
#line 205
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__12));
#line 205
c_rt_lib0move(&___nl__string__13,___get_global_string_const(282));
#line 205
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__13, ___nl__im__10));
#line 205
c_rt_lib0clear(&___nl__im__10);
#line 205
//clear ___nl__int__11;
#line 205
//clear ___nl__int__12;
#line 205
c_rt_lib0clear(&___nl__string__13);
#line 206
___nl__bool__14 = true;
#line 206
c_rt_lib0clear(&___nl__im__1);
#line 206
//clear ___nl__int__2;
#line 206
//clear ___nl__bool__3;
#line 206
return ___nl__bool__14;
#line 207
goto label_41;
#line 207
label_33:
;
#line 208
___nl__bool__15 = false;
#line 208
c_rt_lib0clear(&___nl__im__1);
#line 208
//clear ___nl__int__2;
#line 208
//clear ___nl__bool__3;
#line 208
//clear ___nl__bool__14;
#line 208
return ___nl__bool__15;
#line 209
goto label_41;
#line 209
label_41:
;
#line 209
//clear ___nl__bool__3;
#line 209
//clear ___nl__bool__14;
#line 209
//clear ___nl__bool__15;
return false;

}

ImmT  dfile0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_t");
ImmT  res = dfile0state_t();
return res;
}
ImmT dfile0state_t(){
dfile_priv0__const__init();
return dfile_priv0__const__sing(0);
}
ImmT dfile0state_t0cal() {
dfile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 213
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 213
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 213
c_rt_lib0clear(&___nl__im__3);
#line 213
c_rt_lib0move(&___nl__im__4, ptd0int());
#line 213
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 213
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_string_const(280), ___nl__im__2, ___get_global_string_const(283), ___nl__im__4, ___get_global_string_const(282), ___nl__im__5));
#line 213
c_rt_lib0clear(&___nl__im__2);
#line 213
c_rt_lib0clear(&___nl__im__4);
#line 213
c_rt_lib0clear(&___nl__im__5);
#line 213
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 213
c_rt_lib0clear(&___nl__im__1);
#line 213
return ___nl__im__0;
#line 213
c_rt_lib0clear(&___nl__im__0);
#line 213
return NULL;
return NULL;

}

ImmT  dfile_priv0parse(dfile0state_t0type* ___ref___im__0,bool * ___ref___bool__1,ptd0meta_type0type ___nl__im__2) {
c_rt_lib0arg_val(___nl__im__2);
dfile_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
bool  ___nl__bool__4 = false;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
ImmT  ___nl__string__14 = NULL;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
bool  ___nl__bool__32 = false;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
bool  ___nl__bool__46 = false;
bool  ___nl__bool__47 = false;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__string__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
INT  ___nl__int__59 = 0;
INT  ___nl__int__60 = 0;
ImmT  ___nl__string__61 = NULL;
ImmT  ___nl__im__62 = NULL;
bool  ___nl__bool__63 = false;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
bool  ___nl__bool__66 = false;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
bool  ___nl__bool__76 = false;
bool  ___nl__bool__77 = false;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
INT  ___nl__int__82 = 0;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__string__84 = NULL;
ImmT  ___nl__im__85 = NULL;
bool  ___nl__bool__86 = false;
ImmT  ___nl__im__87 = NULL;
INT  ___nl__int__88 = 0;
ImmT  ___nl__im__89 = NULL;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
ImmT  ___nl__string__92 = NULL;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
bool  ___nl__bool__95 = false;
bool  ___nl__bool__96 = false;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
bool  ___nl__bool__99 = false;
bool  ___nl__bool__100 = false;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
bool  ___nl__bool__104 = false;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
bool  ___nl__bool__121 = false;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT  ___nl__im__125 = NULL;
INT  ___nl__int__126 = 0;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__string__128 = NULL;
ImmT  ___nl__im__129 = NULL;
ImmT  ___nl__im__130 = NULL;
bool  ___nl__bool__131 = false;
ImmT  ___nl__im__132 = NULL;
ImmT  ___nl__im__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
INT  ___nl__int__136 = 0;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__string__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
#line 217
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 218
c_rt_lib0move(&___nl__im__3, dfile_priv0get_char(___ref___im__0));
#line 219
label_2:
;
#line 219
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(39));
#line 219
___nl__bool__4 = !___nl__bool__4;
#line 219
if(___nl__bool__4){ goto label_15;}
#line 220
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(0));
#line 221
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_string_const(302), ___get_global_string_const(303)));
#line 221
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_string_const(39), ___nl__im__6));
#line 221
c_rt_lib0move(&___nl__im__7, c_std_lib0exec(___nl__im__2, &___nl__im__5));
#line 221
c_rt_lib0move(&___nl__im__2, ptd0ensure_only_static_do_not_touch_without_permission(___nl__im__6, ___nl__im__7));
#line 221
c_rt_lib0clear(&___nl__im__6);
#line 221
c_rt_lib0clear(&___nl__im__7);
#line 221
c_rt_lib0clear(&___nl__im__5);
#line 222
goto label_2;
#line 222
label_15:
;
#line 223
c_rt_lib0move(&___nl__im__9,___get_global_string_const(304));
#line 223
___nl__bool__8 = c_rt_lib0eq(___nl__im__3, ___nl__im__9);
#line 223
c_rt_lib0clear(&___nl__im__9);
#line 223
___nl__bool__8 = !___nl__bool__8;
#line 223
if(___nl__bool__8){ goto label_248;}
#line 224
___nl__int__10 = 1;
#line 224
c_rt_lib0move(&___nl__im__11,___get_global_string_const(282));
#line 224
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__11));
#line 224
___nl__int__12 = getIntFromImm(___nl__im__11);
#line 224
___nl__int__13 = ___nl__int__12 + ___nl__int__10;
#line 224
c_rt_lib0move(&___nl__im__11, c_rt_lib0int_new(___nl__int__13));
#line 224
c_rt_lib0move(&___nl__string__14,___get_global_string_const(282));
#line 224
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__14, ___nl__im__11));
#line 224
//clear ___nl__int__10;
#line 224
c_rt_lib0clear(&___nl__im__11);
#line 224
//clear ___nl__int__12;
#line 224
//clear ___nl__int__13;
#line 224
c_rt_lib0clear(&___nl__string__14);
#line 225
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(0));
#line 226
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 227
label_36:
;
#line 227
c_rt_lib0move(&___nl__im__17,___get_global_string_const(305));
#line 227
___nl__bool__16 = dfile_priv0match_s(___ref___im__0, ___nl__im__17);
#line 227
c_rt_lib0clear(&___nl__im__17);
#line 227
___nl__bool__16 = !___nl__bool__16;
#line 227
___nl__bool__16 = !___nl__bool__16;
#line 227
if(___nl__bool__16){ goto label_235;}
#line 228
c_rt_lib0move(&___nl__im__19, ptd0string());
#line 228
c_rt_lib0move(&___nl__im__18, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1, ___nl__im__19));
#line 228
c_rt_lib0clear(&___nl__im__19);
#line 229
___nl__bool__20 = (*___ref___bool__1);
#line 229
___nl__bool__20 = !___nl__bool__20;
#line 229
if(___nl__bool__20){ goto label_59;}
#line 229
c_rt_lib0clear(&___nl__im__2);
#line 229
c_rt_lib0clear(&___nl__im__3);
#line 229
//clear ___nl__bool__4;
#line 229
c_rt_lib0clear(&___nl__im__5);
#line 229
//clear ___nl__bool__8;
#line 229
c_rt_lib0clear(&___nl__im__15);
#line 229
//clear ___nl__bool__16;
#line 229
//clear ___nl__bool__20;
#line 229
return ___nl__im__18;
#line 229
goto label_59;
#line 229
label_59:
;
#line 229
//clear ___nl__bool__20;
#line 230
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 231
c_rt_lib0move(&___nl__im__22,___get_global_string_const(306));
#line 231
___nl__bool__21 = dfile_priv0match_s(___ref___im__0, ___nl__im__22);
#line 231
c_rt_lib0clear(&___nl__im__22);
#line 231
___nl__bool__21 = !___nl__bool__21;
#line 231
___nl__bool__21 = !___nl__bool__21;
#line 231
if(___nl__bool__21){ goto label_93;}
#line 232
(*___ref___bool__1) = true;
#line 233
c_rt_lib0move(&___nl__im__25,___get_global_string_const(285));
#line 233
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 233
___nl__int__26 = getIntFromImm(___nl__im__27);
#line 233
c_rt_lib0clear(&___nl__im__27);
#line 233
c_rt_lib0move(&___nl__string__28, c_rt_lib0int_to_string(___nl__int__26));
#line 233
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__string__28));
#line 233
c_rt_lib0clear(&___nl__im__25);
#line 233
//clear ___nl__int__26;
#line 233
c_rt_lib0clear(&___nl__string__28);
#line 233
c_rt_lib0move(&___nl__im__29,___get_global_string_const(307));
#line 233
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__29));
#line 233
c_rt_lib0clear(&___nl__im__24);
#line 233
c_rt_lib0clear(&___nl__im__29);
#line 233
c_rt_lib0clear(&___nl__im__2);
#line 233
c_rt_lib0clear(&___nl__im__3);
#line 233
//clear ___nl__bool__4;
#line 233
c_rt_lib0clear(&___nl__im__5);
#line 233
//clear ___nl__bool__8;
#line 233
c_rt_lib0clear(&___nl__im__15);
#line 233
//clear ___nl__bool__16;
#line 233
c_rt_lib0clear(&___nl__im__18);
#line 233
//clear ___nl__bool__21;
#line 233
return ___nl__im__23;
#line 234
goto label_93;
#line 234
label_93:
;
#line 234
//clear ___nl__bool__21;
#line 234
c_rt_lib0clear(&___nl__im__23);
#line 236
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(308));
#line 236
___nl__bool__31 = !___nl__bool__31;
#line 236
if(___nl__bool__31){ goto label_130;}
#line 237
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(308)));
#line 237
___nl__bool__32 = hash0has_key(___nl__im__33, ___nl__im__18);
#line 237
c_rt_lib0clear(&___nl__im__33);
#line 237
___nl__bool__32 = !___nl__bool__32;
#line 237
if(___nl__bool__32){ goto label_108;}
#line 238
c_rt_lib0move(&___nl__im__34, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(308)));
#line 238
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value(___nl__im__34, ___nl__im__18));
#line 238
c_rt_lib0clear(&___nl__im__34);
#line 239
goto label_126;
#line 239
label_108:
;
#line 240
(*___ref___bool__1) = true;
#line 241
c_rt_lib0move(&___nl__im__36,___get_global_string_const(309));
#line 241
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__18));
#line 241
c_rt_lib0clear(&___nl__im__36);
#line 241
c_rt_lib0clear(&___nl__im__2);
#line 241
c_rt_lib0clear(&___nl__im__3);
#line 241
//clear ___nl__bool__4;
#line 241
c_rt_lib0clear(&___nl__im__5);
#line 241
//clear ___nl__bool__8;
#line 241
c_rt_lib0clear(&___nl__im__15);
#line 241
//clear ___nl__bool__16;
#line 241
c_rt_lib0clear(&___nl__im__18);
#line 241
c_rt_lib0clear(&___nl__im__30);
#line 241
//clear ___nl__bool__31;
#line 241
//clear ___nl__bool__32;
#line 241
return ___nl__im__35;
#line 242
goto label_126;
#line 242
label_126:
;
#line 242
//clear ___nl__bool__32;
#line 242
c_rt_lib0clear(&___nl__im__35);
#line 243
goto label_171;
#line 243
label_130:
;
#line 243
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(310));
#line 243
___nl__bool__31 = !___nl__bool__31;
#line 243
if(___nl__bool__31){ goto label_136;}
#line 244
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(310)));
#line 245
goto label_171;
#line 245
label_136:
;
#line 245
___nl__bool__31 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(288));
#line 245
___nl__bool__31 = !___nl__bool__31;
#line 245
if(___nl__bool__31){ goto label_142;}
#line 246
c_rt_lib0move(&___nl__im__30, c_rt_lib0ov_mk_none(___get_global_string_const(288)));
#line 247
goto label_171;
#line 247
label_142:
;
#line 248
(*___ref___bool__1) = true;
#line 249
c_rt_lib0move(&___nl__im__40,___get_global_string_const(291));
#line 249
c_rt_lib0move(&___nl__im__41, dfile0ssave(___nl__im__2));
#line 249
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 249
c_rt_lib0clear(&___nl__im__40);
#line 249
c_rt_lib0clear(&___nl__im__41);
#line 249
c_rt_lib0move(&___nl__im__42,___get_global_string_const(311));
#line 249
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__42));
#line 249
c_rt_lib0clear(&___nl__im__39);
#line 249
c_rt_lib0clear(&___nl__im__42);
#line 249
c_rt_lib0move(&___nl__im__44, c_rt_lib0ov_mk_none(___get_global_string_const(310)));
#line 249
c_rt_lib0move(&___nl__im__43, dfile0ssave(___nl__im__44));
#line 249
c_rt_lib0clear(&___nl__im__44);
#line 249
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__43));
#line 249
c_rt_lib0clear(&___nl__im__38);
#line 249
c_rt_lib0clear(&___nl__im__43);
#line 249
c_rt_lib0clear(&___nl__im__2);
#line 249
c_rt_lib0clear(&___nl__im__3);
#line 249
//clear ___nl__bool__4;
#line 249
c_rt_lib0clear(&___nl__im__5);
#line 249
//clear ___nl__bool__8;
#line 249
c_rt_lib0clear(&___nl__im__15);
#line 249
//clear ___nl__bool__16;
#line 249
c_rt_lib0clear(&___nl__im__18);
#line 249
c_rt_lib0clear(&___nl__im__30);
#line 249
//clear ___nl__bool__31;
#line 249
return ___nl__im__37;
#line 250
goto label_171;
#line 250
label_171:
;
#line 250
//clear ___nl__bool__31;
#line 250
c_rt_lib0clear(&___nl__im__37);
#line 251
c_rt_lib0move(&___nl__im__45, dfile_priv0parse(___ref___im__0, ___ref___bool__1, ___nl__im__30));
#line 252
___nl__bool__46 = (*___ref___bool__1);
#line 252
___nl__bool__46 = !___nl__bool__46;
#line 252
if(___nl__bool__46){ goto label_190;}
#line 252
c_rt_lib0clear(&___nl__im__2);
#line 252
c_rt_lib0clear(&___nl__im__3);
#line 252
//clear ___nl__bool__4;
#line 252
c_rt_lib0clear(&___nl__im__5);
#line 252
//clear ___nl__bool__8;
#line 252
c_rt_lib0clear(&___nl__im__15);
#line 252
//clear ___nl__bool__16;
#line 252
c_rt_lib0clear(&___nl__im__18);
#line 252
c_rt_lib0clear(&___nl__im__30);
#line 252
//clear ___nl__bool__46;
#line 252
return ___nl__im__45;
#line 252
goto label_190;
#line 252
label_190:
;
#line 252
//clear ___nl__bool__46;
#line 253
c_rt_lib0delete(hash0set_value(&___nl__im__15, ___nl__im__18, ___nl__im__45));
#line 254
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 255
c_rt_lib0move(&___nl__im__48,___get_global_string_const(312));
#line 255
___nl__bool__47 = dfile_priv0match_s(___ref___im__0, ___nl__im__48);
#line 255
c_rt_lib0clear(&___nl__im__48);
#line 255
___nl__bool__47 = !___nl__bool__47;
#line 255
___nl__bool__47 = !___nl__bool__47;
#line 255
if(___nl__bool__47){ goto label_227;}
#line 256
(*___ref___bool__1) = true;
#line 257
c_rt_lib0move(&___nl__im__51,___get_global_string_const(285));
#line 257
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 257
___nl__int__52 = getIntFromImm(___nl__im__53);
#line 257
c_rt_lib0clear(&___nl__im__53);
#line 257
c_rt_lib0move(&___nl__string__54, c_rt_lib0int_to_string(___nl__int__52));
#line 257
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__string__54));
#line 257
c_rt_lib0clear(&___nl__im__51);
#line 257
//clear ___nl__int__52;
#line 257
c_rt_lib0clear(&___nl__string__54);
#line 257
c_rt_lib0move(&___nl__im__55,___get_global_string_const(313));
#line 257
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__55));
#line 257
c_rt_lib0clear(&___nl__im__50);
#line 257
c_rt_lib0clear(&___nl__im__55);
#line 257
c_rt_lib0clear(&___nl__im__2);
#line 257
c_rt_lib0clear(&___nl__im__3);
#line 257
//clear ___nl__bool__4;
#line 257
c_rt_lib0clear(&___nl__im__5);
#line 257
//clear ___nl__bool__8;
#line 257
c_rt_lib0clear(&___nl__im__15);
#line 257
//clear ___nl__bool__16;
#line 257
c_rt_lib0clear(&___nl__im__18);
#line 257
c_rt_lib0clear(&___nl__im__30);
#line 257
c_rt_lib0clear(&___nl__im__45);
#line 257
//clear ___nl__bool__47;
#line 257
return ___nl__im__49;
#line 258
goto label_227;
#line 258
label_227:
;
#line 258
//clear ___nl__bool__47;
#line 258
c_rt_lib0clear(&___nl__im__49);
#line 259
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 259
c_rt_lib0clear(&___nl__im__18);
#line 259
c_rt_lib0clear(&___nl__im__30);
#line 259
c_rt_lib0clear(&___nl__im__45);
#line 260
goto label_36;
#line 260
label_235:
;
#line 261
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 262
c_rt_lib0clear(&___nl__im__2);
#line 262
c_rt_lib0clear(&___nl__im__3);
#line 262
//clear ___nl__bool__4;
#line 262
c_rt_lib0clear(&___nl__im__5);
#line 262
//clear ___nl__bool__8;
#line 262
//clear ___nl__bool__16;
#line 262
c_rt_lib0clear(&___nl__im__18);
#line 262
c_rt_lib0clear(&___nl__im__30);
#line 262
c_rt_lib0clear(&___nl__im__45);
#line 262
return ___nl__im__15;
#line 263
goto label_782;
#line 263
label_248:
;
#line 263
c_rt_lib0move(&___nl__im__56,___get_global_string_const(314));
#line 263
___nl__bool__8 = c_rt_lib0eq(___nl__im__3, ___nl__im__56);
#line 263
c_rt_lib0clear(&___nl__im__56);
#line 263
___nl__bool__8 = !___nl__bool__8;
#line 263
if(___nl__bool__8){ goto label_407;}
#line 264
___nl__int__57 = 1;
#line 264
c_rt_lib0move(&___nl__im__58,___get_global_string_const(282));
#line 264
c_rt_lib0move(&___nl__im__58, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__58));
#line 264
___nl__int__59 = getIntFromImm(___nl__im__58);
#line 264
___nl__int__60 = ___nl__int__59 + ___nl__int__57;
#line 264
c_rt_lib0move(&___nl__im__58, c_rt_lib0int_new(___nl__int__60));
#line 264
c_rt_lib0move(&___nl__string__61,___get_global_string_const(282));
#line 264
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__61, ___nl__im__58));
#line 264
//clear ___nl__int__57;
#line 264
c_rt_lib0clear(&___nl__im__58);
#line 264
//clear ___nl__int__59;
#line 264
//clear ___nl__int__60;
#line 264
c_rt_lib0clear(&___nl__string__61);
#line 265
c_rt_lib0move(&___nl__im__62, c_rt_lib0array_mk(0));
#line 266
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 267
label_269:
;
#line 267
c_rt_lib0move(&___nl__im__64,___get_global_string_const(315));
#line 267
___nl__bool__63 = dfile_priv0match_s(___ref___im__0, ___nl__im__64);
#line 267
c_rt_lib0clear(&___nl__im__64);
#line 267
___nl__bool__63 = !___nl__bool__63;
#line 267
___nl__bool__63 = !___nl__bool__63;
#line 267
if(___nl__bool__63){ goto label_391;}
#line 269
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(316));
#line 269
___nl__bool__66 = !___nl__bool__66;
#line 269
if(___nl__bool__66){ goto label_281;}
#line 270
c_rt_lib0move(&___nl__im__65, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(316)));
#line 271
goto label_320;
#line 271
label_281:
;
#line 271
___nl__bool__66 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(288));
#line 271
___nl__bool__66 = !___nl__bool__66;
#line 271
if(___nl__bool__66){ goto label_287;}
#line 272
c_rt_lib0move(&___nl__im__65, c_rt_lib0ov_mk_none(___get_global_string_const(288)));
#line 273
goto label_320;
#line 273
label_287:
;
#line 274
(*___ref___bool__1) = true;
#line 275
c_rt_lib0move(&___nl__im__70,___get_global_string_const(291));
#line 275
c_rt_lib0move(&___nl__im__71, dfile0ssave(___nl__im__2));
#line 275
c_rt_lib0move(&___nl__im__69, c_rt_lib0concat_new(___nl__im__70, ___nl__im__71));
#line 275
c_rt_lib0clear(&___nl__im__70);
#line 275
c_rt_lib0clear(&___nl__im__71);
#line 275
c_rt_lib0move(&___nl__im__72,___get_global_string_const(311));
#line 275
c_rt_lib0move(&___nl__im__68, c_rt_lib0concat_new(___nl__im__69, ___nl__im__72));
#line 275
c_rt_lib0clear(&___nl__im__69);
#line 275
c_rt_lib0clear(&___nl__im__72);
#line 275
c_rt_lib0move(&___nl__im__74, c_rt_lib0ov_mk_none(___get_global_string_const(310)));
#line 275
c_rt_lib0move(&___nl__im__73, dfile0ssave(___nl__im__74));
#line 275
c_rt_lib0clear(&___nl__im__74);
#line 275
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__73));
#line 275
c_rt_lib0clear(&___nl__im__68);
#line 275
c_rt_lib0clear(&___nl__im__73);
#line 275
c_rt_lib0clear(&___nl__im__2);
#line 275
c_rt_lib0clear(&___nl__im__3);
#line 275
//clear ___nl__bool__4;
#line 275
c_rt_lib0clear(&___nl__im__5);
#line 275
//clear ___nl__bool__8;
#line 275
c_rt_lib0clear(&___nl__im__15);
#line 275
//clear ___nl__bool__16;
#line 275
c_rt_lib0clear(&___nl__im__18);
#line 275
c_rt_lib0clear(&___nl__im__30);
#line 275
c_rt_lib0clear(&___nl__im__45);
#line 275
c_rt_lib0clear(&___nl__im__62);
#line 275
//clear ___nl__bool__63;
#line 275
c_rt_lib0clear(&___nl__im__65);
#line 275
//clear ___nl__bool__66;
#line 275
return ___nl__im__67;
#line 276
goto label_320;
#line 276
label_320:
;
#line 276
//clear ___nl__bool__66;
#line 276
c_rt_lib0clear(&___nl__im__67);
#line 277
c_rt_lib0move(&___nl__im__75, dfile_priv0parse(___ref___im__0, ___ref___bool__1, ___nl__im__65));
#line 278
___nl__bool__76 = (*___ref___bool__1);
#line 278
___nl__bool__76 = !___nl__bool__76;
#line 278
if(___nl__bool__76){ goto label_343;}
#line 278
c_rt_lib0clear(&___nl__im__2);
#line 278
c_rt_lib0clear(&___nl__im__3);
#line 278
//clear ___nl__bool__4;
#line 278
c_rt_lib0clear(&___nl__im__5);
#line 278
//clear ___nl__bool__8;
#line 278
c_rt_lib0clear(&___nl__im__15);
#line 278
//clear ___nl__bool__16;
#line 278
c_rt_lib0clear(&___nl__im__18);
#line 278
c_rt_lib0clear(&___nl__im__30);
#line 278
c_rt_lib0clear(&___nl__im__45);
#line 278
c_rt_lib0clear(&___nl__im__62);
#line 278
//clear ___nl__bool__63;
#line 278
c_rt_lib0clear(&___nl__im__65);
#line 278
//clear ___nl__bool__76;
#line 278
return ___nl__im__75;
#line 278
goto label_343;
#line 278
label_343:
;
#line 278
//clear ___nl__bool__76;
#line 279
c_rt_lib0delete(array0push(&___nl__im__62, ___nl__im__75));
#line 280
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 281
c_rt_lib0move(&___nl__im__78,___get_global_string_const(312));
#line 281
___nl__bool__77 = dfile_priv0match_s(___ref___im__0, ___nl__im__78);
#line 281
c_rt_lib0clear(&___nl__im__78);
#line 281
___nl__bool__77 = !___nl__bool__77;
#line 281
___nl__bool__77 = !___nl__bool__77;
#line 281
if(___nl__bool__77){ goto label_384;}
#line 282
(*___ref___bool__1) = true;
#line 283
c_rt_lib0move(&___nl__im__81,___get_global_string_const(285));
#line 283
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 283
___nl__int__82 = getIntFromImm(___nl__im__83);
#line 283
c_rt_lib0clear(&___nl__im__83);
#line 283
c_rt_lib0move(&___nl__string__84, c_rt_lib0int_to_string(___nl__int__82));
#line 283
c_rt_lib0move(&___nl__im__80, c_rt_lib0concat_new(___nl__im__81, ___nl__string__84));
#line 283
c_rt_lib0clear(&___nl__im__81);
#line 283
//clear ___nl__int__82;
#line 283
c_rt_lib0clear(&___nl__string__84);
#line 283
c_rt_lib0move(&___nl__im__85,___get_global_string_const(313));
#line 283
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__85));
#line 283
c_rt_lib0clear(&___nl__im__80);
#line 283
c_rt_lib0clear(&___nl__im__85);
#line 283
c_rt_lib0clear(&___nl__im__2);
#line 283
c_rt_lib0clear(&___nl__im__3);
#line 283
//clear ___nl__bool__4;
#line 283
c_rt_lib0clear(&___nl__im__5);
#line 283
//clear ___nl__bool__8;
#line 283
c_rt_lib0clear(&___nl__im__15);
#line 283
//clear ___nl__bool__16;
#line 283
c_rt_lib0clear(&___nl__im__18);
#line 283
c_rt_lib0clear(&___nl__im__30);
#line 283
c_rt_lib0clear(&___nl__im__45);
#line 283
c_rt_lib0clear(&___nl__im__62);
#line 283
//clear ___nl__bool__63;
#line 283
c_rt_lib0clear(&___nl__im__65);
#line 283
c_rt_lib0clear(&___nl__im__75);
#line 283
//clear ___nl__bool__77;
#line 283
return ___nl__im__79;
#line 284
goto label_384;
#line 284
label_384:
;
#line 284
//clear ___nl__bool__77;
#line 284
c_rt_lib0clear(&___nl__im__79);
#line 285
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 285
c_rt_lib0clear(&___nl__im__65);
#line 285
c_rt_lib0clear(&___nl__im__75);
#line 286
goto label_269;
#line 286
label_391:
;
#line 287
c_rt_lib0clear(&___nl__im__2);
#line 287
c_rt_lib0clear(&___nl__im__3);
#line 287
//clear ___nl__bool__4;
#line 287
c_rt_lib0clear(&___nl__im__5);
#line 287
//clear ___nl__bool__8;
#line 287
c_rt_lib0clear(&___nl__im__15);
#line 287
//clear ___nl__bool__16;
#line 287
c_rt_lib0clear(&___nl__im__18);
#line 287
c_rt_lib0clear(&___nl__im__30);
#line 287
c_rt_lib0clear(&___nl__im__45);
#line 287
//clear ___nl__bool__63;
#line 287
c_rt_lib0clear(&___nl__im__65);
#line 287
c_rt_lib0clear(&___nl__im__75);
#line 287
return ___nl__im__62;
#line 288
goto label_782;
#line 288
label_407:
;
#line 288
c_rt_lib0move(&___nl__im__87,___get_global_string_const(190));
#line 288
___nl__bool__8 = c_rt_lib0eq(___nl__im__3, ___nl__im__87);
#line 288
c_rt_lib0clear(&___nl__im__87);
#line 288
___nl__bool__86 = !___nl__bool__8;
#line 288
if(___nl__bool__86){ goto label_414;}
#line 288
___nl__bool__8 = dfile_priv0is_ov(___ref___im__0);
#line 288
label_414:
;
#line 288
//clear ___nl__bool__86;
#line 288
___nl__bool__8 = !___nl__bool__8;
#line 288
if(___nl__bool__8){ goto label_762;}
#line 289
___nl__int__88 = 7;
#line 289
c_rt_lib0move(&___nl__im__89,___get_global_string_const(282));
#line 289
c_rt_lib0move(&___nl__im__89, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__89));
#line 289
___nl__int__90 = getIntFromImm(___nl__im__89);
#line 289
___nl__int__91 = ___nl__int__90 + ___nl__int__88;
#line 289
c_rt_lib0move(&___nl__im__89, c_rt_lib0int_new(___nl__int__91));
#line 289
c_rt_lib0move(&___nl__string__92,___get_global_string_const(282));
#line 289
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__92, ___nl__im__89));
#line 289
//clear ___nl__int__88;
#line 289
c_rt_lib0clear(&___nl__im__89);
#line 289
//clear ___nl__int__90;
#line 289
//clear ___nl__int__91;
#line 289
c_rt_lib0clear(&___nl__string__92);
#line 290
c_rt_lib0move(&___nl__im__94, ptd0string());
#line 290
c_rt_lib0move(&___nl__im__93, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1, ___nl__im__94));
#line 290
c_rt_lib0clear(&___nl__im__94);
#line 291
___nl__bool__95 = (*___ref___bool__1);
#line 291
___nl__bool__95 = !___nl__bool__95;
#line 291
if(___nl__bool__95){ goto label_454;}
#line 291
c_rt_lib0clear(&___nl__im__2);
#line 291
c_rt_lib0clear(&___nl__im__3);
#line 291
//clear ___nl__bool__4;
#line 291
c_rt_lib0clear(&___nl__im__5);
#line 291
//clear ___nl__bool__8;
#line 291
c_rt_lib0clear(&___nl__im__15);
#line 291
//clear ___nl__bool__16;
#line 291
c_rt_lib0clear(&___nl__im__18);
#line 291
c_rt_lib0clear(&___nl__im__30);
#line 291
c_rt_lib0clear(&___nl__im__45);
#line 291
c_rt_lib0clear(&___nl__im__62);
#line 291
//clear ___nl__bool__63;
#line 291
c_rt_lib0clear(&___nl__im__65);
#line 291
c_rt_lib0clear(&___nl__im__75);
#line 291
//clear ___nl__bool__95;
#line 291
return ___nl__im__93;
#line 291
goto label_454;
#line 291
label_454:
;
#line 291
//clear ___nl__bool__95;
#line 292
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 293
c_rt_lib0move(&___nl__im__97,___get_global_string_const(312));
#line 293
___nl__bool__96 = dfile_priv0match_s(___ref___im__0, ___nl__im__97);
#line 293
c_rt_lib0clear(&___nl__im__97);
#line 293
___nl__bool__96 = !___nl__bool__96;
#line 293
if(___nl__bool__96){ goto label_696;}
#line 295
___nl__bool__99 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(317));
#line 295
___nl__bool__99 = !___nl__bool__99;
#line 295
if(___nl__bool__99){ goto label_558;}
#line 296
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(317)));
#line 296
___nl__bool__100 = hash0has_key(___nl__im__101, ___nl__im__93);
#line 296
c_rt_lib0clear(&___nl__im__101);
#line 296
___nl__bool__100 = !___nl__bool__100;
#line 296
if(___nl__bool__100){ goto label_516;}
#line 297
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(317)));
#line 297
c_rt_lib0move(&___nl__im__102, c_rt_lib0hash_get_value(___nl__im__103, ___nl__im__93));
#line 297
c_rt_lib0clear(&___nl__im__103);
#line 297
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__102, ___get_global_string_const(27));
#line 297
if(___nl__bool__104){ goto label_480;}
#line 299
___nl__bool__104 = c_rt_lib0priv_is(___nl__im__102, ___get_global_string_const(28));
#line 299
if(___nl__bool__104){ goto label_485;}
#line 299
c_rt_lib0move(&___nl__im__105,___get_global_string_const(15));
#line 299
c_rt_lib0move(&___nl__im__105, c_rt_lib0array_mk(2, ___nl__im__105, ___nl__im__102));
#line 299
nl_die_arg(___nl__im__105);
#line 297
label_480:
;
#line 297
c_rt_lib0move(&___nl__im__107, c_rt_lib0priv_as(___nl__im__102, ___get_global_string_const(27)));
#line 297
c_rt_lib0copy(&___nl__im__106, ___nl__im__107);
#line 298
c_rt_lib0copy(&___nl__im__98, ___nl__im__106);
#line 299
goto label_514;
#line 299
label_485:
;
#line 300
(*___ref___bool__1) = true;
#line 301
c_rt_lib0move(&___nl__im__108,___get_global_string_const(318));
#line 301
c_rt_lib0clear(&___nl__im__2);
#line 301
c_rt_lib0clear(&___nl__im__3);
#line 301
//clear ___nl__bool__4;
#line 301
c_rt_lib0clear(&___nl__im__5);
#line 301
//clear ___nl__bool__8;
#line 301
c_rt_lib0clear(&___nl__im__15);
#line 301
//clear ___nl__bool__16;
#line 301
c_rt_lib0clear(&___nl__im__18);
#line 301
c_rt_lib0clear(&___nl__im__30);
#line 301
c_rt_lib0clear(&___nl__im__45);
#line 301
c_rt_lib0clear(&___nl__im__62);
#line 301
//clear ___nl__bool__63;
#line 301
c_rt_lib0clear(&___nl__im__65);
#line 301
c_rt_lib0clear(&___nl__im__75);
#line 301
c_rt_lib0clear(&___nl__im__93);
#line 301
//clear ___nl__bool__96;
#line 301
c_rt_lib0clear(&___nl__im__98);
#line 301
//clear ___nl__bool__99;
#line 301
//clear ___nl__bool__100;
#line 301
c_rt_lib0clear(&___nl__im__102);
#line 301
//clear ___nl__bool__104;
#line 301
c_rt_lib0clear(&___nl__im__105);
#line 301
c_rt_lib0clear(&___nl__im__106);
#line 301
c_rt_lib0clear(&___nl__im__107);
#line 301
return ___nl__im__108;
#line 302
goto label_514;
#line 302
label_514:
;
#line 303
goto label_548;
#line 303
label_516:
;
#line 304
(*___ref___bool__1) = true;
#line 305
c_rt_lib0move(&___nl__im__110,___get_global_string_const(319));
#line 305
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__93));
#line 305
c_rt_lib0clear(&___nl__im__110);
#line 305
c_rt_lib0clear(&___nl__im__2);
#line 305
c_rt_lib0clear(&___nl__im__3);
#line 305
//clear ___nl__bool__4;
#line 305
c_rt_lib0clear(&___nl__im__5);
#line 305
//clear ___nl__bool__8;
#line 305
c_rt_lib0clear(&___nl__im__15);
#line 305
//clear ___nl__bool__16;
#line 305
c_rt_lib0clear(&___nl__im__18);
#line 305
c_rt_lib0clear(&___nl__im__30);
#line 305
c_rt_lib0clear(&___nl__im__45);
#line 305
c_rt_lib0clear(&___nl__im__62);
#line 305
//clear ___nl__bool__63;
#line 305
c_rt_lib0clear(&___nl__im__65);
#line 305
c_rt_lib0clear(&___nl__im__75);
#line 305
c_rt_lib0clear(&___nl__im__93);
#line 305
//clear ___nl__bool__96;
#line 305
c_rt_lib0clear(&___nl__im__98);
#line 305
//clear ___nl__bool__99;
#line 305
//clear ___nl__bool__100;
#line 305
c_rt_lib0clear(&___nl__im__102);
#line 305
//clear ___nl__bool__104;
#line 305
c_rt_lib0clear(&___nl__im__105);
#line 305
c_rt_lib0clear(&___nl__im__106);
#line 305
c_rt_lib0clear(&___nl__im__107);
#line 305
c_rt_lib0clear(&___nl__im__108);
#line 305
return ___nl__im__109;
#line 306
goto label_548;
#line 306
label_548:
;
#line 306
//clear ___nl__bool__100;
#line 306
c_rt_lib0clear(&___nl__im__102);
#line 306
//clear ___nl__bool__104;
#line 306
c_rt_lib0clear(&___nl__im__105);
#line 306
c_rt_lib0clear(&___nl__im__106);
#line 306
c_rt_lib0clear(&___nl__im__107);
#line 306
c_rt_lib0clear(&___nl__im__108);
#line 306
c_rt_lib0clear(&___nl__im__109);
#line 307
goto label_601;
#line 307
label_558:
;
#line 307
___nl__bool__99 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(288));
#line 307
___nl__bool__99 = !___nl__bool__99;
#line 307
if(___nl__bool__99){ goto label_564;}
#line 308
c_rt_lib0move(&___nl__im__98, c_rt_lib0ov_mk_none(___get_global_string_const(288)));
#line 309
goto label_601;
#line 309
label_564:
;
#line 310
(*___ref___bool__1) = true;
#line 311
c_rt_lib0move(&___nl__im__114,___get_global_string_const(291));
#line 311
c_rt_lib0move(&___nl__im__115, dfile0ssave(___nl__im__2));
#line 311
c_rt_lib0move(&___nl__im__113, c_rt_lib0concat_new(___nl__im__114, ___nl__im__115));
#line 311
c_rt_lib0clear(&___nl__im__114);
#line 311
c_rt_lib0clear(&___nl__im__115);
#line 311
c_rt_lib0move(&___nl__im__116,___get_global_string_const(311));
#line 311
c_rt_lib0move(&___nl__im__112, c_rt_lib0concat_new(___nl__im__113, ___nl__im__116));
#line 311
c_rt_lib0clear(&___nl__im__113);
#line 311
c_rt_lib0clear(&___nl__im__116);
#line 311
c_rt_lib0move(&___nl__im__118, c_rt_lib0ov_mk_none(___get_global_string_const(310)));
#line 311
c_rt_lib0move(&___nl__im__117, dfile0ssave(___nl__im__118));
#line 311
c_rt_lib0clear(&___nl__im__118);
#line 311
c_rt_lib0move(&___nl__im__111, c_rt_lib0concat_new(___nl__im__112, ___nl__im__117));
#line 311
c_rt_lib0clear(&___nl__im__112);
#line 311
c_rt_lib0clear(&___nl__im__117);
#line 311
c_rt_lib0clear(&___nl__im__2);
#line 311
c_rt_lib0clear(&___nl__im__3);
#line 311
//clear ___nl__bool__4;
#line 311
c_rt_lib0clear(&___nl__im__5);
#line 311
//clear ___nl__bool__8;
#line 311
c_rt_lib0clear(&___nl__im__15);
#line 311
//clear ___nl__bool__16;
#line 311
c_rt_lib0clear(&___nl__im__18);
#line 311
c_rt_lib0clear(&___nl__im__30);
#line 311
c_rt_lib0clear(&___nl__im__45);
#line 311
c_rt_lib0clear(&___nl__im__62);
#line 311
//clear ___nl__bool__63;
#line 311
c_rt_lib0clear(&___nl__im__65);
#line 311
c_rt_lib0clear(&___nl__im__75);
#line 311
c_rt_lib0clear(&___nl__im__93);
#line 311
//clear ___nl__bool__96;
#line 311
c_rt_lib0clear(&___nl__im__98);
#line 311
//clear ___nl__bool__99;
#line 311
return ___nl__im__111;
#line 312
goto label_601;
#line 312
label_601:
;
#line 312
//clear ___nl__bool__99;
#line 312
c_rt_lib0clear(&___nl__im__111);
#line 313
c_rt_lib0move(&___nl__im__119, dfile_priv0parse(___ref___im__0, ___ref___bool__1, ___nl__im__98));
#line 314
___nl__bool__120 = (*___ref___bool__1);
#line 314
___nl__bool__120 = !___nl__bool__120;
#line 314
if(___nl__bool__120){ goto label_628;}
#line 314
c_rt_lib0clear(&___nl__im__2);
#line 314
c_rt_lib0clear(&___nl__im__3);
#line 314
//clear ___nl__bool__4;
#line 314
c_rt_lib0clear(&___nl__im__5);
#line 314
//clear ___nl__bool__8;
#line 314
c_rt_lib0clear(&___nl__im__15);
#line 314
//clear ___nl__bool__16;
#line 314
c_rt_lib0clear(&___nl__im__18);
#line 314
c_rt_lib0clear(&___nl__im__30);
#line 314
c_rt_lib0clear(&___nl__im__45);
#line 314
c_rt_lib0clear(&___nl__im__62);
#line 314
//clear ___nl__bool__63;
#line 314
c_rt_lib0clear(&___nl__im__65);
#line 314
c_rt_lib0clear(&___nl__im__75);
#line 314
c_rt_lib0clear(&___nl__im__93);
#line 314
//clear ___nl__bool__96;
#line 314
c_rt_lib0clear(&___nl__im__98);
#line 314
//clear ___nl__bool__120;
#line 314
return ___nl__im__119;
#line 314
goto label_628;
#line 314
label_628:
;
#line 314
//clear ___nl__bool__120;
#line 315
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 316
c_rt_lib0move(&___nl__im__122,___get_global_string_const(320));
#line 316
___nl__bool__121 = dfile_priv0match_s(___ref___im__0, ___nl__im__122);
#line 316
c_rt_lib0clear(&___nl__im__122);
#line 316
___nl__bool__121 = !___nl__bool__121;
#line 316
___nl__bool__121 = !___nl__bool__121;
#line 316
if(___nl__bool__121){ goto label_672;}
#line 317
(*___ref___bool__1) = true;
#line 318
c_rt_lib0move(&___nl__im__125,___get_global_string_const(285));
#line 318
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 318
___nl__int__126 = getIntFromImm(___nl__im__127);
#line 318
c_rt_lib0clear(&___nl__im__127);
#line 318
c_rt_lib0move(&___nl__string__128, c_rt_lib0int_to_string(___nl__int__126));
#line 318
c_rt_lib0move(&___nl__im__124, c_rt_lib0concat_new(___nl__im__125, ___nl__string__128));
#line 318
c_rt_lib0clear(&___nl__im__125);
#line 318
//clear ___nl__int__126;
#line 318
c_rt_lib0clear(&___nl__string__128);
#line 318
c_rt_lib0move(&___nl__im__129,___get_global_string_const(321));
#line 318
c_rt_lib0move(&___nl__im__123, c_rt_lib0concat_new(___nl__im__124, ___nl__im__129));
#line 318
c_rt_lib0clear(&___nl__im__124);
#line 318
c_rt_lib0clear(&___nl__im__129);
#line 318
c_rt_lib0clear(&___nl__im__2);
#line 318
c_rt_lib0clear(&___nl__im__3);
#line 318
//clear ___nl__bool__4;
#line 318
c_rt_lib0clear(&___nl__im__5);
#line 318
//clear ___nl__bool__8;
#line 318
c_rt_lib0clear(&___nl__im__15);
#line 318
//clear ___nl__bool__16;
#line 318
c_rt_lib0clear(&___nl__im__18);
#line 318
c_rt_lib0clear(&___nl__im__30);
#line 318
c_rt_lib0clear(&___nl__im__45);
#line 318
c_rt_lib0clear(&___nl__im__62);
#line 318
//clear ___nl__bool__63;
#line 318
c_rt_lib0clear(&___nl__im__65);
#line 318
c_rt_lib0clear(&___nl__im__75);
#line 318
c_rt_lib0clear(&___nl__im__93);
#line 318
//clear ___nl__bool__96;
#line 318
c_rt_lib0clear(&___nl__im__98);
#line 318
c_rt_lib0clear(&___nl__im__119);
#line 318
//clear ___nl__bool__121;
#line 318
return ___nl__im__123;
#line 319
goto label_672;
#line 319
label_672:
;
#line 319
//clear ___nl__bool__121;
#line 319
c_rt_lib0clear(&___nl__im__123);
#line 320
c_rt_lib0move(&___nl__im__130, ov0mk_val(___nl__im__93, ___nl__im__119));
#line 320
c_rt_lib0clear(&___nl__im__2);
#line 320
c_rt_lib0clear(&___nl__im__3);
#line 320
//clear ___nl__bool__4;
#line 320
c_rt_lib0clear(&___nl__im__5);
#line 320
//clear ___nl__bool__8;
#line 320
c_rt_lib0clear(&___nl__im__15);
#line 320
//clear ___nl__bool__16;
#line 320
c_rt_lib0clear(&___nl__im__18);
#line 320
c_rt_lib0clear(&___nl__im__30);
#line 320
c_rt_lib0clear(&___nl__im__45);
#line 320
c_rt_lib0clear(&___nl__im__62);
#line 320
//clear ___nl__bool__63;
#line 320
c_rt_lib0clear(&___nl__im__65);
#line 320
c_rt_lib0clear(&___nl__im__75);
#line 320
c_rt_lib0clear(&___nl__im__93);
#line 320
//clear ___nl__bool__96;
#line 320
c_rt_lib0clear(&___nl__im__98);
#line 320
c_rt_lib0clear(&___nl__im__119);
#line 320
return ___nl__im__130;
#line 321
goto label_696;
#line 321
label_696:
;
#line 321
//clear ___nl__bool__96;
#line 321
c_rt_lib0clear(&___nl__im__98);
#line 321
c_rt_lib0clear(&___nl__im__119);
#line 321
c_rt_lib0clear(&___nl__im__130);
#line 322
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 323
c_rt_lib0move(&___nl__im__132,___get_global_string_const(320));
#line 323
___nl__bool__131 = dfile_priv0match_s(___ref___im__0, ___nl__im__132);
#line 323
c_rt_lib0clear(&___nl__im__132);
#line 323
___nl__bool__131 = !___nl__bool__131;
#line 323
___nl__bool__131 = !___nl__bool__131;
#line 323
if(___nl__bool__131){ goto label_740;}
#line 324
(*___ref___bool__1) = true;
#line 325
c_rt_lib0move(&___nl__im__135,___get_global_string_const(285));
#line 325
c_rt_lib0move(&___nl__im__137, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(282)));
#line 325
___nl__int__136 = getIntFromImm(___nl__im__137);
#line 325
c_rt_lib0clear(&___nl__im__137);
#line 325
c_rt_lib0move(&___nl__string__138, c_rt_lib0int_to_string(___nl__int__136));
#line 325
c_rt_lib0move(&___nl__im__134, c_rt_lib0concat_new(___nl__im__135, ___nl__string__138));
#line 325
c_rt_lib0clear(&___nl__im__135);
#line 325
//clear ___nl__int__136;
#line 325
c_rt_lib0clear(&___nl__string__138);
#line 325
c_rt_lib0move(&___nl__im__139,___get_global_string_const(321));
#line 325
c_rt_lib0move(&___nl__im__133, c_rt_lib0concat_new(___nl__im__134, ___nl__im__139));
#line 325
c_rt_lib0clear(&___nl__im__134);
#line 325
c_rt_lib0clear(&___nl__im__139);
#line 325
c_rt_lib0clear(&___nl__im__2);
#line 325
c_rt_lib0clear(&___nl__im__3);
#line 325
//clear ___nl__bool__4;
#line 325
c_rt_lib0clear(&___nl__im__5);
#line 325
//clear ___nl__bool__8;
#line 325
c_rt_lib0clear(&___nl__im__15);
#line 325
//clear ___nl__bool__16;
#line 325
c_rt_lib0clear(&___nl__im__18);
#line 325
c_rt_lib0clear(&___nl__im__30);
#line 325
c_rt_lib0clear(&___nl__im__45);
#line 325
c_rt_lib0clear(&___nl__im__62);
#line 325
//clear ___nl__bool__63;
#line 325
c_rt_lib0clear(&___nl__im__65);
#line 325
c_rt_lib0clear(&___nl__im__75);
#line 325
c_rt_lib0clear(&___nl__im__93);
#line 325
//clear ___nl__bool__131;
#line 325
return ___nl__im__133;
#line 326
goto label_740;
#line 326
label_740:
;
#line 326
//clear ___nl__bool__131;
#line 326
c_rt_lib0clear(&___nl__im__133);
#line 327
c_rt_lib0delete(dfile_priv0eat_ws(___ref___im__0));
#line 328
c_rt_lib0move(&___nl__im__140, ov0mk(___nl__im__93));
#line 328
c_rt_lib0clear(&___nl__im__2);
#line 328
c_rt_lib0clear(&___nl__im__3);
#line 328
//clear ___nl__bool__4;
#line 328
c_rt_lib0clear(&___nl__im__5);
#line 328
//clear ___nl__bool__8;
#line 328
c_rt_lib0clear(&___nl__im__15);
#line 328
//clear ___nl__bool__16;
#line 328
c_rt_lib0clear(&___nl__im__18);
#line 328
c_rt_lib0clear(&___nl__im__30);
#line 328
c_rt_lib0clear(&___nl__im__45);
#line 328
c_rt_lib0clear(&___nl__im__62);
#line 328
//clear ___nl__bool__63;
#line 328
c_rt_lib0clear(&___nl__im__65);
#line 328
c_rt_lib0clear(&___nl__im__75);
#line 328
c_rt_lib0clear(&___nl__im__93);
#line 328
return ___nl__im__140;
#line 329
goto label_782;
#line 329
label_762:
;
#line 330
c_rt_lib0move(&___nl__im__141, dfile_priv0parse_scalar(___ref___im__0, ___ref___bool__1, ___nl__im__2));
#line 330
c_rt_lib0clear(&___nl__im__2);
#line 330
c_rt_lib0clear(&___nl__im__3);
#line 330
//clear ___nl__bool__4;
#line 330
c_rt_lib0clear(&___nl__im__5);
#line 330
//clear ___nl__bool__8;
#line 330
c_rt_lib0clear(&___nl__im__15);
#line 330
//clear ___nl__bool__16;
#line 330
c_rt_lib0clear(&___nl__im__18);
#line 330
c_rt_lib0clear(&___nl__im__30);
#line 330
c_rt_lib0clear(&___nl__im__45);
#line 330
c_rt_lib0clear(&___nl__im__62);
#line 330
//clear ___nl__bool__63;
#line 330
c_rt_lib0clear(&___nl__im__65);
#line 330
c_rt_lib0clear(&___nl__im__75);
#line 330
c_rt_lib0clear(&___nl__im__93);
#line 330
c_rt_lib0clear(&___nl__im__140);
#line 330
return ___nl__im__141;
#line 331
goto label_782;
#line 331
label_782:
;
#line 331
//clear ___nl__bool__8;
#line 331
c_rt_lib0clear(&___nl__im__15);
#line 331
//clear ___nl__bool__16;
#line 331
c_rt_lib0clear(&___nl__im__18);
#line 331
c_rt_lib0clear(&___nl__im__30);
#line 331
c_rt_lib0clear(&___nl__im__45);
#line 331
c_rt_lib0clear(&___nl__im__62);
#line 331
//clear ___nl__bool__63;
#line 331
c_rt_lib0clear(&___nl__im__65);
#line 331
c_rt_lib0clear(&___nl__im__75);
#line 331
c_rt_lib0clear(&___nl__im__93);
#line 331
c_rt_lib0clear(&___nl__im__140);
#line 331
c_rt_lib0clear(&___nl__im__141);
#line 331
c_rt_lib0clear(&___nl__im__2);
#line 331
c_rt_lib0clear(&___nl__im__3);
#line 331
//clear ___nl__bool__4;
#line 331
c_rt_lib0clear(&___nl__im__5);
#line 331
return NULL;
return NULL;

}

ImmT  dfile0sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0sload");
ImmT  *var0 = &(_tab[0]);
ImmT  res = dfile0sload(*var0);
return res;
}
ImmT  dfile0sload(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
#line 335
c_rt_lib0move(&___nl__im__3, dfile0try_sload(___nl__im__0));
#line 335
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(78));
#line 335
if(___nl__bool__2){ goto label_5;}
#line 335
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__3));
#line 335
nl_die_arg(___nl__im__3);
#line 335
label_5:
;
#line 335
c_rt_lib0move(&___nl__im__1, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(78)));
#line 336
c_rt_lib0clear(&___nl__im__0);
#line 336
//clear ___nl__bool__2;
#line 336
c_rt_lib0clear(&___nl__im__3);
#line 336
return ___nl__im__1;
#line 336
c_rt_lib0clear(&___nl__im__0);
#line 336
c_rt_lib0clear(&___nl__im__1);
#line 336
//clear ___nl__bool__2;
#line 336
c_rt_lib0clear(&___nl__im__3);
#line 336
return NULL;
return NULL;

}

ImmT  dfile0sload_with_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0sload_with_type");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = dfile0sload_with_type(*var0, *var1);
return res;
}
ImmT  dfile0sload_with_type(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
#line 340
c_rt_lib0move(&___nl__im__4, dfile0try_sload_with_type(___nl__im__0, ___nl__im__1));
#line 340
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 340
if(___nl__bool__3){ goto label_5;}
#line 340
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__4));
#line 340
nl_die_arg(___nl__im__4);
#line 340
label_5:
;
#line 340
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(78)));
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
//clear ___nl__bool__3;
#line 341
c_rt_lib0clear(&___nl__im__4);
#line 341
return ___nl__im__2;
#line 341
c_rt_lib0clear(&___nl__im__0);
#line 341
c_rt_lib0clear(&___nl__im__1);
#line 341
c_rt_lib0clear(&___nl__im__2);
#line 341
//clear ___nl__bool__3;
#line 341
c_rt_lib0clear(&___nl__im__4);
#line 341
return NULL;
return NULL;

}

ImmT  dfile0sload_with_type_only_dynamic0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0sload_with_type_only_dynamic");
ptd0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = dfile0sload_with_type_only_dynamic(*var0, *var1);
return res;
}
ImmT  dfile0sload_with_type_only_dynamic(ptd0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
#line 345
c_rt_lib0move(&___nl__im__4, dfile0try_sload_with_type(___nl__im__0, ___nl__im__1));
#line 345
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(78));
#line 345
if(___nl__bool__3){ goto label_5;}
#line 345
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(176), ___nl__im__4));
#line 345
nl_die_arg(___nl__im__4);
#line 345
label_5:
;
#line 345
c_rt_lib0move(&___nl__im__2, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(78)));
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
c_rt_lib0clear(&___nl__im__1);
#line 346
//clear ___nl__bool__3;
#line 346
c_rt_lib0clear(&___nl__im__4);
#line 346
return ___nl__im__2;
#line 346
c_rt_lib0clear(&___nl__im__0);
#line 346
c_rt_lib0clear(&___nl__im__1);
#line 346
c_rt_lib0clear(&___nl__im__2);
#line 346
//clear ___nl__bool__3;
#line 346
c_rt_lib0clear(&___nl__im__4);
#line 346
return NULL;
return NULL;

}

ImmT  dfile0try_sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0try_sload");
ImmT  *var0 = &(_tab[0]);
ImmT  res = dfile0try_sload(*var0);
return res;
}
ImmT  dfile0try_sload(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 350
c_rt_lib0move(&___nl__im__2, ptd0ptd_im());
#line 350
c_rt_lib0move(&___nl__im__1, dfile0try_sload_with_type(___nl__im__2, ___nl__im__0));
#line 350
c_rt_lib0clear(&___nl__im__2);
#line 350
c_rt_lib0clear(&___nl__im__0);
#line 350
return ___nl__im__1;
return NULL;

}

ImmT  dfile0try_sload_with_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0try_sload_with_type");
ptd0meta_type0type *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  res = dfile0try_sload_with_type(*var0, *var1);
return res;
}
ImmT  dfile0try_sload_with_type(ptd0meta_type0type ___nl__im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
INT  ___nl__int__6 = 0;
ImmT  ___nl__im__7 = NULL;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__string__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
#line 354
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 354
c_rt_lib0move(&___nl__im__2, ptd0ensure(___nl__im__3, ___nl__im__1));
#line 354
c_rt_lib0clear(&___nl__im__3);
#line 355
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__2));
#line 355
___nl__int__6 = 0;
#line 355
c_rt_lib0move(&___nl__im__7, c_rt_lib0int_new(___nl__int__6));
#line 355
___nl__int__8 = string0length(___nl__im__2);
#line 355
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__8));
#line 355
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_string_const(280), ___nl__im__5, ___get_global_string_const(282), ___nl__im__7, ___get_global_string_const(283), ___nl__im__9));
#line 355
c_rt_lib0clear(&___nl__im__5);
#line 355
//clear ___nl__int__6;
#line 355
c_rt_lib0clear(&___nl__im__7);
#line 355
//clear ___nl__int__8;
#line 355
c_rt_lib0clear(&___nl__im__9);
#line 356
___nl__bool__10 = false;
#line 357
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__im__4));
#line 358
c_rt_lib0move(&___nl__im__11, dfile_priv0parse(&___nl__im__4, &___nl__bool__10, ___nl__im__0));
#line 359
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__im__4));
#line 360
___nl__bool__12 = ___nl__bool__10;
#line 360
___nl__bool__12 = !___nl__bool__12;
#line 360
___nl__bool__13 = !___nl__bool__12;
#line 360
if(___nl__bool__13){ goto label_31;}
#line 360
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(282)));
#line 360
___nl__int__14 = getIntFromImm(___nl__im__15);
#line 360
c_rt_lib0clear(&___nl__im__15);
#line 360
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(283)));
#line 360
___nl__int__16 = getIntFromImm(___nl__im__17);
#line 360
c_rt_lib0clear(&___nl__im__17);
#line 360
___nl__bool__12 = ___nl__int__14 != ___nl__int__16;
#line 360
//clear ___nl__int__14;
#line 360
//clear ___nl__int__16;
#line 360
label_31:
;
#line 360
//clear ___nl__bool__13;
#line 360
___nl__bool__12 = !___nl__bool__12;
#line 360
if(___nl__bool__12){ goto label_50;}
#line 361
___nl__bool__10 = true;
#line 362
c_rt_lib0move(&___nl__im__19,___get_global_string_const(285));
#line 362
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(282)));
#line 362
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 362
c_rt_lib0clear(&___nl__im__21);
#line 362
c_rt_lib0move(&___nl__string__22, c_rt_lib0int_to_string(___nl__int__20));
#line 362
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__string__22));
#line 362
c_rt_lib0clear(&___nl__im__19);
#line 362
//clear ___nl__int__20;
#line 362
c_rt_lib0clear(&___nl__string__22);
#line 362
c_rt_lib0move(&___nl__im__23,___get_global_string_const(322));
#line 362
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__18, ___nl__im__23));
#line 362
c_rt_lib0clear(&___nl__im__18);
#line 362
c_rt_lib0clear(&___nl__im__23);
#line 363
goto label_50;
#line 363
label_50:
;
#line 363
//clear ___nl__bool__12;
#line 364
___nl__bool__24 = ___nl__bool__10;
#line 364
___nl__bool__24 = !___nl__bool__24;
#line 364
if(___nl__bool__24){ goto label_68;}
#line 365
c_rt_lib0move(&___nl__im__25, ptd0string());
#line 365
c_rt_lib0move(&___nl__im__11, ptd0ensure(___nl__im__25, ___nl__im__11));
#line 365
c_rt_lib0clear(&___nl__im__25);
#line 366
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__11));
#line 366
c_rt_lib0clear(&___nl__im__0);
#line 366
c_rt_lib0clear(&___nl__im__1);
#line 366
c_rt_lib0clear(&___nl__im__2);
#line 366
c_rt_lib0clear(&___nl__im__4);
#line 366
//clear ___nl__bool__10;
#line 366
c_rt_lib0clear(&___nl__im__11);
#line 366
//clear ___nl__bool__24;
#line 366
return ___nl__im__26;
#line 367
goto label_80;
#line 367
label_68:
;
#line 368
c_rt_lib0move(&___nl__im__27, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__11));
#line 368
c_rt_lib0clear(&___nl__im__0);
#line 368
c_rt_lib0clear(&___nl__im__1);
#line 368
c_rt_lib0clear(&___nl__im__2);
#line 368
c_rt_lib0clear(&___nl__im__4);
#line 368
//clear ___nl__bool__10;
#line 368
c_rt_lib0clear(&___nl__im__11);
#line 368
//clear ___nl__bool__24;
#line 368
c_rt_lib0clear(&___nl__im__26);
#line 368
return ___nl__im__27;
#line 369
goto label_80;
#line 369
label_80:
;
#line 369
//clear ___nl__bool__24;
#line 369
c_rt_lib0clear(&___nl__im__26);
#line 369
c_rt_lib0clear(&___nl__im__27);
return NULL;

}

ImmT  dfile0state_out0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_out");
ImmT  res = dfile0state_out();
return res;
}
ImmT dfile0state_out(){
dfile_priv0__const__init();
return dfile_priv0__const__sing(1);
}
ImmT dfile0state_out0cal() {
dfile_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 373
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 373
c_rt_lib0move(&___nl__im__4, ptd0bool());
#line 373
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 373
c_rt_lib0clear(&___nl__im__4);
#line 373
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(280), ___nl__im__2, ___get_global_string_const(281), ___nl__im__3));
#line 373
c_rt_lib0clear(&___nl__im__2);
#line 373
c_rt_lib0clear(&___nl__im__3);
#line 373
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 373
c_rt_lib0clear(&___nl__im__1);
#line 373
return ___nl__im__0;
#line 373
c_rt_lib0clear(&___nl__im__0);
#line 373
return NULL;
return NULL;

}

ImmT  dfile_priv0sp(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__string__3 = NULL;
#line 377
c_rt_lib0move(&___nl__im__2,___get_global_string_const(280));
#line 377
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__2));
#line 377
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__1));
#line 377
c_rt_lib0move(&___nl__string__3,___get_global_string_const(280));
#line 377
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__3, ___nl__im__2));
#line 377
c_rt_lib0clear(&___nl__im__2);
#line 377
c_rt_lib0clear(&___nl__string__3);
#line 377
c_rt_lib0clear(&___nl__im__1);
#line 377
return NULL;

}

ImmT  dfile_priv0sprintstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 381
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 381
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 381
c_rt_lib0clear(&___nl__im__2);
#line 382
c_rt_lib0move(&___nl__im__3,___get_global_string_const(109));
#line 382
c_rt_lib0move(&___nl__im__4,___get_global_string_const(323));
#line 382
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 382
c_rt_lib0clear(&___nl__im__3);
#line 382
c_rt_lib0clear(&___nl__im__4);
#line 383
c_rt_lib0move(&___nl__im__5,___get_global_string_const(279));
#line 383
c_rt_lib0move(&___nl__im__6,___get_global_string_const(324));
#line 383
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 383
c_rt_lib0clear(&___nl__im__5);
#line 383
c_rt_lib0clear(&___nl__im__6);
#line 384
c_rt_lib0move(&___nl__im__9,___get_global_string_const(279));
#line 384
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__1));
#line 384
c_rt_lib0clear(&___nl__im__9);
#line 384
c_rt_lib0move(&___nl__im__10,___get_global_string_const(279));
#line 384
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 384
c_rt_lib0clear(&___nl__im__8);
#line 384
c_rt_lib0clear(&___nl__im__10);
#line 384
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__7));
#line 384
c_rt_lib0clear(&___nl__im__7);
#line 384
c_rt_lib0clear(&___nl__im__1);
#line 384
return NULL;

}

bool  dfile_priv0is_simple_string(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
dfile_priv0__const__init();
INT  ___nl__int__1 = 0;
bool  ___nl__bool__2 = false;
INT  ___nl__int__3 = 0;
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
INT  ___nl__int__8 = 0;
ImmT  ___nl__im__9 = NULL;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
INT  ___nl__int__18 = 0;
bool  ___nl__bool__19 = false;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
#line 388
___nl__int__1 = string0length(___nl__im__0);
#line 389
___nl__int__3 = 0;
#line 389
___nl__bool__2 = ___nl__int__1 == ___nl__int__3;
#line 389
//clear ___nl__int__3;
#line 389
___nl__bool__2 = !___nl__bool__2;
#line 389
if(___nl__bool__2){ goto label_12;}
#line 389
___nl__bool__4 = false;
#line 389
c_rt_lib0clear(&___nl__im__0);
#line 389
//clear ___nl__int__1;
#line 389
//clear ___nl__bool__2;
#line 389
return ___nl__bool__4;
#line 389
goto label_12;
#line 389
label_12:
;
#line 389
//clear ___nl__bool__2;
#line 389
//clear ___nl__bool__4;
#line 390
___nl__int__7 = 0;
#line 390
___nl__int__8 = 1;
#line 390
c_rt_lib0move(&___nl__im__6, string0substr(___nl__im__0, ___nl__int__7, ___nl__int__8));
#line 390
//clear ___nl__int__7;
#line 390
//clear ___nl__int__8;
#line 390
___nl__bool__5 = string0is_letter(___nl__im__6);
#line 390
c_rt_lib0clear(&___nl__im__6);
#line 390
if(___nl__bool__5){ goto label_32;}
#line 390
___nl__int__10 = 0;
#line 390
___nl__int__11 = 1;
#line 390
c_rt_lib0move(&___nl__im__9, string0substr(___nl__im__0, ___nl__int__10, ___nl__int__11));
#line 390
//clear ___nl__int__10;
#line 390
//clear ___nl__int__11;
#line 390
c_rt_lib0move(&___nl__im__12,___get_global_string_const(107));
#line 390
___nl__bool__5 = c_rt_lib0eq(___nl__im__9, ___nl__im__12);
#line 390
c_rt_lib0clear(&___nl__im__9);
#line 390
c_rt_lib0clear(&___nl__im__12);
#line 390
label_32:
;
#line 390
___nl__bool__5 = !___nl__bool__5;
#line 390
___nl__bool__5 = !___nl__bool__5;
#line 390
if(___nl__bool__5){ goto label_42;}
#line 390
___nl__bool__13 = false;
#line 390
c_rt_lib0clear(&___nl__im__0);
#line 390
//clear ___nl__int__1;
#line 390
//clear ___nl__bool__5;
#line 390
return ___nl__bool__13;
#line 390
goto label_42;
#line 390
label_42:
;
#line 390
//clear ___nl__bool__5;
#line 390
//clear ___nl__bool__13;
#line 391
___nl__int__14 = 0;
#line 391
___nl__int__15 = 1;
#line 391
label_47:
;
#line 391
___nl__bool__16 = ___nl__int__14 >= ___nl__int__1;
#line 391
if(___nl__bool__16){ goto label_81;}
#line 392
___nl__int__18 = 1;
#line 392
c_rt_lib0move(&___nl__im__17, string0substr(___nl__im__0, ___nl__int__14, ___nl__int__18));
#line 392
//clear ___nl__int__18;
#line 393
___nl__bool__19 = string0is_letter(___nl__im__17);
#line 393
if(___nl__bool__19){ goto label_56;}
#line 393
___nl__bool__19 = string0is_digit(___nl__im__17);
#line 393
label_56:
;
#line 393
if(___nl__bool__19){ goto label_61;}
#line 393
c_rt_lib0move(&___nl__im__20,___get_global_string_const(107));
#line 393
___nl__bool__19 = c_rt_lib0eq(___nl__im__17, ___nl__im__20);
#line 393
c_rt_lib0clear(&___nl__im__20);
#line 393
label_61:
;
#line 393
___nl__bool__19 = !___nl__bool__19;
#line 393
___nl__bool__19 = !___nl__bool__19;
#line 393
if(___nl__bool__19){ goto label_75;}
#line 393
___nl__bool__21 = false;
#line 393
c_rt_lib0clear(&___nl__im__0);
#line 393
//clear ___nl__int__1;
#line 393
//clear ___nl__int__14;
#line 393
//clear ___nl__int__15;
#line 393
//clear ___nl__bool__16;
#line 393
c_rt_lib0clear(&___nl__im__17);
#line 393
//clear ___nl__bool__19;
#line 393
return ___nl__bool__21;
#line 393
goto label_75;
#line 393
label_75:
;
#line 393
//clear ___nl__bool__19;
#line 393
//clear ___nl__bool__21;
#line 393
c_rt_lib0clear(&___nl__im__17);
#line 394
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 394
goto label_47;
#line 394
label_81:
;
#line 395
___nl__bool__22 = true;
#line 395
c_rt_lib0clear(&___nl__im__0);
#line 395
//clear ___nl__int__1;
#line 395
//clear ___nl__int__14;
#line 395
//clear ___nl__int__15;
#line 395
//clear ___nl__bool__16;
#line 395
c_rt_lib0clear(&___nl__im__17);
#line 395
return ___nl__bool__22;
return false;

}

ImmT  dfile_priv0sprint_hash_key(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
#line 399
___nl__bool__2 = dfile_priv0is_simple_string(___nl__im__1);
#line 399
___nl__bool__2 = !___nl__bool__2;
#line 399
if(___nl__bool__2){ goto label_5;}
#line 400
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__1));
#line 401
goto label_8;
#line 401
label_5:
;
#line 402
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 403
goto label_8;
#line 403
label_8:
;
#line 403
//clear ___nl__bool__2;
#line 403
c_rt_lib0clear(&___nl__im__1);
#line 403
return NULL;

}

ImmT  dfile_priv0get_ind(INT  ___nl__int__0) {
dfile_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 407
c_rt_lib0move(&___nl__im__2, string0tab());
#line 407
c_rt_lib0move(&___nl__im__3, c_rt_lib0int_new(___nl__int__0));
#line 407
c_rt_lib0move(&___nl__im__1, string0char_times(___nl__im__2, ___nl__im__3));
#line 407
c_rt_lib0clear(&___nl__im__2);
#line 407
c_rt_lib0clear(&___nl__im__3);
#line 407
//clear ___nl__int__0;
#line 407
return ___nl__im__1;
return NULL;

}

ImmT  dfile_priv0sprint_hash(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
#line 412
c_rt_lib0move(&___nl__im__5,___get_global_string_const(304));
#line 412
c_rt_lib0move(&___nl__im__6, string0lf());
#line 412
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 412
c_rt_lib0clear(&___nl__im__5);
#line 412
c_rt_lib0clear(&___nl__im__6);
#line 412
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__4));
#line 412
c_rt_lib0clear(&___nl__im__4);
#line 413
c_rt_lib0move(&___nl__im__7, hash0keys(___nl__im__1));
#line 414
c_rt_lib0delete(array0sort(&___nl__im__7));
#line 415
___nl__int__9 = 0;
#line 415
___nl__int__10 = 1;
#line 415
___nl__int__11 = c_rt_lib0array_len(___nl__im__7);
#line 415
label_12:
;
#line 415
___nl__bool__12 = ___nl__int__9 >= ___nl__int__11;
#line 415
if(___nl__bool__12){ goto label_44;}
#line 415
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__7, ___nl__int__9));
#line 415
c_rt_lib0copy(&___nl__im__8, ___nl__im__13);
#line 416
c_rt_lib0move(&___nl__im__14, hash0get_value(___nl__im__1, ___nl__im__8));
#line 417
___nl__int__17 = 1;
#line 417
___nl__int__16 = ___nl__int__2 + ___nl__int__17;
#line 417
//clear ___nl__int__17;
#line 417
c_rt_lib0move(&___nl__im__15, dfile_priv0get_ind(___nl__int__16));
#line 417
//clear ___nl__int__16;
#line 417
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__15));
#line 417
c_rt_lib0clear(&___nl__im__15);
#line 418
c_rt_lib0delete(dfile_priv0sprint_hash_key(___ref___im__0, ___nl__im__8));
#line 419
c_rt_lib0move(&___nl__im__18,___get_global_string_const(325));
#line 419
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__18));
#line 419
c_rt_lib0clear(&___nl__im__18);
#line 420
___nl__int__20 = 1;
#line 420
___nl__int__19 = ___nl__int__2 + ___nl__int__20;
#line 420
//clear ___nl__int__20;
#line 420
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__14, ___nl__int__19, ___nl__bool__3));
#line 420
//clear ___nl__int__19;
#line 421
c_rt_lib0move(&___nl__im__22,___get_global_string_const(312));
#line 421
c_rt_lib0move(&___nl__im__23, string0lf());
#line 421
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 421
c_rt_lib0clear(&___nl__im__22);
#line 421
c_rt_lib0clear(&___nl__im__23);
#line 421
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__21));
#line 421
c_rt_lib0clear(&___nl__im__21);
#line 421
c_rt_lib0clear(&___nl__im__8);
#line 422
___nl__int__9 = ___nl__int__9 + ___nl__int__10;
#line 422
goto label_12;
#line 422
label_44:
;
#line 423
c_rt_lib0move(&___nl__im__25, dfile_priv0get_ind(___nl__int__2));
#line 423
c_rt_lib0move(&___nl__im__26,___get_global_string_const(305));
#line 423
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 423
c_rt_lib0clear(&___nl__im__25);
#line 423
c_rt_lib0clear(&___nl__im__26);
#line 423
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__24));
#line 423
c_rt_lib0clear(&___nl__im__24);
#line 423
c_rt_lib0clear(&___nl__im__1);
#line 423
//clear ___nl__int__2;
#line 423
//clear ___nl__bool__3;
#line 423
c_rt_lib0clear(&___nl__im__7);
#line 423
c_rt_lib0clear(&___nl__im__8);
#line 423
//clear ___nl__int__9;
#line 423
//clear ___nl__int__10;
#line 423
//clear ___nl__int__11;
#line 423
//clear ___nl__bool__12;
#line 423
c_rt_lib0clear(&___nl__im__13);
#line 423
c_rt_lib0clear(&___nl__im__14);
#line 423
return NULL;

}

bool  dfile_priv0handle_debug(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
bool  ___nl__bool__3 = false;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__string__9 = NULL;
bool  ___nl__bool__10 = false;
#line 427
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 427
if(___nl__bool__2){ goto label_3;}
#line 427
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 427
label_3:
;
#line 427
___nl__bool__3 = !___nl__bool__2;
#line 427
if(___nl__bool__3){ goto label_9;}
#line 427
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(281)));
#line 427
___nl__bool__2 = hash0has_key(___nl__im__4, ___nl__im__1);
#line 427
c_rt_lib0clear(&___nl__im__4);
#line 427
label_9:
;
#line 427
//clear ___nl__bool__3;
#line 427
___nl__bool__2 = !___nl__bool__2;
#line 427
if(___nl__bool__2){ goto label_19;}
#line 428
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__1));
#line 429
___nl__bool__5 = true;
#line 429
c_rt_lib0clear(&___nl__im__1);
#line 429
//clear ___nl__bool__2;
#line 429
return ___nl__bool__5;
#line 430
goto label_37;
#line 430
label_19:
;
#line 431
c_rt_lib0move(&___nl__im__6,___get_global_string_const(281));
#line 431
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 431
___nl__bool__7 = true;
#line 431
c_rt_lib0move(&___nl__im__8, c_rt_lib0bool_to_nl_native(___nl__bool__7));
#line 431
c_rt_lib0delete(hash0set_value(&___nl__im__6, ___nl__im__1, ___nl__im__8));
#line 431
c_rt_lib0move(&___nl__string__9,___get_global_string_const(281));
#line 431
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__9, ___nl__im__6));
#line 431
c_rt_lib0clear(&___nl__im__6);
#line 431
//clear ___nl__bool__7;
#line 431
c_rt_lib0clear(&___nl__im__8);
#line 431
c_rt_lib0clear(&___nl__string__9);
#line 432
___nl__bool__10 = false;
#line 432
c_rt_lib0clear(&___nl__im__1);
#line 432
//clear ___nl__bool__2;
#line 432
//clear ___nl__bool__5;
#line 432
return ___nl__bool__10;
#line 433
goto label_37;
#line 433
label_37:
;
#line 433
//clear ___nl__bool__2;
#line 433
//clear ___nl__bool__5;
#line 433
//clear ___nl__bool__10;
return false;

}

ImmT  dfile_priv0sprint(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1,INT  ___nl__int__2,bool  ___nl__bool__3) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__4 = false;
bool  ___nl__bool__5 = false;
bool  ___nl__bool__6 = false;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
INT  ___nl__int__11 = 0;
INT  ___nl__int__12 = 0;
INT  ___nl__int__13 = 0;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
INT  ___nl__int__18 = 0;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
#line 438
___nl__bool__4 = ___nl__bool__3;
#line 438
___nl__bool__5 = !___nl__bool__4;
#line 438
if(___nl__bool__5){ goto label_4;}
#line 438
___nl__bool__4 = dfile_priv0handle_debug(___ref___im__0, ___nl__im__1);
#line 438
label_4:
;
#line 438
//clear ___nl__bool__5;
#line 438
___nl__bool__4 = !___nl__bool__4;
#line 438
if(___nl__bool__4){ goto label_14;}
#line 438
c_rt_lib0clear(&___nl__im__1);
#line 438
//clear ___nl__int__2;
#line 438
//clear ___nl__bool__3;
#line 438
//clear ___nl__bool__4;
#line 438
return NULL;
#line 438
goto label_14;
#line 438
label_14:
;
#line 438
//clear ___nl__bool__4;
#line 439
___nl__bool__6 = nl0is_int(___nl__im__1);
#line 439
if(___nl__bool__6){ goto label_19;}
#line 439
___nl__bool__6 = nl0is_string(___nl__im__1);
#line 439
label_19:
;
#line 439
___nl__bool__6 = !___nl__bool__6;
#line 439
if(___nl__bool__6){ goto label_24;}
#line 440
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__1));
#line 441
goto label_112;
#line 441
label_24:
;
#line 441
___nl__bool__6 = nl0is_array(___nl__im__1);
#line 441
___nl__bool__6 = !___nl__bool__6;
#line 441
if(___nl__bool__6){ goto label_74;}
#line 442
c_rt_lib0move(&___nl__im__8,___get_global_string_const(314));
#line 442
c_rt_lib0move(&___nl__im__9, string0lf());
#line 442
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 442
c_rt_lib0clear(&___nl__im__8);
#line 442
c_rt_lib0clear(&___nl__im__9);
#line 442
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__7));
#line 442
c_rt_lib0clear(&___nl__im__7);
#line 443
___nl__int__11 = 0;
#line 443
___nl__int__12 = 1;
#line 443
___nl__int__13 = c_rt_lib0array_len(___nl__im__1);
#line 443
label_38:
;
#line 443
___nl__bool__14 = ___nl__int__11 >= ___nl__int__13;
#line 443
if(___nl__bool__14){ goto label_65;}
#line 443
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__1, ___nl__int__11));
#line 443
c_rt_lib0copy(&___nl__im__10, ___nl__im__15);
#line 444
___nl__int__18 = 1;
#line 444
___nl__int__17 = ___nl__int__2 + ___nl__int__18;
#line 444
//clear ___nl__int__18;
#line 444
c_rt_lib0move(&___nl__im__16, dfile_priv0get_ind(___nl__int__17));
#line 444
//clear ___nl__int__17;
#line 444
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__16));
#line 444
c_rt_lib0clear(&___nl__im__16);
#line 445
___nl__int__20 = 1;
#line 445
___nl__int__19 = ___nl__int__2 + ___nl__int__20;
#line 445
//clear ___nl__int__20;
#line 445
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__10, ___nl__int__19, ___nl__bool__3));
#line 445
//clear ___nl__int__19;
#line 446
c_rt_lib0move(&___nl__im__22,___get_global_string_const(312));
#line 446
c_rt_lib0move(&___nl__im__23, string0lf());
#line 446
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 446
c_rt_lib0clear(&___nl__im__22);
#line 446
c_rt_lib0clear(&___nl__im__23);
#line 446
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__21));
#line 446
c_rt_lib0clear(&___nl__im__21);
#line 446
c_rt_lib0clear(&___nl__im__10);
#line 447
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 447
goto label_38;
#line 447
label_65:
;
#line 448
c_rt_lib0move(&___nl__im__25, dfile_priv0get_ind(___nl__int__2));
#line 448
c_rt_lib0move(&___nl__im__26,___get_global_string_const(315));
#line 448
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__26));
#line 448
c_rt_lib0clear(&___nl__im__25);
#line 448
c_rt_lib0clear(&___nl__im__26);
#line 448
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__24));
#line 448
c_rt_lib0clear(&___nl__im__24);
#line 449
goto label_112;
#line 449
label_74:
;
#line 449
___nl__bool__6 = nl0is_hash(___nl__im__1);
#line 449
___nl__bool__6 = !___nl__bool__6;
#line 449
if(___nl__bool__6){ goto label_80;}
#line 450
c_rt_lib0delete(dfile_priv0sprint_hash(___ref___im__0, ___nl__im__1, ___nl__int__2, ___nl__bool__3));
#line 451
goto label_112;
#line 451
label_80:
;
#line 451
___nl__bool__6 = nl0is_variant(___nl__im__1);
#line 451
___nl__bool__6 = !___nl__bool__6;
#line 451
if(___nl__bool__6){ goto label_108;}
#line 452
c_rt_lib0move(&___nl__im__27,___get_global_string_const(284));
#line 452
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__27));
#line 452
c_rt_lib0clear(&___nl__im__27);
#line 453
c_rt_lib0move(&___nl__im__28, ov0get_element(___nl__im__1));
#line 453
c_rt_lib0delete(dfile_priv0sprintstr(___ref___im__0, ___nl__im__28));
#line 453
c_rt_lib0clear(&___nl__im__28);
#line 454
c_rt_lib0move(&___nl__im__30, ov0has_value(___nl__im__1));
#line 454
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__30);
#line 454
c_rt_lib0clear(&___nl__im__30);
#line 454
___nl__bool__29 = !___nl__bool__29;
#line 454
if(___nl__bool__29){ goto label_102;}
#line 455
c_rt_lib0move(&___nl__im__31,___get_global_string_const(326));
#line 455
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__31));
#line 455
c_rt_lib0clear(&___nl__im__31);
#line 456
c_rt_lib0move(&___nl__im__32, ov0get_value(___nl__im__1));
#line 456
c_rt_lib0delete(dfile_priv0sprint(___ref___im__0, ___nl__im__32, ___nl__int__2, ___nl__bool__3));
#line 456
c_rt_lib0clear(&___nl__im__32);
#line 457
goto label_102;
#line 457
label_102:
;
#line 457
//clear ___nl__bool__29;
#line 458
c_rt_lib0move(&___nl__im__33,___get_global_string_const(320));
#line 458
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__33));
#line 458
c_rt_lib0clear(&___nl__im__33);
#line 459
goto label_112;
#line 459
label_108:
;
#line 460
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 460
nl_die_arg(___nl__im__34);
#line 461
goto label_112;
#line 461
label_112:
;
#line 461
//clear ___nl__bool__6;
#line 461
c_rt_lib0clear(&___nl__im__10);
#line 461
//clear ___nl__int__11;
#line 461
//clear ___nl__int__12;
#line 461
//clear ___nl__int__13;
#line 461
//clear ___nl__bool__14;
#line 461
c_rt_lib0clear(&___nl__im__15);
#line 461
c_rt_lib0clear(&___nl__im__34);
#line 461
c_rt_lib0clear(&___nl__im__1);
#line 461
//clear ___nl__int__2;
#line 461
//clear ___nl__bool__3;
#line 461
return NULL;

}

ImmT  dfile_priv0print_net_formatstr(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
#line 465
c_rt_lib0move(&___nl__im__2,___get_global_string_const(36));
#line 465
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__2));
#line 465
c_rt_lib0clear(&___nl__im__2);
#line 466
c_rt_lib0move(&___nl__im__3,___get_global_string_const(109));
#line 466
c_rt_lib0move(&___nl__im__4,___get_global_string_const(323));
#line 466
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__3, ___nl__im__4));
#line 466
c_rt_lib0clear(&___nl__im__3);
#line 466
c_rt_lib0clear(&___nl__im__4);
#line 467
c_rt_lib0move(&___nl__im__5, string0lf());
#line 467
c_rt_lib0move(&___nl__im__6,___get_global_string_const(327));
#line 467
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__5, ___nl__im__6));
#line 467
c_rt_lib0clear(&___nl__im__5);
#line 467
c_rt_lib0clear(&___nl__im__6);
#line 468
c_rt_lib0move(&___nl__im__7, string0r());
#line 468
c_rt_lib0move(&___nl__im__8,___get_global_string_const(328));
#line 468
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__7, ___nl__im__8));
#line 468
c_rt_lib0clear(&___nl__im__7);
#line 468
c_rt_lib0clear(&___nl__im__8);
#line 469
c_rt_lib0move(&___nl__im__9,___get_global_string_const(279));
#line 469
c_rt_lib0move(&___nl__im__10,___get_global_string_const(324));
#line 469
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__1, ___nl__im__9, ___nl__im__10));
#line 469
c_rt_lib0clear(&___nl__im__9);
#line 469
c_rt_lib0clear(&___nl__im__10);
#line 470
c_rt_lib0move(&___nl__im__1, string_utils0escape2hex31(___nl__im__1));
#line 471
c_rt_lib0move(&___nl__im__13,___get_global_string_const(279));
#line 471
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__1));
#line 471
c_rt_lib0clear(&___nl__im__13);
#line 471
c_rt_lib0move(&___nl__im__14,___get_global_string_const(279));
#line 471
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__14));
#line 471
c_rt_lib0clear(&___nl__im__12);
#line 471
c_rt_lib0clear(&___nl__im__14);
#line 471
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__11));
#line 471
c_rt_lib0clear(&___nl__im__11);
#line 471
c_rt_lib0clear(&___nl__im__1);
#line 471
return NULL;

}

ImmT  dfile_priv0print_net_format(dfile0state_out0type* ___ref___im__0,ImmT  ___nl__im__1) {
c_rt_lib0arg_val(___nl__im__1);
dfile_priv0__const__init();
bool  ___nl__bool__2 = false;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
INT  ___nl__int__5 = 0;
INT  ___nl__int__6 = 0;
INT  ___nl__int__7 = 0;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
bool  ___nl__bool__18 = false;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
#line 475
___nl__bool__2 = nl0is_int(___nl__im__1);
#line 475
if(___nl__bool__2){ goto label_3;}
#line 475
___nl__bool__2 = nl0is_string(___nl__im__1);
#line 475
label_3:
;
#line 475
___nl__bool__2 = !___nl__bool__2;
#line 475
if(___nl__bool__2){ goto label_8;}
#line 476
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__1));
#line 477
goto label_113;
#line 477
label_8:
;
#line 477
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 477
___nl__bool__2 = !___nl__bool__2;
#line 477
if(___nl__bool__2){ goto label_35;}
#line 478
c_rt_lib0move(&___nl__im__3,___get_global_string_const(314));
#line 478
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__3));
#line 478
c_rt_lib0clear(&___nl__im__3);
#line 479
___nl__int__5 = 0;
#line 479
___nl__int__6 = 1;
#line 479
___nl__int__7 = c_rt_lib0array_len(___nl__im__1);
#line 479
label_18:
;
#line 479
___nl__bool__8 = ___nl__int__5 >= ___nl__int__7;
#line 479
if(___nl__bool__8){ goto label_30;}
#line 479
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__1, ___nl__int__5));
#line 479
c_rt_lib0copy(&___nl__im__4, ___nl__im__9);
#line 480
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__4));
#line 481
c_rt_lib0move(&___nl__im__10,___get_global_string_const(312));
#line 481
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__10));
#line 481
c_rt_lib0clear(&___nl__im__10);
#line 481
c_rt_lib0clear(&___nl__im__4);
#line 482
___nl__int__5 = ___nl__int__5 + ___nl__int__6;
#line 482
goto label_18;
#line 482
label_30:
;
#line 483
c_rt_lib0move(&___nl__im__11,___get_global_string_const(315));
#line 483
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__11));
#line 483
c_rt_lib0clear(&___nl__im__11);
#line 484
goto label_113;
#line 484
label_35:
;
#line 484
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 484
___nl__bool__2 = !___nl__bool__2;
#line 484
if(___nl__bool__2){ goto label_81;}
#line 485
c_rt_lib0move(&___nl__im__12,___get_global_string_const(304));
#line 485
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__12));
#line 485
c_rt_lib0clear(&___nl__im__12);
#line 486
c_rt_lib0move(&___nl__im__13, hash0keys(___nl__im__1));
#line 486
___nl__int__15 = 0;
#line 486
___nl__int__16 = 1;
#line 486
___nl__int__17 = c_rt_lib0array_len(___nl__im__13);
#line 486
label_46:
;
#line 486
___nl__bool__18 = ___nl__int__15 >= ___nl__int__17;
#line 486
if(___nl__bool__18){ goto label_76;}
#line 486
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__13, ___nl__int__15));
#line 486
c_rt_lib0copy(&___nl__im__14, ___nl__im__19);
#line 487
c_rt_lib0move(&___nl__im__20, hash0get_value(___nl__im__1, ___nl__im__14));
#line 488
c_rt_lib0move(&___nl__im__23,___get_global_string_const(36));
#line 488
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__14, ___nl__im__23));
#line 488
c_rt_lib0clear(&___nl__im__23);
#line 488
___nl__bool__21 = dfile_priv0is_simple_string(___nl__im__22);
#line 488
c_rt_lib0clear(&___nl__im__22);
#line 488
___nl__bool__21 = !___nl__bool__21;
#line 488
if(___nl__bool__21){ goto label_61;}
#line 489
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__14));
#line 490
goto label_64;
#line 490
label_61:
;
#line 491
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__14));
#line 492
goto label_64;
#line 492
label_64:
;
#line 492
//clear ___nl__bool__21;
#line 493
c_rt_lib0move(&___nl__im__24,___get_global_string_const(306));
#line 493
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__24));
#line 493
c_rt_lib0clear(&___nl__im__24);
#line 494
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__20));
#line 495
c_rt_lib0move(&___nl__im__25,___get_global_string_const(312));
#line 495
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__25));
#line 495
c_rt_lib0clear(&___nl__im__25);
#line 495
c_rt_lib0clear(&___nl__im__14);
#line 496
___nl__int__15 = ___nl__int__15 + ___nl__int__16;
#line 496
goto label_46;
#line 496
label_76:
;
#line 497
c_rt_lib0move(&___nl__im__26,___get_global_string_const(305));
#line 497
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__26));
#line 497
c_rt_lib0clear(&___nl__im__26);
#line 498
goto label_113;
#line 498
label_81:
;
#line 498
___nl__bool__2 = nl0is_variant(___nl__im__1);
#line 498
___nl__bool__2 = !___nl__bool__2;
#line 498
if(___nl__bool__2){ goto label_109;}
#line 499
c_rt_lib0move(&___nl__im__27,___get_global_string_const(284));
#line 499
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__27));
#line 499
c_rt_lib0clear(&___nl__im__27);
#line 500
c_rt_lib0move(&___nl__im__28, ov0get_element(___nl__im__1));
#line 500
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___im__0, ___nl__im__28));
#line 500
c_rt_lib0clear(&___nl__im__28);
#line 501
c_rt_lib0move(&___nl__im__30, ov0has_value(___nl__im__1));
#line 501
___nl__bool__29 = c_rt_lib0check_true_native(___nl__im__30);
#line 501
c_rt_lib0clear(&___nl__im__30);
#line 501
___nl__bool__29 = !___nl__bool__29;
#line 501
if(___nl__bool__29){ goto label_103;}
#line 502
c_rt_lib0move(&___nl__im__31,___get_global_string_const(312));
#line 502
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__31));
#line 502
c_rt_lib0clear(&___nl__im__31);
#line 503
c_rt_lib0move(&___nl__im__32, ov0get_value(___nl__im__1));
#line 503
c_rt_lib0delete(dfile_priv0print_net_format(___ref___im__0, ___nl__im__32));
#line 503
c_rt_lib0clear(&___nl__im__32);
#line 504
goto label_103;
#line 504
label_103:
;
#line 504
//clear ___nl__bool__29;
#line 505
c_rt_lib0move(&___nl__im__33,___get_global_string_const(320));
#line 505
c_rt_lib0delete(dfile_priv0sp(___ref___im__0, ___nl__im__33));
#line 505
c_rt_lib0clear(&___nl__im__33);
#line 506
goto label_113;
#line 506
label_109:
;
#line 507
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(1, ___nl__im__1));
#line 507
nl_die_arg(___nl__im__34);
#line 508
goto label_113;
#line 508
label_113:
;
#line 508
//clear ___nl__bool__2;
#line 508
c_rt_lib0clear(&___nl__im__4);
#line 508
//clear ___nl__int__5;
#line 508
//clear ___nl__int__6;
#line 508
//clear ___nl__int__7;
#line 508
//clear ___nl__bool__8;
#line 508
c_rt_lib0clear(&___nl__im__9);
#line 508
c_rt_lib0clear(&___nl__im__13);
#line 508
c_rt_lib0clear(&___nl__im__14);
#line 508
//clear ___nl__int__15;
#line 508
//clear ___nl__int__16;
#line 508
//clear ___nl__int__17;
#line 508
//clear ___nl__bool__18;
#line 508
c_rt_lib0clear(&___nl__im__19);
#line 508
c_rt_lib0clear(&___nl__im__20);
#line 508
c_rt_lib0clear(&___nl__im__34);
#line 508
c_rt_lib0clear(&___nl__im__1);
#line 508
return NULL;

}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void dfile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}}
ImmT dfile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT dfile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = dfile0state_t0cal();
	break;
case 1:
	___const__[1] = dfile0state_out0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
