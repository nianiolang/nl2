
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "optional_libraries.h"
#include "ptd.h"
#include "nl.h"
#include "array.h"
#include "string_utils.h"
#include "c_olympic_io.h"
#include "c_fe_lib.h"
#line 1 "optional_libraries.nl"

static ImmT *__const__f = NULL;
void optional_libraries_priv0__const__init();
ImmT optional_libraries_priv0__const__sim(int __nr);
ImmT optional_libraries_priv0__const__sing(int __nr);



ImmT  optional_libraries0c_olympic_io0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "optional_libraries0c_olympic_io");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  res = optional_libraries0c_olympic_io(*var0, var1, var2);
return res;
}
ImmT  optional_libraries0c_olympic_io(ImmT  ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
optional_libraries_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
INT  ___nl__int__29 = 0;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
bool  ___nl__bool__34 = false;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
#line 14
c_rt_lib0move(&___nl__im__4,___get_global_string_const(921));
#line 14
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__4));
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0move(&___nl__im__6,___get_global_string_const(903));
#line 16
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
___nl__bool__5 = !___nl__bool__5;
#line 16
if(___nl__bool__5){ goto label_47;}
#line 17
___nl__int__9 = c_rt_lib0array_len((*___ref___im__2));
#line 17
___nl__int__10 = 1;
#line 17
___nl__int__11 = ___nl__int__9 == ___nl__int__10;
#line 17
___nl__bool__7 = ___nl__int__11;
#line 17
//clear ___nl__int__9;
#line 17
//clear ___nl__int__10;
#line 17
//clear ___nl__int__11;
#line 17
___nl__bool__8 = !___nl__bool__7;
#line 17
if(___nl__bool__8){ goto label_22;}
#line 17
___nl__int__13 = 0;
#line 17
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get((*___ref___im__2), ___nl__int__13));
#line 17
//clear ___nl__int__13;
#line 17
___nl__bool__7 = nl0is_printable(___nl__im__12);
#line 17
c_rt_lib0clear(&___nl__im__12);
#line 17
label_22:
;
#line 17
//clear ___nl__bool__8;
#line 17
___nl__bool__7 = !___nl__bool__7;
#line 17
___nl__bool__7 = !___nl__bool__7;
#line 17
if(___nl__bool__7){ goto label_32;}
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
//clear ___nl__bool__5;
#line 17
//clear ___nl__bool__7;
#line 17
return ___nl__im__3;
#line 17
goto label_32;
#line 17
label_32:
;
#line 17
//clear ___nl__bool__7;
#line 18
___nl__int__15 = 0;
#line 18
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get((*___ref___im__2), ___nl__int__15));
#line 18
//clear ___nl__int__15;
#line 18
c_rt_lib0delete(c_olympic_io0print(___nl__im__14));
#line 18
c_rt_lib0clear(&___nl__im__14);
#line 19
c_rt_lib0move(&___nl__im__17,___get_global_string_const(36));
#line 19
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__17));
#line 19
c_rt_lib0clear(&___nl__im__17);
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
//clear ___nl__bool__5;
#line 19
return ___nl__im__16;
#line 20
goto label_157;
#line 20
label_47:
;
#line 20
c_rt_lib0move(&___nl__im__18,___get_global_string_const(904));
#line 20
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__18);
#line 20
c_rt_lib0clear(&___nl__im__18);
#line 20
___nl__bool__5 = !___nl__bool__5;
#line 20
if(___nl__bool__5){ goto label_81;}
#line 21
___nl__int__20 = c_rt_lib0array_len((*___ref___im__2));
#line 21
___nl__int__21 = 0;
#line 21
___nl__int__22 = ___nl__int__20 == ___nl__int__21;
#line 21
___nl__bool__19 = ___nl__int__22;
#line 21
//clear ___nl__int__20;
#line 21
//clear ___nl__int__21;
#line 21
//clear ___nl__int__22;
#line 21
___nl__bool__19 = !___nl__bool__19;
#line 21
___nl__bool__19 = !___nl__bool__19;
#line 21
if(___nl__bool__19){ goto label_69;}
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
//clear ___nl__bool__5;
#line 21
c_rt_lib0clear(&___nl__im__16);
#line 21
//clear ___nl__bool__19;
#line 21
return ___nl__im__3;
#line 21
goto label_69;
#line 21
label_69:
;
#line 21
//clear ___nl__bool__19;
#line 22
c_rt_lib0move(___ref___im__1, c_olympic_io0readln());
#line 23
c_rt_lib0move(&___nl__im__24,___get_global_string_const(36));
#line 23
c_rt_lib0move(&___nl__im__23, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__24));
#line 23
c_rt_lib0clear(&___nl__im__24);
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
//clear ___nl__bool__5;
#line 23
c_rt_lib0clear(&___nl__im__16);
#line 23
return ___nl__im__23;
#line 24
goto label_157;
#line 24
label_81:
;
#line 24
c_rt_lib0move(&___nl__im__25,___get_global_string_const(905));
#line 24
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__25);
#line 24
c_rt_lib0clear(&___nl__im__25);
#line 24
___nl__bool__5 = !___nl__bool__5;
#line 24
if(___nl__bool__5){ goto label_119;}
#line 25
___nl__int__27 = c_rt_lib0array_len((*___ref___im__2));
#line 25
___nl__int__28 = 0;
#line 25
___nl__int__29 = ___nl__int__27 == ___nl__int__28;
#line 25
___nl__bool__26 = ___nl__int__29;
#line 25
//clear ___nl__int__27;
#line 25
//clear ___nl__int__28;
#line 25
//clear ___nl__int__29;
#line 25
___nl__bool__26 = !___nl__bool__26;
#line 25
___nl__bool__26 = !___nl__bool__26;
#line 25
if(___nl__bool__26){ goto label_104;}
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
//clear ___nl__bool__5;
#line 25
c_rt_lib0clear(&___nl__im__16);
#line 25
c_rt_lib0clear(&___nl__im__23);
#line 25
//clear ___nl__bool__26;
#line 25
return ___nl__im__3;
#line 25
goto label_104;
#line 25
label_104:
;
#line 25
//clear ___nl__bool__26;
#line 26
___nl__int__30 = c_olympic_io0read_int();
#line 26
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__30));
#line 26
//clear ___nl__int__30;
#line 27
c_rt_lib0move(&___nl__im__32,___get_global_string_const(36));
#line 27
c_rt_lib0move(&___nl__im__31, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__32));
#line 27
c_rt_lib0clear(&___nl__im__32);
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
c_rt_lib0clear(&___nl__im__3);
#line 27
//clear ___nl__bool__5;
#line 27
c_rt_lib0clear(&___nl__im__16);
#line 27
c_rt_lib0clear(&___nl__im__23);
#line 27
return ___nl__im__31;
#line 28
goto label_157;
#line 28
label_119:
;
#line 28
c_rt_lib0move(&___nl__im__33,___get_global_string_const(906));
#line 28
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__33);
#line 28
c_rt_lib0clear(&___nl__im__33);
#line 28
___nl__bool__5 = !___nl__bool__5;
#line 28
if(___nl__bool__5){ goto label_157;}
#line 29
___nl__int__35 = c_rt_lib0array_len((*___ref___im__2));
#line 29
___nl__int__36 = 0;
#line 29
___nl__int__37 = ___nl__int__35 == ___nl__int__36;
#line 29
___nl__bool__34 = ___nl__int__37;
#line 29
//clear ___nl__int__35;
#line 29
//clear ___nl__int__36;
#line 29
//clear ___nl__int__37;
#line 29
___nl__bool__34 = !___nl__bool__34;
#line 29
___nl__bool__34 = !___nl__bool__34;
#line 29
if(___nl__bool__34){ goto label_143;}
#line 29
c_rt_lib0clear(&___nl__im__0);
#line 29
//clear ___nl__bool__5;
#line 29
c_rt_lib0clear(&___nl__im__16);
#line 29
c_rt_lib0clear(&___nl__im__23);
#line 29
c_rt_lib0clear(&___nl__im__31);
#line 29
//clear ___nl__bool__34;
#line 29
return ___nl__im__3;
#line 29
goto label_143;
#line 29
label_143:
;
#line 29
//clear ___nl__bool__34;
#line 30
c_rt_lib0move(___ref___im__1, c_olympic_io0read_char());
#line 31
c_rt_lib0move(&___nl__im__39,___get_global_string_const(36));
#line 31
c_rt_lib0move(&___nl__im__38, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__39));
#line 31
c_rt_lib0clear(&___nl__im__39);
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
//clear ___nl__bool__5;
#line 31
c_rt_lib0clear(&___nl__im__16);
#line 31
c_rt_lib0clear(&___nl__im__23);
#line 31
c_rt_lib0clear(&___nl__im__31);
#line 31
return ___nl__im__38;
#line 32
goto label_157;
#line 32
label_157:
;
#line 32
//clear ___nl__bool__5;
#line 32
c_rt_lib0clear(&___nl__im__16);
#line 32
c_rt_lib0clear(&___nl__im__23);
#line 32
c_rt_lib0clear(&___nl__im__31);
#line 32
c_rt_lib0clear(&___nl__im__38);
#line 34
c_rt_lib0clear(&___nl__im__0);
#line 34
return ___nl__im__3;
return NULL;

}

ImmT  optional_libraries0c_fe_lib0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "optional_libraries0c_fe_lib");
ImmT  *var0 = &(_tab[0]);
ImmT  *var1 = &(_tab[1]);
ImmT  *var2 = &(_tab[2]);
ImmT  res = optional_libraries0c_fe_lib(*var0, var1, var2);
return res;
}
ImmT  optional_libraries0c_fe_lib(ImmT  ___nl__im__0,ImmT * ___ref___im__1,ImmT * ___ref___im__2) {
c_rt_lib0arg_val(___nl__im__0);
optional_libraries_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
bool  ___nl__bool__5 = false;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
INT  ___nl__int__9 = 0;
INT  ___nl__int__10 = 0;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
bool  ___nl__bool__19 = false;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
INT  ___nl__int__34 = 0;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
ImmT  ___nl__im__37 = NULL;
INT  ___nl__int__38 = 0;
ImmT  ___nl__im__39 = NULL;
INT  ___nl__int__40 = 0;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
ImmT  ___nl__im__43 = NULL;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
bool  ___nl__bool__48 = false;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
INT  ___nl__int__51 = 0;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
INT  ___nl__int__54 = 0;
ImmT  ___nl__im__55 = NULL;
INT  ___nl__int__56 = 0;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
bool  ___nl__bool__61 = false;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
INT  ___nl__int__64 = 0;
ImmT  ___nl__im__65 = NULL;
INT  ___nl__int__66 = 0;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
bool  ___nl__bool__72 = false;
bool  ___nl__bool__73 = false;
INT  ___nl__int__74 = 0;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
INT  ___nl__int__78 = 0;
ImmT  ___nl__im__79 = NULL;
INT  ___nl__int__80 = 0;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
bool  ___nl__bool__85 = false;
INT  ___nl__int__86 = 0;
INT  ___nl__int__87 = 0;
INT  ___nl__int__88 = 0;
ImmT  ___nl__im__89 = NULL;
INT  ___nl__int__90 = 0;
ImmT  ___nl__im__91 = NULL;
INT  ___nl__int__92 = 0;
ImmT  ___nl__im__93 = NULL;
ImmT  ___nl__im__94 = NULL;
ImmT  ___nl__im__95 = NULL;
bool  ___nl__bool__96 = false;
bool  ___nl__bool__97 = false;
INT  ___nl__int__98 = 0;
INT  ___nl__int__99 = 0;
INT  ___nl__int__100 = 0;
ImmT  ___nl__im__101 = NULL;
INT  ___nl__int__102 = 0;
ImmT  ___nl__im__103 = NULL;
INT  ___nl__int__104 = 0;
ImmT  ___nl__im__105 = NULL;
ImmT  ___nl__im__106 = NULL;
ImmT  ___nl__im__107 = NULL;
bool  ___nl__bool__108 = false;
INT  ___nl__int__109 = 0;
INT  ___nl__int__110 = 0;
INT  ___nl__int__111 = 0;
ImmT  ___nl__im__112 = NULL;
ImmT  ___nl__im__113 = NULL;
ImmT  ___nl__im__114 = NULL;
bool  ___nl__bool__115 = false;
INT  ___nl__int__116 = 0;
INT  ___nl__int__117 = 0;
INT  ___nl__int__118 = 0;
ImmT  ___nl__im__119 = NULL;
ImmT  ___nl__im__120 = NULL;
ImmT  ___nl__im__121 = NULL;
bool  ___nl__bool__122 = false;
INT  ___nl__int__123 = 0;
INT  ___nl__int__124 = 0;
INT  ___nl__int__125 = 0;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
bool  ___nl__bool__129 = false;
bool  ___nl__bool__130 = false;
INT  ___nl__int__131 = 0;
INT  ___nl__int__132 = 0;
INT  ___nl__int__133 = 0;
ImmT  ___nl__im__134 = NULL;
INT  ___nl__int__135 = 0;
ImmT  ___nl__im__136 = NULL;
INT  ___nl__int__137 = 0;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
bool  ___nl__bool__141 = false;
bool  ___nl__bool__142 = false;
INT  ___nl__int__143 = 0;
INT  ___nl__int__144 = 0;
INT  ___nl__int__145 = 0;
ImmT  ___nl__im__146 = NULL;
INT  ___nl__int__147 = 0;
ImmT  ___nl__im__148 = NULL;
INT  ___nl__int__149 = 0;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
bool  ___nl__bool__153 = false;
bool  ___nl__bool__154 = false;
INT  ___nl__int__155 = 0;
INT  ___nl__int__156 = 0;
INT  ___nl__int__157 = 0;
ImmT  ___nl__im__158 = NULL;
INT  ___nl__int__159 = 0;
ImmT  ___nl__im__160 = NULL;
INT  ___nl__int__161 = 0;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
#line 39
c_rt_lib0move(&___nl__im__4,___get_global_string_const(921));
#line 39
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(77), ___nl__im__4));
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 41
c_rt_lib0move(&___nl__im__6,___get_global_string_const(907));
#line 41
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 41
c_rt_lib0clear(&___nl__im__6);
#line 41
___nl__bool__5 = !___nl__bool__5;
#line 41
if(___nl__bool__5){ goto label_47;}
#line 42
___nl__int__9 = c_rt_lib0array_len((*___ref___im__2));
#line 42
___nl__int__10 = 1;
#line 42
___nl__int__11 = ___nl__int__9 == ___nl__int__10;
#line 42
___nl__bool__7 = ___nl__int__11;
#line 42
//clear ___nl__int__9;
#line 42
//clear ___nl__int__10;
#line 42
//clear ___nl__int__11;
#line 42
___nl__bool__8 = !___nl__bool__7;
#line 42
if(___nl__bool__8){ goto label_22;}
#line 42
___nl__int__13 = 0;
#line 42
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get((*___ref___im__2), ___nl__int__13));
#line 42
//clear ___nl__int__13;
#line 42
___nl__bool__7 = nl0is_printable(___nl__im__12);
#line 42
c_rt_lib0clear(&___nl__im__12);
#line 42
label_22:
;
#line 42
//clear ___nl__bool__8;
#line 42
___nl__bool__7 = !___nl__bool__7;
#line 42
___nl__bool__7 = !___nl__bool__7;
#line 42
if(___nl__bool__7){ goto label_32;}
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
//clear ___nl__bool__5;
#line 42
//clear ___nl__bool__7;
#line 42
return ___nl__im__3;
#line 42
goto label_32;
#line 42
label_32:
;
#line 42
//clear ___nl__bool__7;
#line 43
___nl__int__15 = 0;
#line 43
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get((*___ref___im__2), ___nl__int__15));
#line 43
//clear ___nl__int__15;
#line 43
c_rt_lib0delete(c_fe_lib0print(___nl__im__14));
#line 43
c_rt_lib0clear(&___nl__im__14);
#line 44
c_rt_lib0move(&___nl__im__17,___get_global_string_const(36));
#line 44
c_rt_lib0move(&___nl__im__16, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__17));
#line 44
c_rt_lib0clear(&___nl__im__17);
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
//clear ___nl__bool__5;
#line 44
return ___nl__im__16;
#line 45
goto label_788;
#line 45
label_47:
;
#line 45
c_rt_lib0move(&___nl__im__18,___get_global_string_const(908));
#line 45
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__18);
#line 45
c_rt_lib0clear(&___nl__im__18);
#line 45
___nl__bool__5 = !___nl__bool__5;
#line 45
if(___nl__bool__5){ goto label_94;}
#line 46
___nl__int__21 = c_rt_lib0array_len((*___ref___im__2));
#line 46
___nl__int__22 = 1;
#line 46
___nl__int__23 = ___nl__int__21 == ___nl__int__22;
#line 46
___nl__bool__19 = ___nl__int__23;
#line 46
//clear ___nl__int__21;
#line 46
//clear ___nl__int__22;
#line 46
//clear ___nl__int__23;
#line 46
___nl__bool__20 = !___nl__bool__19;
#line 46
if(___nl__bool__20){ goto label_67;}
#line 46
___nl__int__25 = 0;
#line 46
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get((*___ref___im__2), ___nl__int__25));
#line 46
//clear ___nl__int__25;
#line 46
___nl__bool__19 = nl0is_printable(___nl__im__24);
#line 46
c_rt_lib0clear(&___nl__im__24);
#line 46
label_67:
;
#line 46
//clear ___nl__bool__20;
#line 46
___nl__bool__19 = !___nl__bool__19;
#line 46
___nl__bool__19 = !___nl__bool__19;
#line 46
if(___nl__bool__19){ goto label_78;}
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
//clear ___nl__bool__5;
#line 46
c_rt_lib0clear(&___nl__im__16);
#line 46
//clear ___nl__bool__19;
#line 46
return ___nl__im__3;
#line 46
goto label_78;
#line 46
label_78:
;
#line 46
//clear ___nl__bool__19;
#line 47
___nl__int__27 = 0;
#line 47
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get((*___ref___im__2), ___nl__int__27));
#line 47
//clear ___nl__int__27;
#line 47
c_rt_lib0move(___ref___im__1, c_fe_lib0file_to_string(___nl__im__26));
#line 47
c_rt_lib0clear(&___nl__im__26);
#line 48
c_rt_lib0move(&___nl__im__29,___get_global_string_const(36));
#line 48
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__29));
#line 48
c_rt_lib0clear(&___nl__im__29);
#line 48
c_rt_lib0clear(&___nl__im__0);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
//clear ___nl__bool__5;
#line 48
c_rt_lib0clear(&___nl__im__16);
#line 48
return ___nl__im__28;
#line 49
goto label_788;
#line 49
label_94:
;
#line 49
c_rt_lib0move(&___nl__im__30,___get_global_string_const(909));
#line 49
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__30);
#line 49
c_rt_lib0clear(&___nl__im__30);
#line 49
___nl__bool__5 = !___nl__bool__5;
#line 49
if(___nl__bool__5){ goto label_156;}
#line 50
___nl__int__34 = c_rt_lib0array_len((*___ref___im__2));
#line 50
___nl__int__35 = 2;
#line 50
___nl__int__36 = ___nl__int__34 == ___nl__int__35;
#line 50
___nl__bool__31 = ___nl__int__36;
#line 50
//clear ___nl__int__34;
#line 50
//clear ___nl__int__35;
#line 50
//clear ___nl__int__36;
#line 50
___nl__bool__33 = !___nl__bool__31;
#line 50
if(___nl__bool__33){ goto label_114;}
#line 50
___nl__int__38 = 0;
#line 50
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_get((*___ref___im__2), ___nl__int__38));
#line 50
//clear ___nl__int__38;
#line 50
___nl__bool__31 = nl0is_printable(___nl__im__37);
#line 50
c_rt_lib0clear(&___nl__im__37);
#line 50
label_114:
;
#line 50
//clear ___nl__bool__33;
#line 50
___nl__bool__32 = !___nl__bool__31;
#line 50
if(___nl__bool__32){ goto label_123;}
#line 50
___nl__int__40 = 1;
#line 50
c_rt_lib0move(&___nl__im__39, c_rt_lib0array_get((*___ref___im__2), ___nl__int__40));
#line 50
//clear ___nl__int__40;
#line 50
___nl__bool__31 = nl0is_printable(___nl__im__39);
#line 50
c_rt_lib0clear(&___nl__im__39);
#line 50
label_123:
;
#line 50
//clear ___nl__bool__32;
#line 50
___nl__bool__31 = !___nl__bool__31;
#line 50
___nl__bool__31 = !___nl__bool__31;
#line 50
if(___nl__bool__31){ goto label_135;}
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
//clear ___nl__bool__5;
#line 50
c_rt_lib0clear(&___nl__im__16);
#line 50
c_rt_lib0clear(&___nl__im__28);
#line 50
//clear ___nl__bool__31;
#line 50
return ___nl__im__3;
#line 50
goto label_135;
#line 50
label_135:
;
#line 50
//clear ___nl__bool__31;
#line 51
___nl__int__42 = 0;
#line 51
c_rt_lib0move(&___nl__im__41, c_rt_lib0array_get((*___ref___im__2), ___nl__int__42));
#line 51
//clear ___nl__int__42;
#line 51
___nl__int__44 = 1;
#line 51
c_rt_lib0move(&___nl__im__43, c_rt_lib0array_get((*___ref___im__2), ___nl__int__44));
#line 51
//clear ___nl__int__44;
#line 51
c_rt_lib0move(___ref___im__1, c_fe_lib0string_to_file(___nl__im__41, ___nl__im__43));
#line 51
c_rt_lib0clear(&___nl__im__41);
#line 51
c_rt_lib0clear(&___nl__im__43);
#line 52
c_rt_lib0move(&___nl__im__46,___get_global_string_const(36));
#line 52
c_rt_lib0move(&___nl__im__45, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__46));
#line 52
c_rt_lib0clear(&___nl__im__46);
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
c_rt_lib0clear(&___nl__im__3);
#line 52
//clear ___nl__bool__5;
#line 52
c_rt_lib0clear(&___nl__im__16);
#line 52
c_rt_lib0clear(&___nl__im__28);
#line 52
return ___nl__im__45;
#line 53
goto label_788;
#line 53
label_156:
;
#line 53
c_rt_lib0move(&___nl__im__47,___get_global_string_const(910));
#line 53
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__47);
#line 53
c_rt_lib0clear(&___nl__im__47);
#line 53
___nl__bool__5 = !___nl__bool__5;
#line 53
if(___nl__bool__5){ goto label_207;}
#line 54
___nl__int__50 = c_rt_lib0array_len((*___ref___im__2));
#line 54
___nl__int__51 = 1;
#line 54
___nl__int__52 = ___nl__int__50 == ___nl__int__51;
#line 54
___nl__bool__48 = ___nl__int__52;
#line 54
//clear ___nl__int__50;
#line 54
//clear ___nl__int__51;
#line 54
//clear ___nl__int__52;
#line 54
___nl__bool__49 = !___nl__bool__48;
#line 54
if(___nl__bool__49){ goto label_176;}
#line 54
___nl__int__54 = 0;
#line 54
c_rt_lib0move(&___nl__im__53, c_rt_lib0array_get((*___ref___im__2), ___nl__int__54));
#line 54
//clear ___nl__int__54;
#line 54
___nl__bool__48 = nl0is_printable(___nl__im__53);
#line 54
c_rt_lib0clear(&___nl__im__53);
#line 54
label_176:
;
#line 54
//clear ___nl__bool__49;
#line 54
___nl__bool__48 = !___nl__bool__48;
#line 54
___nl__bool__48 = !___nl__bool__48;
#line 54
if(___nl__bool__48){ goto label_189;}
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
//clear ___nl__bool__5;
#line 54
c_rt_lib0clear(&___nl__im__16);
#line 54
c_rt_lib0clear(&___nl__im__28);
#line 54
c_rt_lib0clear(&___nl__im__45);
#line 54
//clear ___nl__bool__48;
#line 54
return ___nl__im__3;
#line 54
goto label_189;
#line 54
label_189:
;
#line 54
//clear ___nl__bool__48;
#line 55
___nl__int__56 = 0;
#line 55
c_rt_lib0move(&___nl__im__55, c_rt_lib0array_get((*___ref___im__2), ___nl__int__56));
#line 55
//clear ___nl__int__56;
#line 55
c_rt_lib0move(___ref___im__1, c_fe_lib0get_file_size(___nl__im__55));
#line 55
c_rt_lib0clear(&___nl__im__55);
#line 56
c_rt_lib0move(&___nl__im__58,___get_global_string_const(36));
#line 56
c_rt_lib0move(&___nl__im__57, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__58));
#line 56
c_rt_lib0clear(&___nl__im__58);
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
//clear ___nl__bool__5;
#line 56
c_rt_lib0clear(&___nl__im__16);
#line 56
c_rt_lib0clear(&___nl__im__28);
#line 56
c_rt_lib0clear(&___nl__im__45);
#line 56
return ___nl__im__57;
#line 57
goto label_788;
#line 57
label_207:
;
#line 57
c_rt_lib0move(&___nl__im__59,___get_global_string_const(911));
#line 57
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__59);
#line 57
c_rt_lib0clear(&___nl__im__59);
#line 57
___nl__bool__5 = !___nl__bool__5;
#line 57
if(___nl__bool__5){ goto label_260;}
#line 58
___nl__int__62 = c_rt_lib0array_len((*___ref___im__2));
#line 58
___nl__int__63 = 1;
#line 58
___nl__int__64 = ___nl__int__62 == ___nl__int__63;
#line 58
___nl__bool__60 = ___nl__int__64;
#line 58
//clear ___nl__int__62;
#line 58
//clear ___nl__int__63;
#line 58
//clear ___nl__int__64;
#line 58
___nl__bool__61 = !___nl__bool__60;
#line 58
if(___nl__bool__61){ goto label_227;}
#line 58
___nl__int__66 = 0;
#line 58
c_rt_lib0move(&___nl__im__65, c_rt_lib0array_get((*___ref___im__2), ___nl__int__66));
#line 58
//clear ___nl__int__66;
#line 58
___nl__bool__60 = nl0is_printable(___nl__im__65);
#line 58
c_rt_lib0clear(&___nl__im__65);
#line 58
label_227:
;
#line 58
//clear ___nl__bool__61;
#line 58
___nl__bool__60 = !___nl__bool__60;
#line 58
___nl__bool__60 = !___nl__bool__60;
#line 58
if(___nl__bool__60){ goto label_241;}
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
//clear ___nl__bool__5;
#line 58
c_rt_lib0clear(&___nl__im__16);
#line 58
c_rt_lib0clear(&___nl__im__28);
#line 58
c_rt_lib0clear(&___nl__im__45);
#line 58
c_rt_lib0clear(&___nl__im__57);
#line 58
//clear ___nl__bool__60;
#line 58
return ___nl__im__3;
#line 58
goto label_241;
#line 58
label_241:
;
#line 58
//clear ___nl__bool__60;
#line 59
___nl__int__68 = 0;
#line 59
c_rt_lib0move(&___nl__im__67, c_rt_lib0array_get((*___ref___im__2), ___nl__int__68));
#line 59
//clear ___nl__int__68;
#line 59
c_rt_lib0move(___ref___im__1, c_fe_lib0get_modif_time(___nl__im__67));
#line 59
c_rt_lib0clear(&___nl__im__67);
#line 60
c_rt_lib0move(&___nl__im__70,___get_global_string_const(36));
#line 60
c_rt_lib0move(&___nl__im__69, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__70));
#line 60
c_rt_lib0clear(&___nl__im__70);
#line 60
c_rt_lib0clear(&___nl__im__0);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
//clear ___nl__bool__5;
#line 60
c_rt_lib0clear(&___nl__im__16);
#line 60
c_rt_lib0clear(&___nl__im__28);
#line 60
c_rt_lib0clear(&___nl__im__45);
#line 60
c_rt_lib0clear(&___nl__im__57);
#line 60
return ___nl__im__69;
#line 61
goto label_788;
#line 61
label_260:
;
#line 61
c_rt_lib0move(&___nl__im__71,___get_global_string_const(912));
#line 61
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__71);
#line 61
c_rt_lib0clear(&___nl__im__71);
#line 61
___nl__bool__5 = !___nl__bool__5;
#line 61
if(___nl__bool__5){ goto label_315;}
#line 62
___nl__int__74 = c_rt_lib0array_len((*___ref___im__2));
#line 62
___nl__int__75 = 1;
#line 62
___nl__int__76 = ___nl__int__74 == ___nl__int__75;
#line 62
___nl__bool__72 = ___nl__int__76;
#line 62
//clear ___nl__int__74;
#line 62
//clear ___nl__int__75;
#line 62
//clear ___nl__int__76;
#line 62
___nl__bool__73 = !___nl__bool__72;
#line 62
if(___nl__bool__73){ goto label_280;}
#line 62
___nl__int__78 = 0;
#line 62
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_get((*___ref___im__2), ___nl__int__78));
#line 62
//clear ___nl__int__78;
#line 62
___nl__bool__72 = nl0is_printable(___nl__im__77);
#line 62
c_rt_lib0clear(&___nl__im__77);
#line 62
label_280:
;
#line 62
//clear ___nl__bool__73;
#line 62
___nl__bool__72 = !___nl__bool__72;
#line 62
___nl__bool__72 = !___nl__bool__72;
#line 62
if(___nl__bool__72){ goto label_295;}
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
//clear ___nl__bool__5;
#line 62
c_rt_lib0clear(&___nl__im__16);
#line 62
c_rt_lib0clear(&___nl__im__28);
#line 62
c_rt_lib0clear(&___nl__im__45);
#line 62
c_rt_lib0clear(&___nl__im__57);
#line 62
c_rt_lib0clear(&___nl__im__69);
#line 62
//clear ___nl__bool__72;
#line 62
return ___nl__im__3;
#line 62
goto label_295;
#line 62
label_295:
;
#line 62
//clear ___nl__bool__72;
#line 63
___nl__int__80 = 0;
#line 63
c_rt_lib0move(&___nl__im__79, c_rt_lib0array_get((*___ref___im__2), ___nl__int__80));
#line 63
//clear ___nl__int__80;
#line 63
c_rt_lib0move(___ref___im__1, c_fe_lib0get_module_files(___nl__im__79));
#line 63
c_rt_lib0clear(&___nl__im__79);
#line 64
c_rt_lib0move(&___nl__im__82,___get_global_string_const(36));
#line 64
c_rt_lib0move(&___nl__im__81, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__82));
#line 64
c_rt_lib0clear(&___nl__im__82);
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
//clear ___nl__bool__5;
#line 64
c_rt_lib0clear(&___nl__im__16);
#line 64
c_rt_lib0clear(&___nl__im__28);
#line 64
c_rt_lib0clear(&___nl__im__45);
#line 64
c_rt_lib0clear(&___nl__im__57);
#line 64
c_rt_lib0clear(&___nl__im__69);
#line 64
return ___nl__im__81;
#line 65
goto label_788;
#line 65
label_315:
;
#line 65
c_rt_lib0move(&___nl__im__83,___get_global_string_const(913));
#line 65
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__83);
#line 65
c_rt_lib0clear(&___nl__im__83);
#line 65
___nl__bool__5 = !___nl__bool__5;
#line 65
if(___nl__bool__5){ goto label_372;}
#line 66
___nl__int__86 = c_rt_lib0array_len((*___ref___im__2));
#line 66
___nl__int__87 = 1;
#line 66
___nl__int__88 = ___nl__int__86 == ___nl__int__87;
#line 66
___nl__bool__84 = ___nl__int__88;
#line 66
//clear ___nl__int__86;
#line 66
//clear ___nl__int__87;
#line 66
//clear ___nl__int__88;
#line 66
___nl__bool__85 = !___nl__bool__84;
#line 66
if(___nl__bool__85){ goto label_335;}
#line 66
___nl__int__90 = 0;
#line 66
c_rt_lib0move(&___nl__im__89, c_rt_lib0array_get((*___ref___im__2), ___nl__int__90));
#line 66
//clear ___nl__int__90;
#line 66
___nl__bool__84 = nl0is_printable(___nl__im__89);
#line 66
c_rt_lib0clear(&___nl__im__89);
#line 66
label_335:
;
#line 66
//clear ___nl__bool__85;
#line 66
___nl__bool__84 = !___nl__bool__84;
#line 66
___nl__bool__84 = !___nl__bool__84;
#line 66
if(___nl__bool__84){ goto label_351;}
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
//clear ___nl__bool__5;
#line 66
c_rt_lib0clear(&___nl__im__16);
#line 66
c_rt_lib0clear(&___nl__im__28);
#line 66
c_rt_lib0clear(&___nl__im__45);
#line 66
c_rt_lib0clear(&___nl__im__57);
#line 66
c_rt_lib0clear(&___nl__im__69);
#line 66
c_rt_lib0clear(&___nl__im__81);
#line 66
//clear ___nl__bool__84;
#line 66
return ___nl__im__3;
#line 66
goto label_351;
#line 66
label_351:
;
#line 66
//clear ___nl__bool__84;
#line 67
___nl__int__92 = 0;
#line 67
c_rt_lib0move(&___nl__im__91, c_rt_lib0array_get((*___ref___im__2), ___nl__int__92));
#line 67
//clear ___nl__int__92;
#line 67
c_rt_lib0move(___ref___im__1, c_fe_lib0get_module_files_rec(___nl__im__91));
#line 67
c_rt_lib0clear(&___nl__im__91);
#line 68
c_rt_lib0move(&___nl__im__94,___get_global_string_const(36));
#line 68
c_rt_lib0move(&___nl__im__93, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__94));
#line 68
c_rt_lib0clear(&___nl__im__94);
#line 68
c_rt_lib0clear(&___nl__im__0);
#line 68
c_rt_lib0clear(&___nl__im__3);
#line 68
//clear ___nl__bool__5;
#line 68
c_rt_lib0clear(&___nl__im__16);
#line 68
c_rt_lib0clear(&___nl__im__28);
#line 68
c_rt_lib0clear(&___nl__im__45);
#line 68
c_rt_lib0clear(&___nl__im__57);
#line 68
c_rt_lib0clear(&___nl__im__69);
#line 68
c_rt_lib0clear(&___nl__im__81);
#line 68
return ___nl__im__93;
#line 69
goto label_788;
#line 69
label_372:
;
#line 69
c_rt_lib0move(&___nl__im__95,___get_global_string_const(914));
#line 69
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__95);
#line 69
c_rt_lib0clear(&___nl__im__95);
#line 69
___nl__bool__5 = !___nl__bool__5;
#line 69
if(___nl__bool__5){ goto label_431;}
#line 70
___nl__int__98 = c_rt_lib0array_len((*___ref___im__2));
#line 70
___nl__int__99 = 1;
#line 70
___nl__int__100 = ___nl__int__98 == ___nl__int__99;
#line 70
___nl__bool__96 = ___nl__int__100;
#line 70
//clear ___nl__int__98;
#line 70
//clear ___nl__int__99;
#line 70
//clear ___nl__int__100;
#line 70
___nl__bool__97 = !___nl__bool__96;
#line 70
if(___nl__bool__97){ goto label_392;}
#line 70
___nl__int__102 = 0;
#line 70
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_get((*___ref___im__2), ___nl__int__102));
#line 70
//clear ___nl__int__102;
#line 70
___nl__bool__96 = nl0is_printable(___nl__im__101);
#line 70
c_rt_lib0clear(&___nl__im__101);
#line 70
label_392:
;
#line 70
//clear ___nl__bool__97;
#line 70
___nl__bool__96 = !___nl__bool__96;
#line 70
___nl__bool__96 = !___nl__bool__96;
#line 70
if(___nl__bool__96){ goto label_409;}
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
//clear ___nl__bool__5;
#line 70
c_rt_lib0clear(&___nl__im__16);
#line 70
c_rt_lib0clear(&___nl__im__28);
#line 70
c_rt_lib0clear(&___nl__im__45);
#line 70
c_rt_lib0clear(&___nl__im__57);
#line 70
c_rt_lib0clear(&___nl__im__69);
#line 70
c_rt_lib0clear(&___nl__im__81);
#line 70
c_rt_lib0clear(&___nl__im__93);
#line 70
//clear ___nl__bool__96;
#line 70
return ___nl__im__3;
#line 70
goto label_409;
#line 70
label_409:
;
#line 70
//clear ___nl__bool__96;
#line 71
___nl__int__104 = 0;
#line 71
c_rt_lib0move(&___nl__im__103, c_rt_lib0array_get((*___ref___im__2), ___nl__int__104));
#line 71
//clear ___nl__int__104;
#line 71
c_rt_lib0move(___ref___im__1, c_fe_lib0mk_path(___nl__im__103));
#line 71
c_rt_lib0clear(&___nl__im__103);
#line 72
c_rt_lib0move(&___nl__im__106,___get_global_string_const(36));
#line 72
c_rt_lib0move(&___nl__im__105, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__106));
#line 72
c_rt_lib0clear(&___nl__im__106);
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 72
//clear ___nl__bool__5;
#line 72
c_rt_lib0clear(&___nl__im__16);
#line 72
c_rt_lib0clear(&___nl__im__28);
#line 72
c_rt_lib0clear(&___nl__im__45);
#line 72
c_rt_lib0clear(&___nl__im__57);
#line 72
c_rt_lib0clear(&___nl__im__69);
#line 72
c_rt_lib0clear(&___nl__im__81);
#line 72
c_rt_lib0clear(&___nl__im__93);
#line 72
return ___nl__im__105;
#line 73
goto label_788;
#line 73
label_431:
;
#line 73
c_rt_lib0move(&___nl__im__107,___get_global_string_const(915));
#line 73
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__107);
#line 73
c_rt_lib0clear(&___nl__im__107);
#line 73
___nl__bool__5 = !___nl__bool__5;
#line 73
if(___nl__bool__5){ goto label_479;}
#line 74
___nl__int__109 = c_rt_lib0array_len((*___ref___im__2));
#line 74
___nl__int__110 = 0;
#line 74
___nl__int__111 = ___nl__int__109 == ___nl__int__110;
#line 74
___nl__bool__108 = ___nl__int__111;
#line 74
//clear ___nl__int__109;
#line 74
//clear ___nl__int__110;
#line 74
//clear ___nl__int__111;
#line 74
___nl__bool__108 = !___nl__bool__108;
#line 74
___nl__bool__108 = !___nl__bool__108;
#line 74
if(___nl__bool__108){ goto label_460;}
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
//clear ___nl__bool__5;
#line 74
c_rt_lib0clear(&___nl__im__16);
#line 74
c_rt_lib0clear(&___nl__im__28);
#line 74
c_rt_lib0clear(&___nl__im__45);
#line 74
c_rt_lib0clear(&___nl__im__57);
#line 74
c_rt_lib0clear(&___nl__im__69);
#line 74
c_rt_lib0clear(&___nl__im__81);
#line 74
c_rt_lib0clear(&___nl__im__93);
#line 74
c_rt_lib0clear(&___nl__im__105);
#line 74
//clear ___nl__bool__108;
#line 74
return ___nl__im__3;
#line 74
goto label_460;
#line 74
label_460:
;
#line 74
//clear ___nl__bool__108;
#line 75
c_rt_lib0move(___ref___im__1, c_fe_lib0get_time());
#line 76
c_rt_lib0move(&___nl__im__113,___get_global_string_const(36));
#line 76
c_rt_lib0move(&___nl__im__112, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__113));
#line 76
c_rt_lib0clear(&___nl__im__113);
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
c_rt_lib0clear(&___nl__im__3);
#line 76
//clear ___nl__bool__5;
#line 76
c_rt_lib0clear(&___nl__im__16);
#line 76
c_rt_lib0clear(&___nl__im__28);
#line 76
c_rt_lib0clear(&___nl__im__45);
#line 76
c_rt_lib0clear(&___nl__im__57);
#line 76
c_rt_lib0clear(&___nl__im__69);
#line 76
c_rt_lib0clear(&___nl__im__81);
#line 76
c_rt_lib0clear(&___nl__im__93);
#line 76
c_rt_lib0clear(&___nl__im__105);
#line 76
return ___nl__im__112;
#line 77
goto label_788;
#line 77
label_479:
;
#line 77
c_rt_lib0move(&___nl__im__114,___get_global_string_const(916));
#line 77
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__114);
#line 77
c_rt_lib0clear(&___nl__im__114);
#line 77
___nl__bool__5 = !___nl__bool__5;
#line 77
if(___nl__bool__5){ goto label_529;}
#line 78
___nl__int__116 = c_rt_lib0array_len((*___ref___im__2));
#line 78
___nl__int__117 = 0;
#line 78
___nl__int__118 = ___nl__int__116 == ___nl__int__117;
#line 78
___nl__bool__115 = ___nl__int__118;
#line 78
//clear ___nl__int__116;
#line 78
//clear ___nl__int__117;
#line 78
//clear ___nl__int__118;
#line 78
___nl__bool__115 = !___nl__bool__115;
#line 78
___nl__bool__115 = !___nl__bool__115;
#line 78
if(___nl__bool__115){ goto label_509;}
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
//clear ___nl__bool__5;
#line 78
c_rt_lib0clear(&___nl__im__16);
#line 78
c_rt_lib0clear(&___nl__im__28);
#line 78
c_rt_lib0clear(&___nl__im__45);
#line 78
c_rt_lib0clear(&___nl__im__57);
#line 78
c_rt_lib0clear(&___nl__im__69);
#line 78
c_rt_lib0clear(&___nl__im__81);
#line 78
c_rt_lib0clear(&___nl__im__93);
#line 78
c_rt_lib0clear(&___nl__im__105);
#line 78
c_rt_lib0clear(&___nl__im__112);
#line 78
//clear ___nl__bool__115;
#line 78
return ___nl__im__3;
#line 78
goto label_509;
#line 78
label_509:
;
#line 78
//clear ___nl__bool__115;
#line 79
c_rt_lib0move(___ref___im__1, c_fe_lib0get_pid());
#line 80
c_rt_lib0move(&___nl__im__120,___get_global_string_const(36));
#line 80
c_rt_lib0move(&___nl__im__119, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__120));
#line 80
c_rt_lib0clear(&___nl__im__120);
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
c_rt_lib0clear(&___nl__im__3);
#line 80
//clear ___nl__bool__5;
#line 80
c_rt_lib0clear(&___nl__im__16);
#line 80
c_rt_lib0clear(&___nl__im__28);
#line 80
c_rt_lib0clear(&___nl__im__45);
#line 80
c_rt_lib0clear(&___nl__im__57);
#line 80
c_rt_lib0clear(&___nl__im__69);
#line 80
c_rt_lib0clear(&___nl__im__81);
#line 80
c_rt_lib0clear(&___nl__im__93);
#line 80
c_rt_lib0clear(&___nl__im__105);
#line 80
c_rt_lib0clear(&___nl__im__112);
#line 80
return ___nl__im__119;
#line 81
goto label_788;
#line 81
label_529:
;
#line 81
c_rt_lib0move(&___nl__im__121,___get_global_string_const(917));
#line 81
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__121);
#line 81
c_rt_lib0clear(&___nl__im__121);
#line 81
___nl__bool__5 = !___nl__bool__5;
#line 81
if(___nl__bool__5){ goto label_581;}
#line 82
___nl__int__123 = c_rt_lib0array_len((*___ref___im__2));
#line 82
___nl__int__124 = 0;
#line 82
___nl__int__125 = ___nl__int__123 == ___nl__int__124;
#line 82
___nl__bool__122 = ___nl__int__125;
#line 82
//clear ___nl__int__123;
#line 82
//clear ___nl__int__124;
#line 82
//clear ___nl__int__125;
#line 82
___nl__bool__122 = !___nl__bool__122;
#line 82
___nl__bool__122 = !___nl__bool__122;
#line 82
if(___nl__bool__122){ goto label_560;}
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
//clear ___nl__bool__5;
#line 82
c_rt_lib0clear(&___nl__im__16);
#line 82
c_rt_lib0clear(&___nl__im__28);
#line 82
c_rt_lib0clear(&___nl__im__45);
#line 82
c_rt_lib0clear(&___nl__im__57);
#line 82
c_rt_lib0clear(&___nl__im__69);
#line 82
c_rt_lib0clear(&___nl__im__81);
#line 82
c_rt_lib0clear(&___nl__im__93);
#line 82
c_rt_lib0clear(&___nl__im__105);
#line 82
c_rt_lib0clear(&___nl__im__112);
#line 82
c_rt_lib0clear(&___nl__im__119);
#line 82
//clear ___nl__bool__122;
#line 82
return ___nl__im__3;
#line 82
goto label_560;
#line 82
label_560:
;
#line 82
//clear ___nl__bool__122;
#line 83
c_rt_lib0move(___ref___im__1, c_fe_lib0time());
#line 84
c_rt_lib0move(&___nl__im__127,___get_global_string_const(36));
#line 84
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__127));
#line 84
c_rt_lib0clear(&___nl__im__127);
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
//clear ___nl__bool__5;
#line 84
c_rt_lib0clear(&___nl__im__16);
#line 84
c_rt_lib0clear(&___nl__im__28);
#line 84
c_rt_lib0clear(&___nl__im__45);
#line 84
c_rt_lib0clear(&___nl__im__57);
#line 84
c_rt_lib0clear(&___nl__im__69);
#line 84
c_rt_lib0clear(&___nl__im__81);
#line 84
c_rt_lib0clear(&___nl__im__93);
#line 84
c_rt_lib0clear(&___nl__im__105);
#line 84
c_rt_lib0clear(&___nl__im__112);
#line 84
c_rt_lib0clear(&___nl__im__119);
#line 84
return ___nl__im__126;
#line 85
goto label_788;
#line 85
label_581:
;
#line 85
c_rt_lib0move(&___nl__im__128,___get_global_string_const(918));
#line 85
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__128);
#line 85
c_rt_lib0clear(&___nl__im__128);
#line 85
___nl__bool__5 = !___nl__bool__5;
#line 85
if(___nl__bool__5){ goto label_648;}
#line 86
___nl__int__131 = c_rt_lib0array_len((*___ref___im__2));
#line 86
___nl__int__132 = 1;
#line 86
___nl__int__133 = ___nl__int__131 == ___nl__int__132;
#line 86
___nl__bool__129 = ___nl__int__133;
#line 86
//clear ___nl__int__131;
#line 86
//clear ___nl__int__132;
#line 86
//clear ___nl__int__133;
#line 86
___nl__bool__130 = !___nl__bool__129;
#line 86
if(___nl__bool__130){ goto label_601;}
#line 86
___nl__int__135 = 0;
#line 86
c_rt_lib0move(&___nl__im__134, c_rt_lib0array_get((*___ref___im__2), ___nl__int__135));
#line 86
//clear ___nl__int__135;
#line 86
___nl__bool__129 = string_utils0is_number(___nl__im__134);
#line 86
c_rt_lib0clear(&___nl__im__134);
#line 86
label_601:
;
#line 86
//clear ___nl__bool__130;
#line 86
___nl__bool__129 = !___nl__bool__129;
#line 86
___nl__bool__129 = !___nl__bool__129;
#line 86
if(___nl__bool__129){ goto label_622;}
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
//clear ___nl__bool__5;
#line 86
c_rt_lib0clear(&___nl__im__16);
#line 86
c_rt_lib0clear(&___nl__im__28);
#line 86
c_rt_lib0clear(&___nl__im__45);
#line 86
c_rt_lib0clear(&___nl__im__57);
#line 86
c_rt_lib0clear(&___nl__im__69);
#line 86
c_rt_lib0clear(&___nl__im__81);
#line 86
c_rt_lib0clear(&___nl__im__93);
#line 86
c_rt_lib0clear(&___nl__im__105);
#line 86
c_rt_lib0clear(&___nl__im__112);
#line 86
c_rt_lib0clear(&___nl__im__119);
#line 86
c_rt_lib0clear(&___nl__im__126);
#line 86
//clear ___nl__bool__129;
#line 86
return ___nl__im__3;
#line 86
goto label_622;
#line 86
label_622:
;
#line 86
//clear ___nl__bool__129;
#line 87
___nl__int__137 = 0;
#line 87
c_rt_lib0move(&___nl__im__136, c_rt_lib0array_get((*___ref___im__2), ___nl__int__137));
#line 87
//clear ___nl__int__137;
#line 87
c_rt_lib0move(___ref___im__1, c_fe_lib0localtime(___nl__im__136));
#line 87
c_rt_lib0clear(&___nl__im__136);
#line 88
c_rt_lib0move(&___nl__im__139,___get_global_string_const(36));
#line 88
c_rt_lib0move(&___nl__im__138, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__139));
#line 88
c_rt_lib0clear(&___nl__im__139);
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__3);
#line 88
//clear ___nl__bool__5;
#line 88
c_rt_lib0clear(&___nl__im__16);
#line 88
c_rt_lib0clear(&___nl__im__28);
#line 88
c_rt_lib0clear(&___nl__im__45);
#line 88
c_rt_lib0clear(&___nl__im__57);
#line 88
c_rt_lib0clear(&___nl__im__69);
#line 88
c_rt_lib0clear(&___nl__im__81);
#line 88
c_rt_lib0clear(&___nl__im__93);
#line 88
c_rt_lib0clear(&___nl__im__105);
#line 88
c_rt_lib0clear(&___nl__im__112);
#line 88
c_rt_lib0clear(&___nl__im__119);
#line 88
c_rt_lib0clear(&___nl__im__126);
#line 88
return ___nl__im__138;
#line 89
goto label_788;
#line 89
label_648:
;
#line 89
c_rt_lib0move(&___nl__im__140,___get_global_string_const(919));
#line 89
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__140);
#line 89
c_rt_lib0clear(&___nl__im__140);
#line 89
___nl__bool__5 = !___nl__bool__5;
#line 89
if(___nl__bool__5){ goto label_717;}
#line 90
___nl__int__143 = c_rt_lib0array_len((*___ref___im__2));
#line 90
___nl__int__144 = 1;
#line 90
___nl__int__145 = ___nl__int__143 == ___nl__int__144;
#line 90
___nl__bool__141 = ___nl__int__145;
#line 90
//clear ___nl__int__143;
#line 90
//clear ___nl__int__144;
#line 90
//clear ___nl__int__145;
#line 90
___nl__bool__142 = !___nl__bool__141;
#line 90
if(___nl__bool__142){ goto label_668;}
#line 90
___nl__int__147 = 0;
#line 90
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_get((*___ref___im__2), ___nl__int__147));
#line 90
//clear ___nl__int__147;
#line 90
___nl__bool__141 = string_utils0is_number(___nl__im__146);
#line 90
c_rt_lib0clear(&___nl__im__146);
#line 90
label_668:
;
#line 90
//clear ___nl__bool__142;
#line 90
___nl__bool__141 = !___nl__bool__141;
#line 90
___nl__bool__141 = !___nl__bool__141;
#line 90
if(___nl__bool__141){ goto label_690;}
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
//clear ___nl__bool__5;
#line 90
c_rt_lib0clear(&___nl__im__16);
#line 90
c_rt_lib0clear(&___nl__im__28);
#line 90
c_rt_lib0clear(&___nl__im__45);
#line 90
c_rt_lib0clear(&___nl__im__57);
#line 90
c_rt_lib0clear(&___nl__im__69);
#line 90
c_rt_lib0clear(&___nl__im__81);
#line 90
c_rt_lib0clear(&___nl__im__93);
#line 90
c_rt_lib0clear(&___nl__im__105);
#line 90
c_rt_lib0clear(&___nl__im__112);
#line 90
c_rt_lib0clear(&___nl__im__119);
#line 90
c_rt_lib0clear(&___nl__im__126);
#line 90
c_rt_lib0clear(&___nl__im__138);
#line 90
//clear ___nl__bool__141;
#line 90
return ___nl__im__3;
#line 90
goto label_690;
#line 90
label_690:
;
#line 90
//clear ___nl__bool__141;
#line 91
___nl__int__149 = 0;
#line 91
c_rt_lib0move(&___nl__im__148, c_rt_lib0array_get((*___ref___im__2), ___nl__int__149));
#line 91
//clear ___nl__int__149;
#line 91
c_rt_lib0move(___ref___im__1, c_fe_lib0sleep(___nl__im__148));
#line 91
c_rt_lib0clear(&___nl__im__148);
#line 92
c_rt_lib0move(&___nl__im__151,___get_global_string_const(36));
#line 92
c_rt_lib0move(&___nl__im__150, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__151));
#line 92
c_rt_lib0clear(&___nl__im__151);
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__3);
#line 92
//clear ___nl__bool__5;
#line 92
c_rt_lib0clear(&___nl__im__16);
#line 92
c_rt_lib0clear(&___nl__im__28);
#line 92
c_rt_lib0clear(&___nl__im__45);
#line 92
c_rt_lib0clear(&___nl__im__57);
#line 92
c_rt_lib0clear(&___nl__im__69);
#line 92
c_rt_lib0clear(&___nl__im__81);
#line 92
c_rt_lib0clear(&___nl__im__93);
#line 92
c_rt_lib0clear(&___nl__im__105);
#line 92
c_rt_lib0clear(&___nl__im__112);
#line 92
c_rt_lib0clear(&___nl__im__119);
#line 92
c_rt_lib0clear(&___nl__im__126);
#line 92
c_rt_lib0clear(&___nl__im__138);
#line 92
return ___nl__im__150;
#line 93
goto label_788;
#line 93
label_717:
;
#line 93
c_rt_lib0move(&___nl__im__152,___get_global_string_const(920));
#line 93
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__152);
#line 93
c_rt_lib0clear(&___nl__im__152);
#line 93
___nl__bool__5 = !___nl__bool__5;
#line 93
if(___nl__bool__5){ goto label_788;}
#line 94
___nl__int__155 = c_rt_lib0array_len((*___ref___im__2));
#line 94
___nl__int__156 = 1;
#line 94
___nl__int__157 = ___nl__int__155 == ___nl__int__156;
#line 94
___nl__bool__153 = ___nl__int__157;
#line 94
//clear ___nl__int__155;
#line 94
//clear ___nl__int__156;
#line 94
//clear ___nl__int__157;
#line 94
___nl__bool__154 = !___nl__bool__153;
#line 94
if(___nl__bool__154){ goto label_737;}
#line 94
___nl__int__159 = 0;
#line 94
c_rt_lib0move(&___nl__im__158, c_rt_lib0array_get((*___ref___im__2), ___nl__int__159));
#line 94
//clear ___nl__int__159;
#line 94
___nl__bool__153 = nl0is_printable(___nl__im__158);
#line 94
c_rt_lib0clear(&___nl__im__158);
#line 94
label_737:
;
#line 94
//clear ___nl__bool__154;
#line 94
___nl__bool__153 = !___nl__bool__153;
#line 94
___nl__bool__153 = !___nl__bool__153;
#line 94
if(___nl__bool__153){ goto label_760;}
#line 94
c_rt_lib0clear(&___nl__im__0);
#line 94
//clear ___nl__bool__5;
#line 94
c_rt_lib0clear(&___nl__im__16);
#line 94
c_rt_lib0clear(&___nl__im__28);
#line 94
c_rt_lib0clear(&___nl__im__45);
#line 94
c_rt_lib0clear(&___nl__im__57);
#line 94
c_rt_lib0clear(&___nl__im__69);
#line 94
c_rt_lib0clear(&___nl__im__81);
#line 94
c_rt_lib0clear(&___nl__im__93);
#line 94
c_rt_lib0clear(&___nl__im__105);
#line 94
c_rt_lib0clear(&___nl__im__112);
#line 94
c_rt_lib0clear(&___nl__im__119);
#line 94
c_rt_lib0clear(&___nl__im__126);
#line 94
c_rt_lib0clear(&___nl__im__138);
#line 94
c_rt_lib0clear(&___nl__im__150);
#line 94
//clear ___nl__bool__153;
#line 94
return ___nl__im__3;
#line 94
goto label_760;
#line 94
label_760:
;
#line 94
//clear ___nl__bool__153;
#line 95
___nl__int__161 = 0;
#line 95
c_rt_lib0move(&___nl__im__160, c_rt_lib0array_get((*___ref___im__2), ___nl__int__161));
#line 95
//clear ___nl__int__161;
#line 95
c_rt_lib0move(___ref___im__1, c_fe_lib0exec_cmd(___nl__im__160));
#line 95
c_rt_lib0clear(&___nl__im__160);
#line 96
c_rt_lib0move(&___nl__im__163,___get_global_string_const(36));
#line 96
c_rt_lib0move(&___nl__im__162, c_rt_lib0ov_mk_arg(___get_global_string_const(78), ___nl__im__163));
#line 96
c_rt_lib0clear(&___nl__im__163);
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__3);
#line 96
//clear ___nl__bool__5;
#line 96
c_rt_lib0clear(&___nl__im__16);
#line 96
c_rt_lib0clear(&___nl__im__28);
#line 96
c_rt_lib0clear(&___nl__im__45);
#line 96
c_rt_lib0clear(&___nl__im__57);
#line 96
c_rt_lib0clear(&___nl__im__69);
#line 96
c_rt_lib0clear(&___nl__im__81);
#line 96
c_rt_lib0clear(&___nl__im__93);
#line 96
c_rt_lib0clear(&___nl__im__105);
#line 96
c_rt_lib0clear(&___nl__im__112);
#line 96
c_rt_lib0clear(&___nl__im__119);
#line 96
c_rt_lib0clear(&___nl__im__126);
#line 96
c_rt_lib0clear(&___nl__im__138);
#line 96
c_rt_lib0clear(&___nl__im__150);
#line 96
return ___nl__im__162;
#line 97
goto label_788;
#line 97
label_788:
;
#line 97
//clear ___nl__bool__5;
#line 97
c_rt_lib0clear(&___nl__im__16);
#line 97
c_rt_lib0clear(&___nl__im__28);
#line 97
c_rt_lib0clear(&___nl__im__45);
#line 97
c_rt_lib0clear(&___nl__im__57);
#line 97
c_rt_lib0clear(&___nl__im__69);
#line 97
c_rt_lib0clear(&___nl__im__81);
#line 97
c_rt_lib0clear(&___nl__im__93);
#line 97
c_rt_lib0clear(&___nl__im__105);
#line 97
c_rt_lib0clear(&___nl__im__112);
#line 97
c_rt_lib0clear(&___nl__im__119);
#line 97
c_rt_lib0clear(&___nl__im__126);
#line 97
c_rt_lib0clear(&___nl__im__138);
#line 97
c_rt_lib0clear(&___nl__im__150);
#line 97
c_rt_lib0clear(&___nl__im__162);
#line 99
c_rt_lib0clear(&___nl__im__0);
#line 99
return ___nl__im__3;
return NULL;

}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void optional_libraries_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT optional_libraries_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT optional_libraries_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
