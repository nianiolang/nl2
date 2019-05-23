
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
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
INT  ___nl__int__19 = 0;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
bool  ___nl__bool__24 = false;
INT  ___nl__int__25 = 0;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
#line 14
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1020));
#line 14
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__4));
#line 14
c_rt_lib0clear(&___nl__im__4);
#line 16
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1002));
#line 16
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 16
c_rt_lib0clear(&___nl__im__6);
#line 16
___nl__bool__5 = !___nl__bool__5;
#line 16
if(___nl__bool__5){ goto label_45;}
#line 17
___nl__int__9 = c_rt_lib0array_len((*___ref___im__2));
#line 17
___nl__int__10 = 1;
#line 17
___nl__bool__7 = ___nl__int__9 == ___nl__int__10;
#line 17
//clear ___nl__int__9;
#line 17
//clear ___nl__int__10;
#line 17
___nl__bool__8 = !___nl__bool__7;
#line 17
if(___nl__bool__8){ goto label_20;}
#line 17
___nl__int__12 = 0;
#line 17
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get((*___ref___im__2), ___nl__int__12));
#line 17
//clear ___nl__int__12;
#line 17
___nl__bool__7 = nl0is_printable(___nl__im__11);
#line 17
c_rt_lib0clear(&___nl__im__11);
#line 17
label_20:
;
#line 17
//clear ___nl__bool__8;
#line 17
___nl__bool__7 = !___nl__bool__7;
#line 17
___nl__bool__7 = !___nl__bool__7;
#line 17
if(___nl__bool__7){ goto label_30;}
#line 17
c_rt_lib0clear(&___nl__im__0);
#line 17
//clear ___nl__bool__5;
#line 17
//clear ___nl__bool__7;
#line 17
return ___nl__im__3;
#line 17
goto label_30;
#line 17
label_30:
;
#line 17
//clear ___nl__bool__7;
#line 18
___nl__int__14 = 0;
#line 18
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get((*___ref___im__2), ___nl__int__14));
#line 18
//clear ___nl__int__14;
#line 18
c_rt_lib0delete(c_olympic_io0print(___nl__im__13));
#line 18
c_rt_lib0clear(&___nl__im__13);
#line 19
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 19
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__16));
#line 19
c_rt_lib0clear(&___nl__im__16);
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
c_rt_lib0clear(&___nl__im__3);
#line 19
//clear ___nl__bool__5;
#line 19
return ___nl__im__15;
#line 20
goto label_149;
#line 20
label_45:
;
#line 20
c_rt_lib0move(&___nl__im__17,___get_global_string_const(1003));
#line 20
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__17);
#line 20
c_rt_lib0clear(&___nl__im__17);
#line 20
___nl__bool__5 = !___nl__bool__5;
#line 20
if(___nl__bool__5){ goto label_77;}
#line 21
___nl__int__19 = c_rt_lib0array_len((*___ref___im__2));
#line 21
___nl__int__20 = 0;
#line 21
___nl__bool__18 = ___nl__int__19 == ___nl__int__20;
#line 21
//clear ___nl__int__19;
#line 21
//clear ___nl__int__20;
#line 21
___nl__bool__18 = !___nl__bool__18;
#line 21
___nl__bool__18 = !___nl__bool__18;
#line 21
if(___nl__bool__18){ goto label_65;}
#line 21
c_rt_lib0clear(&___nl__im__0);
#line 21
//clear ___nl__bool__5;
#line 21
c_rt_lib0clear(&___nl__im__15);
#line 21
//clear ___nl__bool__18;
#line 21
return ___nl__im__3;
#line 21
goto label_65;
#line 21
label_65:
;
#line 21
//clear ___nl__bool__18;
#line 22
c_rt_lib0move(___ref___im__1, c_olympic_io0readln());
#line 23
c_rt_lib0move(&___nl__im__22,___get_global_string_const(36));
#line 23
c_rt_lib0move(&___nl__im__21, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__22));
#line 23
c_rt_lib0clear(&___nl__im__22);
#line 23
c_rt_lib0clear(&___nl__im__0);
#line 23
c_rt_lib0clear(&___nl__im__3);
#line 23
//clear ___nl__bool__5;
#line 23
c_rt_lib0clear(&___nl__im__15);
#line 23
return ___nl__im__21;
#line 24
goto label_149;
#line 24
label_77:
;
#line 24
c_rt_lib0move(&___nl__im__23,___get_global_string_const(1004));
#line 24
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__23);
#line 24
c_rt_lib0clear(&___nl__im__23);
#line 24
___nl__bool__5 = !___nl__bool__5;
#line 24
if(___nl__bool__5){ goto label_113;}
#line 25
___nl__int__25 = c_rt_lib0array_len((*___ref___im__2));
#line 25
___nl__int__26 = 0;
#line 25
___nl__bool__24 = ___nl__int__25 == ___nl__int__26;
#line 25
//clear ___nl__int__25;
#line 25
//clear ___nl__int__26;
#line 25
___nl__bool__24 = !___nl__bool__24;
#line 25
___nl__bool__24 = !___nl__bool__24;
#line 25
if(___nl__bool__24){ goto label_98;}
#line 25
c_rt_lib0clear(&___nl__im__0);
#line 25
//clear ___nl__bool__5;
#line 25
c_rt_lib0clear(&___nl__im__15);
#line 25
c_rt_lib0clear(&___nl__im__21);
#line 25
//clear ___nl__bool__24;
#line 25
return ___nl__im__3;
#line 25
goto label_98;
#line 25
label_98:
;
#line 25
//clear ___nl__bool__24;
#line 26
___nl__int__27 = c_olympic_io0read_int();
#line 26
c_rt_lib0move(___ref___im__1, c_rt_lib0int_new(___nl__int__27));
#line 26
//clear ___nl__int__27;
#line 27
c_rt_lib0move(&___nl__im__29,___get_global_string_const(36));
#line 27
c_rt_lib0move(&___nl__im__28, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__29));
#line 27
c_rt_lib0clear(&___nl__im__29);
#line 27
c_rt_lib0clear(&___nl__im__0);
#line 27
c_rt_lib0clear(&___nl__im__3);
#line 27
//clear ___nl__bool__5;
#line 27
c_rt_lib0clear(&___nl__im__15);
#line 27
c_rt_lib0clear(&___nl__im__21);
#line 27
return ___nl__im__28;
#line 28
goto label_149;
#line 28
label_113:
;
#line 28
c_rt_lib0move(&___nl__im__30,___get_global_string_const(1005));
#line 28
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__30);
#line 28
c_rt_lib0clear(&___nl__im__30);
#line 28
___nl__bool__5 = !___nl__bool__5;
#line 28
if(___nl__bool__5){ goto label_149;}
#line 29
___nl__int__32 = c_rt_lib0array_len((*___ref___im__2));
#line 29
___nl__int__33 = 0;
#line 29
___nl__bool__31 = ___nl__int__32 == ___nl__int__33;
#line 29
//clear ___nl__int__32;
#line 29
//clear ___nl__int__33;
#line 29
___nl__bool__31 = !___nl__bool__31;
#line 29
___nl__bool__31 = !___nl__bool__31;
#line 29
if(___nl__bool__31){ goto label_135;}
#line 29
c_rt_lib0clear(&___nl__im__0);
#line 29
//clear ___nl__bool__5;
#line 29
c_rt_lib0clear(&___nl__im__15);
#line 29
c_rt_lib0clear(&___nl__im__21);
#line 29
c_rt_lib0clear(&___nl__im__28);
#line 29
//clear ___nl__bool__31;
#line 29
return ___nl__im__3;
#line 29
goto label_135;
#line 29
label_135:
;
#line 29
//clear ___nl__bool__31;
#line 30
c_rt_lib0move(___ref___im__1, c_olympic_io0read_char());
#line 31
c_rt_lib0move(&___nl__im__35,___get_global_string_const(36));
#line 31
c_rt_lib0move(&___nl__im__34, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__35));
#line 31
c_rt_lib0clear(&___nl__im__35);
#line 31
c_rt_lib0clear(&___nl__im__0);
#line 31
c_rt_lib0clear(&___nl__im__3);
#line 31
//clear ___nl__bool__5;
#line 31
c_rt_lib0clear(&___nl__im__15);
#line 31
c_rt_lib0clear(&___nl__im__21);
#line 31
c_rt_lib0clear(&___nl__im__28);
#line 31
return ___nl__im__34;
#line 32
goto label_149;
#line 32
label_149:
;
#line 32
//clear ___nl__bool__5;
#line 32
c_rt_lib0clear(&___nl__im__15);
#line 32
c_rt_lib0clear(&___nl__im__21);
#line 32
c_rt_lib0clear(&___nl__im__28);
#line 32
c_rt_lib0clear(&___nl__im__34);
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
ImmT  ___nl__im__11 = NULL;
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
bool  ___nl__bool__18 = false;
bool  ___nl__bool__19 = false;
INT  ___nl__int__20 = 0;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
bool  ___nl__bool__29 = false;
bool  ___nl__bool__30 = false;
bool  ___nl__bool__31 = false;
INT  ___nl__int__32 = 0;
INT  ___nl__int__33 = 0;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
ImmT  ___nl__im__36 = NULL;
INT  ___nl__int__37 = 0;
ImmT  ___nl__im__38 = NULL;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
INT  ___nl__int__41 = 0;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
bool  ___nl__bool__45 = false;
bool  ___nl__bool__46 = false;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
ImmT  ___nl__im__49 = NULL;
INT  ___nl__int__50 = 0;
ImmT  ___nl__im__51 = NULL;
INT  ___nl__int__52 = 0;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
bool  ___nl__bool__56 = false;
bool  ___nl__bool__57 = false;
INT  ___nl__int__58 = 0;
INT  ___nl__int__59 = 0;
ImmT  ___nl__im__60 = NULL;
INT  ___nl__int__61 = 0;
ImmT  ___nl__im__62 = NULL;
INT  ___nl__int__63 = 0;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
bool  ___nl__bool__67 = false;
bool  ___nl__bool__68 = false;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
ImmT  ___nl__im__71 = NULL;
INT  ___nl__int__72 = 0;
ImmT  ___nl__im__73 = NULL;
INT  ___nl__int__74 = 0;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
bool  ___nl__bool__78 = false;
bool  ___nl__bool__79 = false;
INT  ___nl__int__80 = 0;
INT  ___nl__int__81 = 0;
ImmT  ___nl__im__82 = NULL;
INT  ___nl__int__83 = 0;
ImmT  ___nl__im__84 = NULL;
INT  ___nl__int__85 = 0;
ImmT  ___nl__im__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
bool  ___nl__bool__89 = false;
bool  ___nl__bool__90 = false;
INT  ___nl__int__91 = 0;
INT  ___nl__int__92 = 0;
ImmT  ___nl__im__93 = NULL;
INT  ___nl__int__94 = 0;
ImmT  ___nl__im__95 = NULL;
INT  ___nl__int__96 = 0;
ImmT  ___nl__im__97 = NULL;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
bool  ___nl__bool__100 = false;
INT  ___nl__int__101 = 0;
INT  ___nl__int__102 = 0;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
bool  ___nl__bool__106 = false;
INT  ___nl__int__107 = 0;
INT  ___nl__int__108 = 0;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
bool  ___nl__bool__112 = false;
INT  ___nl__int__113 = 0;
INT  ___nl__int__114 = 0;
ImmT  ___nl__im__115 = NULL;
ImmT  ___nl__im__116 = NULL;
ImmT  ___nl__im__117 = NULL;
bool  ___nl__bool__118 = false;
bool  ___nl__bool__119 = false;
INT  ___nl__int__120 = 0;
INT  ___nl__int__121 = 0;
ImmT  ___nl__im__122 = NULL;
INT  ___nl__int__123 = 0;
ImmT  ___nl__im__124 = NULL;
INT  ___nl__int__125 = 0;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
bool  ___nl__bool__129 = false;
bool  ___nl__bool__130 = false;
INT  ___nl__int__131 = 0;
INT  ___nl__int__132 = 0;
ImmT  ___nl__im__133 = NULL;
INT  ___nl__int__134 = 0;
ImmT  ___nl__im__135 = NULL;
INT  ___nl__int__136 = 0;
ImmT  ___nl__im__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
bool  ___nl__bool__140 = false;
bool  ___nl__bool__141 = false;
INT  ___nl__int__142 = 0;
INT  ___nl__int__143 = 0;
ImmT  ___nl__im__144 = NULL;
INT  ___nl__int__145 = 0;
ImmT  ___nl__im__146 = NULL;
INT  ___nl__int__147 = 0;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
#line 39
c_rt_lib0move(&___nl__im__4,___get_global_string_const(1020));
#line 39
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(82), ___nl__im__4));
#line 39
c_rt_lib0clear(&___nl__im__4);
#line 41
c_rt_lib0move(&___nl__im__6,___get_global_string_const(1006));
#line 41
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__6);
#line 41
c_rt_lib0clear(&___nl__im__6);
#line 41
___nl__bool__5 = !___nl__bool__5;
#line 41
if(___nl__bool__5){ goto label_45;}
#line 42
___nl__int__9 = c_rt_lib0array_len((*___ref___im__2));
#line 42
___nl__int__10 = 1;
#line 42
___nl__bool__7 = ___nl__int__9 == ___nl__int__10;
#line 42
//clear ___nl__int__9;
#line 42
//clear ___nl__int__10;
#line 42
___nl__bool__8 = !___nl__bool__7;
#line 42
if(___nl__bool__8){ goto label_20;}
#line 42
___nl__int__12 = 0;
#line 42
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get((*___ref___im__2), ___nl__int__12));
#line 42
//clear ___nl__int__12;
#line 42
___nl__bool__7 = nl0is_printable(___nl__im__11);
#line 42
c_rt_lib0clear(&___nl__im__11);
#line 42
label_20:
;
#line 42
//clear ___nl__bool__8;
#line 42
___nl__bool__7 = !___nl__bool__7;
#line 42
___nl__bool__7 = !___nl__bool__7;
#line 42
if(___nl__bool__7){ goto label_30;}
#line 42
c_rt_lib0clear(&___nl__im__0);
#line 42
//clear ___nl__bool__5;
#line 42
//clear ___nl__bool__7;
#line 42
return ___nl__im__3;
#line 42
goto label_30;
#line 42
label_30:
;
#line 42
//clear ___nl__bool__7;
#line 43
___nl__int__14 = 0;
#line 43
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get((*___ref___im__2), ___nl__int__14));
#line 43
//clear ___nl__int__14;
#line 43
c_rt_lib0delete(c_fe_lib0print(___nl__im__13));
#line 43
c_rt_lib0clear(&___nl__im__13);
#line 44
c_rt_lib0move(&___nl__im__16,___get_global_string_const(36));
#line 44
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__16));
#line 44
c_rt_lib0clear(&___nl__im__16);
#line 44
c_rt_lib0clear(&___nl__im__0);
#line 44
c_rt_lib0clear(&___nl__im__3);
#line 44
//clear ___nl__bool__5;
#line 44
return ___nl__im__15;
#line 45
goto label_760;
#line 45
label_45:
;
#line 45
c_rt_lib0move(&___nl__im__17,___get_global_string_const(1007));
#line 45
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__17);
#line 45
c_rt_lib0clear(&___nl__im__17);
#line 45
___nl__bool__5 = !___nl__bool__5;
#line 45
if(___nl__bool__5){ goto label_90;}
#line 46
___nl__int__20 = c_rt_lib0array_len((*___ref___im__2));
#line 46
___nl__int__21 = 1;
#line 46
___nl__bool__18 = ___nl__int__20 == ___nl__int__21;
#line 46
//clear ___nl__int__20;
#line 46
//clear ___nl__int__21;
#line 46
___nl__bool__19 = !___nl__bool__18;
#line 46
if(___nl__bool__19){ goto label_63;}
#line 46
___nl__int__23 = 0;
#line 46
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get((*___ref___im__2), ___nl__int__23));
#line 46
//clear ___nl__int__23;
#line 46
___nl__bool__18 = nl0is_printable(___nl__im__22);
#line 46
c_rt_lib0clear(&___nl__im__22);
#line 46
label_63:
;
#line 46
//clear ___nl__bool__19;
#line 46
___nl__bool__18 = !___nl__bool__18;
#line 46
___nl__bool__18 = !___nl__bool__18;
#line 46
if(___nl__bool__18){ goto label_74;}
#line 46
c_rt_lib0clear(&___nl__im__0);
#line 46
//clear ___nl__bool__5;
#line 46
c_rt_lib0clear(&___nl__im__15);
#line 46
//clear ___nl__bool__18;
#line 46
return ___nl__im__3;
#line 46
goto label_74;
#line 46
label_74:
;
#line 46
//clear ___nl__bool__18;
#line 47
___nl__int__25 = 0;
#line 47
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_get((*___ref___im__2), ___nl__int__25));
#line 47
//clear ___nl__int__25;
#line 47
c_rt_lib0move(___ref___im__1, c_fe_lib0file_to_string(___nl__im__24));
#line 47
c_rt_lib0clear(&___nl__im__24);
#line 48
c_rt_lib0move(&___nl__im__27,___get_global_string_const(36));
#line 48
c_rt_lib0move(&___nl__im__26, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__27));
#line 48
c_rt_lib0clear(&___nl__im__27);
#line 48
c_rt_lib0clear(&___nl__im__0);
#line 48
c_rt_lib0clear(&___nl__im__3);
#line 48
//clear ___nl__bool__5;
#line 48
c_rt_lib0clear(&___nl__im__15);
#line 48
return ___nl__im__26;
#line 49
goto label_760;
#line 49
label_90:
;
#line 49
c_rt_lib0move(&___nl__im__28,___get_global_string_const(1008));
#line 49
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__28);
#line 49
c_rt_lib0clear(&___nl__im__28);
#line 49
___nl__bool__5 = !___nl__bool__5;
#line 49
if(___nl__bool__5){ goto label_150;}
#line 50
___nl__int__32 = c_rt_lib0array_len((*___ref___im__2));
#line 50
___nl__int__33 = 2;
#line 50
___nl__bool__29 = ___nl__int__32 == ___nl__int__33;
#line 50
//clear ___nl__int__32;
#line 50
//clear ___nl__int__33;
#line 50
___nl__bool__31 = !___nl__bool__29;
#line 50
if(___nl__bool__31){ goto label_108;}
#line 50
___nl__int__35 = 0;
#line 50
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_get((*___ref___im__2), ___nl__int__35));
#line 50
//clear ___nl__int__35;
#line 50
___nl__bool__29 = nl0is_printable(___nl__im__34);
#line 50
c_rt_lib0clear(&___nl__im__34);
#line 50
label_108:
;
#line 50
//clear ___nl__bool__31;
#line 50
___nl__bool__30 = !___nl__bool__29;
#line 50
if(___nl__bool__30){ goto label_117;}
#line 50
___nl__int__37 = 1;
#line 50
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_get((*___ref___im__2), ___nl__int__37));
#line 50
//clear ___nl__int__37;
#line 50
___nl__bool__29 = nl0is_printable(___nl__im__36);
#line 50
c_rt_lib0clear(&___nl__im__36);
#line 50
label_117:
;
#line 50
//clear ___nl__bool__30;
#line 50
___nl__bool__29 = !___nl__bool__29;
#line 50
___nl__bool__29 = !___nl__bool__29;
#line 50
if(___nl__bool__29){ goto label_129;}
#line 50
c_rt_lib0clear(&___nl__im__0);
#line 50
//clear ___nl__bool__5;
#line 50
c_rt_lib0clear(&___nl__im__15);
#line 50
c_rt_lib0clear(&___nl__im__26);
#line 50
//clear ___nl__bool__29;
#line 50
return ___nl__im__3;
#line 50
goto label_129;
#line 50
label_129:
;
#line 50
//clear ___nl__bool__29;
#line 51
___nl__int__39 = 0;
#line 51
c_rt_lib0move(&___nl__im__38, c_rt_lib0array_get((*___ref___im__2), ___nl__int__39));
#line 51
//clear ___nl__int__39;
#line 51
___nl__int__41 = 1;
#line 51
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get((*___ref___im__2), ___nl__int__41));
#line 51
//clear ___nl__int__41;
#line 51
c_rt_lib0move(___ref___im__1, c_fe_lib0string_to_file(___nl__im__38, ___nl__im__40));
#line 51
c_rt_lib0clear(&___nl__im__38);
#line 51
c_rt_lib0clear(&___nl__im__40);
#line 52
c_rt_lib0move(&___nl__im__43,___get_global_string_const(36));
#line 52
c_rt_lib0move(&___nl__im__42, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__43));
#line 52
c_rt_lib0clear(&___nl__im__43);
#line 52
c_rt_lib0clear(&___nl__im__0);
#line 52
c_rt_lib0clear(&___nl__im__3);
#line 52
//clear ___nl__bool__5;
#line 52
c_rt_lib0clear(&___nl__im__15);
#line 52
c_rt_lib0clear(&___nl__im__26);
#line 52
return ___nl__im__42;
#line 53
goto label_760;
#line 53
label_150:
;
#line 53
c_rt_lib0move(&___nl__im__44,___get_global_string_const(1009));
#line 53
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__44);
#line 53
c_rt_lib0clear(&___nl__im__44);
#line 53
___nl__bool__5 = !___nl__bool__5;
#line 53
if(___nl__bool__5){ goto label_199;}
#line 54
___nl__int__47 = c_rt_lib0array_len((*___ref___im__2));
#line 54
___nl__int__48 = 1;
#line 54
___nl__bool__45 = ___nl__int__47 == ___nl__int__48;
#line 54
//clear ___nl__int__47;
#line 54
//clear ___nl__int__48;
#line 54
___nl__bool__46 = !___nl__bool__45;
#line 54
if(___nl__bool__46){ goto label_168;}
#line 54
___nl__int__50 = 0;
#line 54
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_get((*___ref___im__2), ___nl__int__50));
#line 54
//clear ___nl__int__50;
#line 54
___nl__bool__45 = nl0is_printable(___nl__im__49);
#line 54
c_rt_lib0clear(&___nl__im__49);
#line 54
label_168:
;
#line 54
//clear ___nl__bool__46;
#line 54
___nl__bool__45 = !___nl__bool__45;
#line 54
___nl__bool__45 = !___nl__bool__45;
#line 54
if(___nl__bool__45){ goto label_181;}
#line 54
c_rt_lib0clear(&___nl__im__0);
#line 54
//clear ___nl__bool__5;
#line 54
c_rt_lib0clear(&___nl__im__15);
#line 54
c_rt_lib0clear(&___nl__im__26);
#line 54
c_rt_lib0clear(&___nl__im__42);
#line 54
//clear ___nl__bool__45;
#line 54
return ___nl__im__3;
#line 54
goto label_181;
#line 54
label_181:
;
#line 54
//clear ___nl__bool__45;
#line 55
___nl__int__52 = 0;
#line 55
c_rt_lib0move(&___nl__im__51, c_rt_lib0array_get((*___ref___im__2), ___nl__int__52));
#line 55
//clear ___nl__int__52;
#line 55
c_rt_lib0move(___ref___im__1, c_fe_lib0get_file_size(___nl__im__51));
#line 55
c_rt_lib0clear(&___nl__im__51);
#line 56
c_rt_lib0move(&___nl__im__54,___get_global_string_const(36));
#line 56
c_rt_lib0move(&___nl__im__53, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__54));
#line 56
c_rt_lib0clear(&___nl__im__54);
#line 56
c_rt_lib0clear(&___nl__im__0);
#line 56
c_rt_lib0clear(&___nl__im__3);
#line 56
//clear ___nl__bool__5;
#line 56
c_rt_lib0clear(&___nl__im__15);
#line 56
c_rt_lib0clear(&___nl__im__26);
#line 56
c_rt_lib0clear(&___nl__im__42);
#line 56
return ___nl__im__53;
#line 57
goto label_760;
#line 57
label_199:
;
#line 57
c_rt_lib0move(&___nl__im__55,___get_global_string_const(1010));
#line 57
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__55);
#line 57
c_rt_lib0clear(&___nl__im__55);
#line 57
___nl__bool__5 = !___nl__bool__5;
#line 57
if(___nl__bool__5){ goto label_250;}
#line 58
___nl__int__58 = c_rt_lib0array_len((*___ref___im__2));
#line 58
___nl__int__59 = 1;
#line 58
___nl__bool__56 = ___nl__int__58 == ___nl__int__59;
#line 58
//clear ___nl__int__58;
#line 58
//clear ___nl__int__59;
#line 58
___nl__bool__57 = !___nl__bool__56;
#line 58
if(___nl__bool__57){ goto label_217;}
#line 58
___nl__int__61 = 0;
#line 58
c_rt_lib0move(&___nl__im__60, c_rt_lib0array_get((*___ref___im__2), ___nl__int__61));
#line 58
//clear ___nl__int__61;
#line 58
___nl__bool__56 = nl0is_printable(___nl__im__60);
#line 58
c_rt_lib0clear(&___nl__im__60);
#line 58
label_217:
;
#line 58
//clear ___nl__bool__57;
#line 58
___nl__bool__56 = !___nl__bool__56;
#line 58
___nl__bool__56 = !___nl__bool__56;
#line 58
if(___nl__bool__56){ goto label_231;}
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
//clear ___nl__bool__5;
#line 58
c_rt_lib0clear(&___nl__im__15);
#line 58
c_rt_lib0clear(&___nl__im__26);
#line 58
c_rt_lib0clear(&___nl__im__42);
#line 58
c_rt_lib0clear(&___nl__im__53);
#line 58
//clear ___nl__bool__56;
#line 58
return ___nl__im__3;
#line 58
goto label_231;
#line 58
label_231:
;
#line 58
//clear ___nl__bool__56;
#line 59
___nl__int__63 = 0;
#line 59
c_rt_lib0move(&___nl__im__62, c_rt_lib0array_get((*___ref___im__2), ___nl__int__63));
#line 59
//clear ___nl__int__63;
#line 59
c_rt_lib0move(___ref___im__1, c_fe_lib0get_modif_time(___nl__im__62));
#line 59
c_rt_lib0clear(&___nl__im__62);
#line 60
c_rt_lib0move(&___nl__im__65,___get_global_string_const(36));
#line 60
c_rt_lib0move(&___nl__im__64, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__65));
#line 60
c_rt_lib0clear(&___nl__im__65);
#line 60
c_rt_lib0clear(&___nl__im__0);
#line 60
c_rt_lib0clear(&___nl__im__3);
#line 60
//clear ___nl__bool__5;
#line 60
c_rt_lib0clear(&___nl__im__15);
#line 60
c_rt_lib0clear(&___nl__im__26);
#line 60
c_rt_lib0clear(&___nl__im__42);
#line 60
c_rt_lib0clear(&___nl__im__53);
#line 60
return ___nl__im__64;
#line 61
goto label_760;
#line 61
label_250:
;
#line 61
c_rt_lib0move(&___nl__im__66,___get_global_string_const(1011));
#line 61
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__66);
#line 61
c_rt_lib0clear(&___nl__im__66);
#line 61
___nl__bool__5 = !___nl__bool__5;
#line 61
if(___nl__bool__5){ goto label_303;}
#line 62
___nl__int__69 = c_rt_lib0array_len((*___ref___im__2));
#line 62
___nl__int__70 = 1;
#line 62
___nl__bool__67 = ___nl__int__69 == ___nl__int__70;
#line 62
//clear ___nl__int__69;
#line 62
//clear ___nl__int__70;
#line 62
___nl__bool__68 = !___nl__bool__67;
#line 62
if(___nl__bool__68){ goto label_268;}
#line 62
___nl__int__72 = 0;
#line 62
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_get((*___ref___im__2), ___nl__int__72));
#line 62
//clear ___nl__int__72;
#line 62
___nl__bool__67 = nl0is_printable(___nl__im__71);
#line 62
c_rt_lib0clear(&___nl__im__71);
#line 62
label_268:
;
#line 62
//clear ___nl__bool__68;
#line 62
___nl__bool__67 = !___nl__bool__67;
#line 62
___nl__bool__67 = !___nl__bool__67;
#line 62
if(___nl__bool__67){ goto label_283;}
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
//clear ___nl__bool__5;
#line 62
c_rt_lib0clear(&___nl__im__15);
#line 62
c_rt_lib0clear(&___nl__im__26);
#line 62
c_rt_lib0clear(&___nl__im__42);
#line 62
c_rt_lib0clear(&___nl__im__53);
#line 62
c_rt_lib0clear(&___nl__im__64);
#line 62
//clear ___nl__bool__67;
#line 62
return ___nl__im__3;
#line 62
goto label_283;
#line 62
label_283:
;
#line 62
//clear ___nl__bool__67;
#line 63
___nl__int__74 = 0;
#line 63
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_get((*___ref___im__2), ___nl__int__74));
#line 63
//clear ___nl__int__74;
#line 63
c_rt_lib0move(___ref___im__1, c_fe_lib0get_module_files(___nl__im__73));
#line 63
c_rt_lib0clear(&___nl__im__73);
#line 64
c_rt_lib0move(&___nl__im__76,___get_global_string_const(36));
#line 64
c_rt_lib0move(&___nl__im__75, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__76));
#line 64
c_rt_lib0clear(&___nl__im__76);
#line 64
c_rt_lib0clear(&___nl__im__0);
#line 64
c_rt_lib0clear(&___nl__im__3);
#line 64
//clear ___nl__bool__5;
#line 64
c_rt_lib0clear(&___nl__im__15);
#line 64
c_rt_lib0clear(&___nl__im__26);
#line 64
c_rt_lib0clear(&___nl__im__42);
#line 64
c_rt_lib0clear(&___nl__im__53);
#line 64
c_rt_lib0clear(&___nl__im__64);
#line 64
return ___nl__im__75;
#line 65
goto label_760;
#line 65
label_303:
;
#line 65
c_rt_lib0move(&___nl__im__77,___get_global_string_const(1012));
#line 65
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__77);
#line 65
c_rt_lib0clear(&___nl__im__77);
#line 65
___nl__bool__5 = !___nl__bool__5;
#line 65
if(___nl__bool__5){ goto label_358;}
#line 66
___nl__int__80 = c_rt_lib0array_len((*___ref___im__2));
#line 66
___nl__int__81 = 1;
#line 66
___nl__bool__78 = ___nl__int__80 == ___nl__int__81;
#line 66
//clear ___nl__int__80;
#line 66
//clear ___nl__int__81;
#line 66
___nl__bool__79 = !___nl__bool__78;
#line 66
if(___nl__bool__79){ goto label_321;}
#line 66
___nl__int__83 = 0;
#line 66
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get((*___ref___im__2), ___nl__int__83));
#line 66
//clear ___nl__int__83;
#line 66
___nl__bool__78 = nl0is_printable(___nl__im__82);
#line 66
c_rt_lib0clear(&___nl__im__82);
#line 66
label_321:
;
#line 66
//clear ___nl__bool__79;
#line 66
___nl__bool__78 = !___nl__bool__78;
#line 66
___nl__bool__78 = !___nl__bool__78;
#line 66
if(___nl__bool__78){ goto label_337;}
#line 66
c_rt_lib0clear(&___nl__im__0);
#line 66
//clear ___nl__bool__5;
#line 66
c_rt_lib0clear(&___nl__im__15);
#line 66
c_rt_lib0clear(&___nl__im__26);
#line 66
c_rt_lib0clear(&___nl__im__42);
#line 66
c_rt_lib0clear(&___nl__im__53);
#line 66
c_rt_lib0clear(&___nl__im__64);
#line 66
c_rt_lib0clear(&___nl__im__75);
#line 66
//clear ___nl__bool__78;
#line 66
return ___nl__im__3;
#line 66
goto label_337;
#line 66
label_337:
;
#line 66
//clear ___nl__bool__78;
#line 67
___nl__int__85 = 0;
#line 67
c_rt_lib0move(&___nl__im__84, c_rt_lib0array_get((*___ref___im__2), ___nl__int__85));
#line 67
//clear ___nl__int__85;
#line 67
c_rt_lib0move(___ref___im__1, c_fe_lib0get_module_files_rec(___nl__im__84));
#line 67
c_rt_lib0clear(&___nl__im__84);
#line 68
c_rt_lib0move(&___nl__im__87,___get_global_string_const(36));
#line 68
c_rt_lib0move(&___nl__im__86, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__87));
#line 68
c_rt_lib0clear(&___nl__im__87);
#line 68
c_rt_lib0clear(&___nl__im__0);
#line 68
c_rt_lib0clear(&___nl__im__3);
#line 68
//clear ___nl__bool__5;
#line 68
c_rt_lib0clear(&___nl__im__15);
#line 68
c_rt_lib0clear(&___nl__im__26);
#line 68
c_rt_lib0clear(&___nl__im__42);
#line 68
c_rt_lib0clear(&___nl__im__53);
#line 68
c_rt_lib0clear(&___nl__im__64);
#line 68
c_rt_lib0clear(&___nl__im__75);
#line 68
return ___nl__im__86;
#line 69
goto label_760;
#line 69
label_358:
;
#line 69
c_rt_lib0move(&___nl__im__88,___get_global_string_const(1013));
#line 69
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__88);
#line 69
c_rt_lib0clear(&___nl__im__88);
#line 69
___nl__bool__5 = !___nl__bool__5;
#line 69
if(___nl__bool__5){ goto label_415;}
#line 70
___nl__int__91 = c_rt_lib0array_len((*___ref___im__2));
#line 70
___nl__int__92 = 1;
#line 70
___nl__bool__89 = ___nl__int__91 == ___nl__int__92;
#line 70
//clear ___nl__int__91;
#line 70
//clear ___nl__int__92;
#line 70
___nl__bool__90 = !___nl__bool__89;
#line 70
if(___nl__bool__90){ goto label_376;}
#line 70
___nl__int__94 = 0;
#line 70
c_rt_lib0move(&___nl__im__93, c_rt_lib0array_get((*___ref___im__2), ___nl__int__94));
#line 70
//clear ___nl__int__94;
#line 70
___nl__bool__89 = nl0is_printable(___nl__im__93);
#line 70
c_rt_lib0clear(&___nl__im__93);
#line 70
label_376:
;
#line 70
//clear ___nl__bool__90;
#line 70
___nl__bool__89 = !___nl__bool__89;
#line 70
___nl__bool__89 = !___nl__bool__89;
#line 70
if(___nl__bool__89){ goto label_393;}
#line 70
c_rt_lib0clear(&___nl__im__0);
#line 70
//clear ___nl__bool__5;
#line 70
c_rt_lib0clear(&___nl__im__15);
#line 70
c_rt_lib0clear(&___nl__im__26);
#line 70
c_rt_lib0clear(&___nl__im__42);
#line 70
c_rt_lib0clear(&___nl__im__53);
#line 70
c_rt_lib0clear(&___nl__im__64);
#line 70
c_rt_lib0clear(&___nl__im__75);
#line 70
c_rt_lib0clear(&___nl__im__86);
#line 70
//clear ___nl__bool__89;
#line 70
return ___nl__im__3;
#line 70
goto label_393;
#line 70
label_393:
;
#line 70
//clear ___nl__bool__89;
#line 71
___nl__int__96 = 0;
#line 71
c_rt_lib0move(&___nl__im__95, c_rt_lib0array_get((*___ref___im__2), ___nl__int__96));
#line 71
//clear ___nl__int__96;
#line 71
c_rt_lib0move(___ref___im__1, c_fe_lib0mk_path(___nl__im__95));
#line 71
c_rt_lib0clear(&___nl__im__95);
#line 72
c_rt_lib0move(&___nl__im__98,___get_global_string_const(36));
#line 72
c_rt_lib0move(&___nl__im__97, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__98));
#line 72
c_rt_lib0clear(&___nl__im__98);
#line 72
c_rt_lib0clear(&___nl__im__0);
#line 72
c_rt_lib0clear(&___nl__im__3);
#line 72
//clear ___nl__bool__5;
#line 72
c_rt_lib0clear(&___nl__im__15);
#line 72
c_rt_lib0clear(&___nl__im__26);
#line 72
c_rt_lib0clear(&___nl__im__42);
#line 72
c_rt_lib0clear(&___nl__im__53);
#line 72
c_rt_lib0clear(&___nl__im__64);
#line 72
c_rt_lib0clear(&___nl__im__75);
#line 72
c_rt_lib0clear(&___nl__im__86);
#line 72
return ___nl__im__97;
#line 73
goto label_760;
#line 73
label_415:
;
#line 73
c_rt_lib0move(&___nl__im__99,___get_global_string_const(1014));
#line 73
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__99);
#line 73
c_rt_lib0clear(&___nl__im__99);
#line 73
___nl__bool__5 = !___nl__bool__5;
#line 73
if(___nl__bool__5){ goto label_461;}
#line 74
___nl__int__101 = c_rt_lib0array_len((*___ref___im__2));
#line 74
___nl__int__102 = 0;
#line 74
___nl__bool__100 = ___nl__int__101 == ___nl__int__102;
#line 74
//clear ___nl__int__101;
#line 74
//clear ___nl__int__102;
#line 74
___nl__bool__100 = !___nl__bool__100;
#line 74
___nl__bool__100 = !___nl__bool__100;
#line 74
if(___nl__bool__100){ goto label_442;}
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
//clear ___nl__bool__5;
#line 74
c_rt_lib0clear(&___nl__im__15);
#line 74
c_rt_lib0clear(&___nl__im__26);
#line 74
c_rt_lib0clear(&___nl__im__42);
#line 74
c_rt_lib0clear(&___nl__im__53);
#line 74
c_rt_lib0clear(&___nl__im__64);
#line 74
c_rt_lib0clear(&___nl__im__75);
#line 74
c_rt_lib0clear(&___nl__im__86);
#line 74
c_rt_lib0clear(&___nl__im__97);
#line 74
//clear ___nl__bool__100;
#line 74
return ___nl__im__3;
#line 74
goto label_442;
#line 74
label_442:
;
#line 74
//clear ___nl__bool__100;
#line 75
c_rt_lib0move(___ref___im__1, c_fe_lib0get_time());
#line 76
c_rt_lib0move(&___nl__im__104,___get_global_string_const(36));
#line 76
c_rt_lib0move(&___nl__im__103, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__104));
#line 76
c_rt_lib0clear(&___nl__im__104);
#line 76
c_rt_lib0clear(&___nl__im__0);
#line 76
c_rt_lib0clear(&___nl__im__3);
#line 76
//clear ___nl__bool__5;
#line 76
c_rt_lib0clear(&___nl__im__15);
#line 76
c_rt_lib0clear(&___nl__im__26);
#line 76
c_rt_lib0clear(&___nl__im__42);
#line 76
c_rt_lib0clear(&___nl__im__53);
#line 76
c_rt_lib0clear(&___nl__im__64);
#line 76
c_rt_lib0clear(&___nl__im__75);
#line 76
c_rt_lib0clear(&___nl__im__86);
#line 76
c_rt_lib0clear(&___nl__im__97);
#line 76
return ___nl__im__103;
#line 77
goto label_760;
#line 77
label_461:
;
#line 77
c_rt_lib0move(&___nl__im__105,___get_global_string_const(1015));
#line 77
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__105);
#line 77
c_rt_lib0clear(&___nl__im__105);
#line 77
___nl__bool__5 = !___nl__bool__5;
#line 77
if(___nl__bool__5){ goto label_509;}
#line 78
___nl__int__107 = c_rt_lib0array_len((*___ref___im__2));
#line 78
___nl__int__108 = 0;
#line 78
___nl__bool__106 = ___nl__int__107 == ___nl__int__108;
#line 78
//clear ___nl__int__107;
#line 78
//clear ___nl__int__108;
#line 78
___nl__bool__106 = !___nl__bool__106;
#line 78
___nl__bool__106 = !___nl__bool__106;
#line 78
if(___nl__bool__106){ goto label_489;}
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
//clear ___nl__bool__5;
#line 78
c_rt_lib0clear(&___nl__im__15);
#line 78
c_rt_lib0clear(&___nl__im__26);
#line 78
c_rt_lib0clear(&___nl__im__42);
#line 78
c_rt_lib0clear(&___nl__im__53);
#line 78
c_rt_lib0clear(&___nl__im__64);
#line 78
c_rt_lib0clear(&___nl__im__75);
#line 78
c_rt_lib0clear(&___nl__im__86);
#line 78
c_rt_lib0clear(&___nl__im__97);
#line 78
c_rt_lib0clear(&___nl__im__103);
#line 78
//clear ___nl__bool__106;
#line 78
return ___nl__im__3;
#line 78
goto label_489;
#line 78
label_489:
;
#line 78
//clear ___nl__bool__106;
#line 79
c_rt_lib0move(___ref___im__1, c_fe_lib0get_pid());
#line 80
c_rt_lib0move(&___nl__im__110,___get_global_string_const(36));
#line 80
c_rt_lib0move(&___nl__im__109, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__110));
#line 80
c_rt_lib0clear(&___nl__im__110);
#line 80
c_rt_lib0clear(&___nl__im__0);
#line 80
c_rt_lib0clear(&___nl__im__3);
#line 80
//clear ___nl__bool__5;
#line 80
c_rt_lib0clear(&___nl__im__15);
#line 80
c_rt_lib0clear(&___nl__im__26);
#line 80
c_rt_lib0clear(&___nl__im__42);
#line 80
c_rt_lib0clear(&___nl__im__53);
#line 80
c_rt_lib0clear(&___nl__im__64);
#line 80
c_rt_lib0clear(&___nl__im__75);
#line 80
c_rt_lib0clear(&___nl__im__86);
#line 80
c_rt_lib0clear(&___nl__im__97);
#line 80
c_rt_lib0clear(&___nl__im__103);
#line 80
return ___nl__im__109;
#line 81
goto label_760;
#line 81
label_509:
;
#line 81
c_rt_lib0move(&___nl__im__111,___get_global_string_const(1016));
#line 81
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__111);
#line 81
c_rt_lib0clear(&___nl__im__111);
#line 81
___nl__bool__5 = !___nl__bool__5;
#line 81
if(___nl__bool__5){ goto label_559;}
#line 82
___nl__int__113 = c_rt_lib0array_len((*___ref___im__2));
#line 82
___nl__int__114 = 0;
#line 82
___nl__bool__112 = ___nl__int__113 == ___nl__int__114;
#line 82
//clear ___nl__int__113;
#line 82
//clear ___nl__int__114;
#line 82
___nl__bool__112 = !___nl__bool__112;
#line 82
___nl__bool__112 = !___nl__bool__112;
#line 82
if(___nl__bool__112){ goto label_538;}
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
//clear ___nl__bool__5;
#line 82
c_rt_lib0clear(&___nl__im__15);
#line 82
c_rt_lib0clear(&___nl__im__26);
#line 82
c_rt_lib0clear(&___nl__im__42);
#line 82
c_rt_lib0clear(&___nl__im__53);
#line 82
c_rt_lib0clear(&___nl__im__64);
#line 82
c_rt_lib0clear(&___nl__im__75);
#line 82
c_rt_lib0clear(&___nl__im__86);
#line 82
c_rt_lib0clear(&___nl__im__97);
#line 82
c_rt_lib0clear(&___nl__im__103);
#line 82
c_rt_lib0clear(&___nl__im__109);
#line 82
//clear ___nl__bool__112;
#line 82
return ___nl__im__3;
#line 82
goto label_538;
#line 82
label_538:
;
#line 82
//clear ___nl__bool__112;
#line 83
c_rt_lib0move(___ref___im__1, c_fe_lib0time());
#line 84
c_rt_lib0move(&___nl__im__116,___get_global_string_const(36));
#line 84
c_rt_lib0move(&___nl__im__115, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__116));
#line 84
c_rt_lib0clear(&___nl__im__116);
#line 84
c_rt_lib0clear(&___nl__im__0);
#line 84
c_rt_lib0clear(&___nl__im__3);
#line 84
//clear ___nl__bool__5;
#line 84
c_rt_lib0clear(&___nl__im__15);
#line 84
c_rt_lib0clear(&___nl__im__26);
#line 84
c_rt_lib0clear(&___nl__im__42);
#line 84
c_rt_lib0clear(&___nl__im__53);
#line 84
c_rt_lib0clear(&___nl__im__64);
#line 84
c_rt_lib0clear(&___nl__im__75);
#line 84
c_rt_lib0clear(&___nl__im__86);
#line 84
c_rt_lib0clear(&___nl__im__97);
#line 84
c_rt_lib0clear(&___nl__im__103);
#line 84
c_rt_lib0clear(&___nl__im__109);
#line 84
return ___nl__im__115;
#line 85
goto label_760;
#line 85
label_559:
;
#line 85
c_rt_lib0move(&___nl__im__117,___get_global_string_const(1017));
#line 85
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__117);
#line 85
c_rt_lib0clear(&___nl__im__117);
#line 85
___nl__bool__5 = !___nl__bool__5;
#line 85
if(___nl__bool__5){ goto label_624;}
#line 86
___nl__int__120 = c_rt_lib0array_len((*___ref___im__2));
#line 86
___nl__int__121 = 1;
#line 86
___nl__bool__118 = ___nl__int__120 == ___nl__int__121;
#line 86
//clear ___nl__int__120;
#line 86
//clear ___nl__int__121;
#line 86
___nl__bool__119 = !___nl__bool__118;
#line 86
if(___nl__bool__119){ goto label_577;}
#line 86
___nl__int__123 = 0;
#line 86
c_rt_lib0move(&___nl__im__122, c_rt_lib0array_get((*___ref___im__2), ___nl__int__123));
#line 86
//clear ___nl__int__123;
#line 86
___nl__bool__118 = string_utils0is_number(___nl__im__122);
#line 86
c_rt_lib0clear(&___nl__im__122);
#line 86
label_577:
;
#line 86
//clear ___nl__bool__119;
#line 86
___nl__bool__118 = !___nl__bool__118;
#line 86
___nl__bool__118 = !___nl__bool__118;
#line 86
if(___nl__bool__118){ goto label_598;}
#line 86
c_rt_lib0clear(&___nl__im__0);
#line 86
//clear ___nl__bool__5;
#line 86
c_rt_lib0clear(&___nl__im__15);
#line 86
c_rt_lib0clear(&___nl__im__26);
#line 86
c_rt_lib0clear(&___nl__im__42);
#line 86
c_rt_lib0clear(&___nl__im__53);
#line 86
c_rt_lib0clear(&___nl__im__64);
#line 86
c_rt_lib0clear(&___nl__im__75);
#line 86
c_rt_lib0clear(&___nl__im__86);
#line 86
c_rt_lib0clear(&___nl__im__97);
#line 86
c_rt_lib0clear(&___nl__im__103);
#line 86
c_rt_lib0clear(&___nl__im__109);
#line 86
c_rt_lib0clear(&___nl__im__115);
#line 86
//clear ___nl__bool__118;
#line 86
return ___nl__im__3;
#line 86
goto label_598;
#line 86
label_598:
;
#line 86
//clear ___nl__bool__118;
#line 87
___nl__int__125 = 0;
#line 87
c_rt_lib0move(&___nl__im__124, c_rt_lib0array_get((*___ref___im__2), ___nl__int__125));
#line 87
//clear ___nl__int__125;
#line 87
c_rt_lib0move(___ref___im__1, c_fe_lib0localtime(___nl__im__124));
#line 87
c_rt_lib0clear(&___nl__im__124);
#line 88
c_rt_lib0move(&___nl__im__127,___get_global_string_const(36));
#line 88
c_rt_lib0move(&___nl__im__126, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__127));
#line 88
c_rt_lib0clear(&___nl__im__127);
#line 88
c_rt_lib0clear(&___nl__im__0);
#line 88
c_rt_lib0clear(&___nl__im__3);
#line 88
//clear ___nl__bool__5;
#line 88
c_rt_lib0clear(&___nl__im__15);
#line 88
c_rt_lib0clear(&___nl__im__26);
#line 88
c_rt_lib0clear(&___nl__im__42);
#line 88
c_rt_lib0clear(&___nl__im__53);
#line 88
c_rt_lib0clear(&___nl__im__64);
#line 88
c_rt_lib0clear(&___nl__im__75);
#line 88
c_rt_lib0clear(&___nl__im__86);
#line 88
c_rt_lib0clear(&___nl__im__97);
#line 88
c_rt_lib0clear(&___nl__im__103);
#line 88
c_rt_lib0clear(&___nl__im__109);
#line 88
c_rt_lib0clear(&___nl__im__115);
#line 88
return ___nl__im__126;
#line 89
goto label_760;
#line 89
label_624:
;
#line 89
c_rt_lib0move(&___nl__im__128,___get_global_string_const(1018));
#line 89
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__128);
#line 89
c_rt_lib0clear(&___nl__im__128);
#line 89
___nl__bool__5 = !___nl__bool__5;
#line 89
if(___nl__bool__5){ goto label_691;}
#line 90
___nl__int__131 = c_rt_lib0array_len((*___ref___im__2));
#line 90
___nl__int__132 = 1;
#line 90
___nl__bool__129 = ___nl__int__131 == ___nl__int__132;
#line 90
//clear ___nl__int__131;
#line 90
//clear ___nl__int__132;
#line 90
___nl__bool__130 = !___nl__bool__129;
#line 90
if(___nl__bool__130){ goto label_642;}
#line 90
___nl__int__134 = 0;
#line 90
c_rt_lib0move(&___nl__im__133, c_rt_lib0array_get((*___ref___im__2), ___nl__int__134));
#line 90
//clear ___nl__int__134;
#line 90
___nl__bool__129 = string_utils0is_number(___nl__im__133);
#line 90
c_rt_lib0clear(&___nl__im__133);
#line 90
label_642:
;
#line 90
//clear ___nl__bool__130;
#line 90
___nl__bool__129 = !___nl__bool__129;
#line 90
___nl__bool__129 = !___nl__bool__129;
#line 90
if(___nl__bool__129){ goto label_664;}
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
//clear ___nl__bool__5;
#line 90
c_rt_lib0clear(&___nl__im__15);
#line 90
c_rt_lib0clear(&___nl__im__26);
#line 90
c_rt_lib0clear(&___nl__im__42);
#line 90
c_rt_lib0clear(&___nl__im__53);
#line 90
c_rt_lib0clear(&___nl__im__64);
#line 90
c_rt_lib0clear(&___nl__im__75);
#line 90
c_rt_lib0clear(&___nl__im__86);
#line 90
c_rt_lib0clear(&___nl__im__97);
#line 90
c_rt_lib0clear(&___nl__im__103);
#line 90
c_rt_lib0clear(&___nl__im__109);
#line 90
c_rt_lib0clear(&___nl__im__115);
#line 90
c_rt_lib0clear(&___nl__im__126);
#line 90
//clear ___nl__bool__129;
#line 90
return ___nl__im__3;
#line 90
goto label_664;
#line 90
label_664:
;
#line 90
//clear ___nl__bool__129;
#line 91
___nl__int__136 = 0;
#line 91
c_rt_lib0move(&___nl__im__135, c_rt_lib0array_get((*___ref___im__2), ___nl__int__136));
#line 91
//clear ___nl__int__136;
#line 91
c_rt_lib0move(___ref___im__1, c_fe_lib0sleep(___nl__im__135));
#line 91
c_rt_lib0clear(&___nl__im__135);
#line 92
c_rt_lib0move(&___nl__im__138,___get_global_string_const(36));
#line 92
c_rt_lib0move(&___nl__im__137, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__138));
#line 92
c_rt_lib0clear(&___nl__im__138);
#line 92
c_rt_lib0clear(&___nl__im__0);
#line 92
c_rt_lib0clear(&___nl__im__3);
#line 92
//clear ___nl__bool__5;
#line 92
c_rt_lib0clear(&___nl__im__15);
#line 92
c_rt_lib0clear(&___nl__im__26);
#line 92
c_rt_lib0clear(&___nl__im__42);
#line 92
c_rt_lib0clear(&___nl__im__53);
#line 92
c_rt_lib0clear(&___nl__im__64);
#line 92
c_rt_lib0clear(&___nl__im__75);
#line 92
c_rt_lib0clear(&___nl__im__86);
#line 92
c_rt_lib0clear(&___nl__im__97);
#line 92
c_rt_lib0clear(&___nl__im__103);
#line 92
c_rt_lib0clear(&___nl__im__109);
#line 92
c_rt_lib0clear(&___nl__im__115);
#line 92
c_rt_lib0clear(&___nl__im__126);
#line 92
return ___nl__im__137;
#line 93
goto label_760;
#line 93
label_691:
;
#line 93
c_rt_lib0move(&___nl__im__139,___get_global_string_const(1019));
#line 93
___nl__bool__5 = c_rt_lib0eq(___nl__im__0, ___nl__im__139);
#line 93
c_rt_lib0clear(&___nl__im__139);
#line 93
___nl__bool__5 = !___nl__bool__5;
#line 93
if(___nl__bool__5){ goto label_760;}
#line 94
___nl__int__142 = c_rt_lib0array_len((*___ref___im__2));
#line 94
___nl__int__143 = 1;
#line 94
___nl__bool__140 = ___nl__int__142 == ___nl__int__143;
#line 94
//clear ___nl__int__142;
#line 94
//clear ___nl__int__143;
#line 94
___nl__bool__141 = !___nl__bool__140;
#line 94
if(___nl__bool__141){ goto label_709;}
#line 94
___nl__int__145 = 0;
#line 94
c_rt_lib0move(&___nl__im__144, c_rt_lib0array_get((*___ref___im__2), ___nl__int__145));
#line 94
//clear ___nl__int__145;
#line 94
___nl__bool__140 = nl0is_printable(___nl__im__144);
#line 94
c_rt_lib0clear(&___nl__im__144);
#line 94
label_709:
;
#line 94
//clear ___nl__bool__141;
#line 94
___nl__bool__140 = !___nl__bool__140;
#line 94
___nl__bool__140 = !___nl__bool__140;
#line 94
if(___nl__bool__140){ goto label_732;}
#line 94
c_rt_lib0clear(&___nl__im__0);
#line 94
//clear ___nl__bool__5;
#line 94
c_rt_lib0clear(&___nl__im__15);
#line 94
c_rt_lib0clear(&___nl__im__26);
#line 94
c_rt_lib0clear(&___nl__im__42);
#line 94
c_rt_lib0clear(&___nl__im__53);
#line 94
c_rt_lib0clear(&___nl__im__64);
#line 94
c_rt_lib0clear(&___nl__im__75);
#line 94
c_rt_lib0clear(&___nl__im__86);
#line 94
c_rt_lib0clear(&___nl__im__97);
#line 94
c_rt_lib0clear(&___nl__im__103);
#line 94
c_rt_lib0clear(&___nl__im__109);
#line 94
c_rt_lib0clear(&___nl__im__115);
#line 94
c_rt_lib0clear(&___nl__im__126);
#line 94
c_rt_lib0clear(&___nl__im__137);
#line 94
//clear ___nl__bool__140;
#line 94
return ___nl__im__3;
#line 94
goto label_732;
#line 94
label_732:
;
#line 94
//clear ___nl__bool__140;
#line 95
___nl__int__147 = 0;
#line 95
c_rt_lib0move(&___nl__im__146, c_rt_lib0array_get((*___ref___im__2), ___nl__int__147));
#line 95
//clear ___nl__int__147;
#line 95
c_rt_lib0move(___ref___im__1, c_fe_lib0exec_cmd(___nl__im__146));
#line 95
c_rt_lib0clear(&___nl__im__146);
#line 96
c_rt_lib0move(&___nl__im__149,___get_global_string_const(36));
#line 96
c_rt_lib0move(&___nl__im__148, c_rt_lib0ov_mk_arg(___get_global_string_const(83), ___nl__im__149));
#line 96
c_rt_lib0clear(&___nl__im__149);
#line 96
c_rt_lib0clear(&___nl__im__0);
#line 96
c_rt_lib0clear(&___nl__im__3);
#line 96
//clear ___nl__bool__5;
#line 96
c_rt_lib0clear(&___nl__im__15);
#line 96
c_rt_lib0clear(&___nl__im__26);
#line 96
c_rt_lib0clear(&___nl__im__42);
#line 96
c_rt_lib0clear(&___nl__im__53);
#line 96
c_rt_lib0clear(&___nl__im__64);
#line 96
c_rt_lib0clear(&___nl__im__75);
#line 96
c_rt_lib0clear(&___nl__im__86);
#line 96
c_rt_lib0clear(&___nl__im__97);
#line 96
c_rt_lib0clear(&___nl__im__103);
#line 96
c_rt_lib0clear(&___nl__im__109);
#line 96
c_rt_lib0clear(&___nl__im__115);
#line 96
c_rt_lib0clear(&___nl__im__126);
#line 96
c_rt_lib0clear(&___nl__im__137);
#line 96
return ___nl__im__148;
#line 97
goto label_760;
#line 97
label_760:
;
#line 97
//clear ___nl__bool__5;
#line 97
c_rt_lib0clear(&___nl__im__15);
#line 97
c_rt_lib0clear(&___nl__im__26);
#line 97
c_rt_lib0clear(&___nl__im__42);
#line 97
c_rt_lib0clear(&___nl__im__53);
#line 97
c_rt_lib0clear(&___nl__im__64);
#line 97
c_rt_lib0clear(&___nl__im__75);
#line 97
c_rt_lib0clear(&___nl__im__86);
#line 97
c_rt_lib0clear(&___nl__im__97);
#line 97
c_rt_lib0clear(&___nl__im__103);
#line 97
c_rt_lib0clear(&___nl__im__109);
#line 97
c_rt_lib0clear(&___nl__im__115);
#line 97
c_rt_lib0clear(&___nl__im__126);
#line 97
c_rt_lib0clear(&___nl__im__137);
#line 97
c_rt_lib0clear(&___nl__im__148);
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
