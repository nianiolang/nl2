
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include </usr/include/string.h>
#include "tc_types.h"
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "nast.h"
#include "singleton.h"
#include "compiler_lib.h"
#include "compiler_lib.h"
#include "tct.h"
#include "tc_types.h"
#include "nast.h"
#line 1 "tc_types.nl"

static ImmT *__const__f = NULL;
void tc_types_priv0__const__init();
ImmT tc_types_priv0__const__sim(int __nr);
ImmT tc_types_priv0__const__sing(int __nr);

ImmT  tc_types_priv0op_def(ImmT * ___ref___im__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,tct0meta_type0type ___nl__im__3,tct0meta_type0type ___nl__im__4);
ImmT  tc_types_priv0get_binary_ops();


ImmT  tc_types_priv0op_def(ImmT * ___ref___im__0,ImmT  ___nl__im__1,tct0meta_type0type ___nl__im__2,tct0meta_type0type ___nl__im__3,tct0meta_type0type ___nl__im__4) {
c_rt_lib0arg_val(___nl__im__1);
c_rt_lib0arg_val(___nl__im__2);
c_rt_lib0arg_val(___nl__im__3);
c_rt_lib0arg_val(___nl__im__4);
tc_types_priv0__const__init();
ImmT  ___nl__im__5 = NULL;
#line 15
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(3, ___get_global_const(1279), ___nl__im__2, ___get_global_const(1280), ___nl__im__3, ___get_global_const(383), ___nl__im__4));
#line 15
c_rt_lib0delete(hash0set_value(___ref___im__0, ___nl__im__1, ___nl__im__5));
#line 15
c_rt_lib0clear(&___nl__im__5);
#line 15
c_rt_lib0clear(&___nl__im__1);
#line 15
c_rt_lib0clear(&___nl__im__2);
#line 15
c_rt_lib0clear(&___nl__im__3);
#line 15
c_rt_lib0clear(&___nl__im__4);
#line 15
return NULL;
}

tc_types0bin_op_type0type tc_types0get_bin_op_def0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "tc_types0get_bin_op_def");
ImmT  *var0 = &(_tab[0]);
return tc_types0get_bin_op_def(*var0);
}
tc_types0bin_op_type0type tc_types0get_bin_op_def(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
tc_types_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 19
c_rt_lib0move(&___nl__im__2, tc_types_priv0get_binary_ops());
#line 19
c_rt_lib0move(&___nl__im__1, hash0get_value(___nl__im__2, ___nl__im__0));
#line 19
c_rt_lib0clear(&___nl__im__2);
#line 19
c_rt_lib0clear(&___nl__im__0);
#line 19
return ___nl__im__1;
return NULL;
}

ImmT tc_types_priv0get_binary_ops(){
tc_types_priv0__const__init();
return tc_types_priv0__const__sing(0);}
ImmT tc_types_priv0get_binary_ops0cal() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
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
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
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
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT  ___nl__im__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT  ___nl__im__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
#line 23
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(0));
#line 24
c_rt_lib0move(&___nl__im__1,___get_global_const(346));
#line 24
c_rt_lib0move(&___nl__im__2, tct0int());
#line 24
c_rt_lib0move(&___nl__im__3, tct0int());
#line 24
c_rt_lib0move(&___nl__im__4, tct0int());
#line 24
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__im__4));
#line 24
c_rt_lib0clear(&___nl__im__1);
#line 24
c_rt_lib0clear(&___nl__im__2);
#line 24
c_rt_lib0clear(&___nl__im__3);
#line 24
c_rt_lib0clear(&___nl__im__4);
#line 25
c_rt_lib0move(&___nl__im__5,___get_global_const(106));
#line 25
c_rt_lib0move(&___nl__im__6, tct0int());
#line 25
c_rt_lib0move(&___nl__im__7, tct0int());
#line 25
c_rt_lib0move(&___nl__im__8, tct0int());
#line 25
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__5, ___nl__im__6, ___nl__im__7, ___nl__im__8));
#line 25
c_rt_lib0clear(&___nl__im__5);
#line 25
c_rt_lib0clear(&___nl__im__6);
#line 25
c_rt_lib0clear(&___nl__im__7);
#line 25
c_rt_lib0clear(&___nl__im__8);
#line 26
c_rt_lib0move(&___nl__im__9,___get_global_const(349));
#line 26
c_rt_lib0move(&___nl__im__10, tct0int());
#line 26
c_rt_lib0move(&___nl__im__11, tct0int());
#line 26
c_rt_lib0move(&___nl__im__12, tct0int());
#line 26
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__9, ___nl__im__10, ___nl__im__11, ___nl__im__12));
#line 26
c_rt_lib0clear(&___nl__im__9);
#line 26
c_rt_lib0clear(&___nl__im__10);
#line 26
c_rt_lib0clear(&___nl__im__11);
#line 26
c_rt_lib0clear(&___nl__im__12);
#line 27
c_rt_lib0move(&___nl__im__13,___get_global_const(340));
#line 27
c_rt_lib0move(&___nl__im__14, tct0int());
#line 27
c_rt_lib0move(&___nl__im__15, tct0int());
#line 27
c_rt_lib0move(&___nl__im__16, tct0int());
#line 27
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__13, ___nl__im__14, ___nl__im__15, ___nl__im__16));
#line 27
c_rt_lib0clear(&___nl__im__13);
#line 27
c_rt_lib0clear(&___nl__im__14);
#line 27
c_rt_lib0clear(&___nl__im__15);
#line 27
c_rt_lib0clear(&___nl__im__16);
#line 28
c_rt_lib0move(&___nl__im__17,___get_global_const(338));
#line 28
c_rt_lib0move(&___nl__im__18, tct0int());
#line 28
c_rt_lib0move(&___nl__im__19, tct0int());
#line 28
c_rt_lib0move(&___nl__im__20, tct0int());
#line 28
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__17, ___nl__im__18, ___nl__im__19, ___nl__im__20));
#line 28
c_rt_lib0clear(&___nl__im__17);
#line 28
c_rt_lib0clear(&___nl__im__18);
#line 28
c_rt_lib0clear(&___nl__im__19);
#line 28
c_rt_lib0clear(&___nl__im__20);
#line 29
c_rt_lib0move(&___nl__im__21,___get_global_const(111));
#line 29
c_rt_lib0move(&___nl__im__22, tct0string());
#line 29
c_rt_lib0move(&___nl__im__23, tct0string());
#line 29
c_rt_lib0move(&___nl__im__24, tct0string());
#line 29
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__21, ___nl__im__22, ___nl__im__23, ___nl__im__24));
#line 29
c_rt_lib0clear(&___nl__im__21);
#line 29
c_rt_lib0clear(&___nl__im__22);
#line 29
c_rt_lib0clear(&___nl__im__23);
#line 29
c_rt_lib0clear(&___nl__im__24);
#line 30
c_rt_lib0move(&___nl__im__25,___get_global_const(360));
#line 30
c_rt_lib0move(&___nl__im__26, tct0int());
#line 30
c_rt_lib0move(&___nl__im__27, tct0int());
#line 30
c_rt_lib0move(&___nl__im__28, tct0bool());
#line 30
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__25, ___nl__im__26, ___nl__im__27, ___nl__im__28));
#line 30
c_rt_lib0clear(&___nl__im__25);
#line 30
c_rt_lib0clear(&___nl__im__26);
#line 30
c_rt_lib0clear(&___nl__im__27);
#line 30
c_rt_lib0clear(&___nl__im__28);
#line 31
c_rt_lib0move(&___nl__im__29,___get_global_const(350));
#line 31
c_rt_lib0move(&___nl__im__30, tct0int());
#line 31
c_rt_lib0move(&___nl__im__31, tct0int());
#line 31
c_rt_lib0move(&___nl__im__32, tct0bool());
#line 31
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__29, ___nl__im__30, ___nl__im__31, ___nl__im__32));
#line 31
c_rt_lib0clear(&___nl__im__29);
#line 31
c_rt_lib0clear(&___nl__im__30);
#line 31
c_rt_lib0clear(&___nl__im__31);
#line 31
c_rt_lib0clear(&___nl__im__32);
#line 32
c_rt_lib0move(&___nl__im__33,___get_global_const(352));
#line 32
c_rt_lib0move(&___nl__im__34, tct0int());
#line 32
c_rt_lib0move(&___nl__im__35, tct0int());
#line 32
c_rt_lib0move(&___nl__im__36, tct0bool());
#line 32
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__33, ___nl__im__34, ___nl__im__35, ___nl__im__36));
#line 32
c_rt_lib0clear(&___nl__im__33);
#line 32
c_rt_lib0clear(&___nl__im__34);
#line 32
c_rt_lib0clear(&___nl__im__35);
#line 32
c_rt_lib0clear(&___nl__im__36);
#line 33
c_rt_lib0move(&___nl__im__37,___get_global_const(358));
#line 33
c_rt_lib0move(&___nl__im__38, tct0int());
#line 33
c_rt_lib0move(&___nl__im__39, tct0int());
#line 33
c_rt_lib0move(&___nl__im__40, tct0bool());
#line 33
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__37, ___nl__im__38, ___nl__im__39, ___nl__im__40));
#line 33
c_rt_lib0clear(&___nl__im__37);
#line 33
c_rt_lib0clear(&___nl__im__38);
#line 33
c_rt_lib0clear(&___nl__im__39);
#line 33
c_rt_lib0clear(&___nl__im__40);
#line 34
c_rt_lib0move(&___nl__im__41,___get_global_const(354));
#line 34
c_rt_lib0move(&___nl__im__42, tct0int());
#line 34
c_rt_lib0move(&___nl__im__43, tct0int());
#line 34
c_rt_lib0move(&___nl__im__44, tct0bool());
#line 34
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__41, ___nl__im__42, ___nl__im__43, ___nl__im__44));
#line 34
c_rt_lib0clear(&___nl__im__41);
#line 34
c_rt_lib0clear(&___nl__im__42);
#line 34
c_rt_lib0clear(&___nl__im__43);
#line 34
c_rt_lib0clear(&___nl__im__44);
#line 35
c_rt_lib0move(&___nl__im__45,___get_global_const(356));
#line 35
c_rt_lib0move(&___nl__im__46, tct0int());
#line 35
c_rt_lib0move(&___nl__im__47, tct0int());
#line 35
c_rt_lib0move(&___nl__im__48, tct0bool());
#line 35
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__45, ___nl__im__46, ___nl__im__47, ___nl__im__48));
#line 35
c_rt_lib0clear(&___nl__im__45);
#line 35
c_rt_lib0clear(&___nl__im__46);
#line 35
c_rt_lib0clear(&___nl__im__47);
#line 35
c_rt_lib0clear(&___nl__im__48);
#line 36
c_rt_lib0move(&___nl__im__49,___get_global_const(342));
#line 36
c_rt_lib0move(&___nl__im__50, tct0string());
#line 36
c_rt_lib0move(&___nl__im__51, tct0string());
#line 36
c_rt_lib0move(&___nl__im__52, tct0bool());
#line 36
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__49, ___nl__im__50, ___nl__im__51, ___nl__im__52));
#line 36
c_rt_lib0clear(&___nl__im__49);
#line 36
c_rt_lib0clear(&___nl__im__50);
#line 36
c_rt_lib0clear(&___nl__im__51);
#line 36
c_rt_lib0clear(&___nl__im__52);
#line 37
c_rt_lib0move(&___nl__im__53,___get_global_const(343));
#line 37
c_rt_lib0move(&___nl__im__54, tct0string());
#line 37
c_rt_lib0move(&___nl__im__55, tct0string());
#line 37
c_rt_lib0move(&___nl__im__56, tct0bool());
#line 37
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__53, ___nl__im__54, ___nl__im__55, ___nl__im__56));
#line 37
c_rt_lib0clear(&___nl__im__53);
#line 37
c_rt_lib0clear(&___nl__im__54);
#line 37
c_rt_lib0clear(&___nl__im__55);
#line 37
c_rt_lib0clear(&___nl__im__56);
#line 38
c_rt_lib0move(&___nl__im__57,___get_global_const(899));
#line 38
c_rt_lib0move(&___nl__im__58, tct0bool());
#line 38
c_rt_lib0move(&___nl__im__59, tct0bool());
#line 38
c_rt_lib0move(&___nl__im__60, tct0bool());
#line 38
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__57, ___nl__im__58, ___nl__im__59, ___nl__im__60));
#line 38
c_rt_lib0clear(&___nl__im__57);
#line 38
c_rt_lib0clear(&___nl__im__58);
#line 38
c_rt_lib0clear(&___nl__im__59);
#line 38
c_rt_lib0clear(&___nl__im__60);
#line 39
c_rt_lib0move(&___nl__im__61,___get_global_const(900));
#line 39
c_rt_lib0move(&___nl__im__62, tct0bool());
#line 39
c_rt_lib0move(&___nl__im__63, tct0bool());
#line 39
c_rt_lib0move(&___nl__im__64, tct0bool());
#line 39
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__61, ___nl__im__62, ___nl__im__63, ___nl__im__64));
#line 39
c_rt_lib0clear(&___nl__im__61);
#line 39
c_rt_lib0clear(&___nl__im__62);
#line 39
c_rt_lib0clear(&___nl__im__63);
#line 39
c_rt_lib0clear(&___nl__im__64);
#line 40
c_rt_lib0move(&___nl__im__65,___get_global_const(981));
#line 40
c_rt_lib0move(&___nl__im__66, tct0int());
#line 40
c_rt_lib0move(&___nl__im__67, tct0int());
#line 40
c_rt_lib0move(&___nl__im__68, tct0int());
#line 40
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__65, ___nl__im__66, ___nl__im__67, ___nl__im__68));
#line 40
c_rt_lib0clear(&___nl__im__65);
#line 40
c_rt_lib0clear(&___nl__im__66);
#line 40
c_rt_lib0clear(&___nl__im__67);
#line 40
c_rt_lib0clear(&___nl__im__68);
#line 41
c_rt_lib0move(&___nl__im__69,___get_global_const(984));
#line 41
c_rt_lib0move(&___nl__im__70, tct0int());
#line 41
c_rt_lib0move(&___nl__im__71, tct0int());
#line 41
c_rt_lib0move(&___nl__im__72, tct0int());
#line 41
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__69, ___nl__im__70, ___nl__im__71, ___nl__im__72));
#line 41
c_rt_lib0clear(&___nl__im__69);
#line 41
c_rt_lib0clear(&___nl__im__70);
#line 41
c_rt_lib0clear(&___nl__im__71);
#line 41
c_rt_lib0clear(&___nl__im__72);
#line 42
c_rt_lib0move(&___nl__im__73,___get_global_const(983));
#line 42
c_rt_lib0move(&___nl__im__74, tct0int());
#line 42
c_rt_lib0move(&___nl__im__75, tct0int());
#line 42
c_rt_lib0move(&___nl__im__76, tct0int());
#line 42
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__73, ___nl__im__74, ___nl__im__75, ___nl__im__76));
#line 42
c_rt_lib0clear(&___nl__im__73);
#line 42
c_rt_lib0clear(&___nl__im__74);
#line 42
c_rt_lib0clear(&___nl__im__75);
#line 42
c_rt_lib0clear(&___nl__im__76);
#line 43
c_rt_lib0move(&___nl__im__77,___get_global_const(985));
#line 43
c_rt_lib0move(&___nl__im__78, tct0string());
#line 43
c_rt_lib0move(&___nl__im__79, tct0string());
#line 43
c_rt_lib0move(&___nl__im__80, tct0string());
#line 43
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__77, ___nl__im__78, ___nl__im__79, ___nl__im__80));
#line 43
c_rt_lib0clear(&___nl__im__77);
#line 43
c_rt_lib0clear(&___nl__im__78);
#line 43
c_rt_lib0clear(&___nl__im__79);
#line 43
c_rt_lib0clear(&___nl__im__80);
#line 44
c_rt_lib0move(&___nl__im__81,___get_global_const(982));
#line 44
c_rt_lib0move(&___nl__im__82, tct0int());
#line 44
c_rt_lib0move(&___nl__im__83, tct0int());
#line 44
c_rt_lib0move(&___nl__im__84, tct0int());
#line 44
c_rt_lib0delete(tc_types_priv0op_def(&___nl__im__0, ___nl__im__81, ___nl__im__82, ___nl__im__83, ___nl__im__84));
#line 44
c_rt_lib0clear(&___nl__im__81);
#line 44
c_rt_lib0clear(&___nl__im__82);
#line 44
c_rt_lib0clear(&___nl__im__83);
#line 44
c_rt_lib0clear(&___nl__im__84);
#line 45
c_rt_lib0move(&___nl__im__85, singleton0sigleton_do_not_use_without_approval(___nl__im__0));
#line 45
c_rt_lib0clear(&___nl__im__0);
#line 45
return ___nl__im__85;
return NULL;
}

ImmT  tc_types0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0errors_t");
return tc_types0errors_t();
}
ImmT  tc_types0errors_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 50
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 51
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 52
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(911)));
#line 52
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(911)));
#line 53
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 53
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(917), ___nl__im__2, ___get_global_const(151), ___nl__im__3, ___get_global_const(124), ___nl__im__4, ___get_global_const(51), ___nl__im__5));
#line 53
c_rt_lib0clear(&___nl__im__2);
#line 53
c_rt_lib0clear(&___nl__im__3);
#line 53
c_rt_lib0clear(&___nl__im__4);
#line 53
c_rt_lib0clear(&___nl__im__5);
#line 53
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 53
c_rt_lib0clear(&___nl__im__1);
#line 53
return ___nl__im__0;
#line 53
c_rt_lib0clear(&___nl__im__0);
#line 53
return NULL;
return NULL;
}

ImmT  tc_types0bin_op_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0bin_op_type");
return tc_types0bin_op_type();
}
ImmT  tc_types0bin_op_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 58
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 58
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 58
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 58
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 58
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 58
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(1279), ___nl__im__2, ___get_global_const(1280), ___nl__im__3, ___get_global_const(383), ___nl__im__4));
#line 58
c_rt_lib0clear(&___nl__im__2);
#line 58
c_rt_lib0clear(&___nl__im__3);
#line 58
c_rt_lib0clear(&___nl__im__4);
#line 58
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 58
c_rt_lib0clear(&___nl__im__1);
#line 58
return ___nl__im__0;
#line 58
c_rt_lib0clear(&___nl__im__0);
#line 58
return NULL;
return NULL;
}

ImmT  tc_types0defs_funs_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0defs_funs_t");
return tc_types0defs_funs_t();
}
ImmT  tc_types0defs_funs_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tc_types0def_fun_t0ptr, ___get_global_const(48), ___get_global_const(1281)));
#line 62
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 62
c_rt_lib0move(&___nl__im__1, ptd0hash(___nl__im__2));
#line 62
c_rt_lib0clear(&___nl__im__2);
#line 62
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 62
c_rt_lib0clear(&___nl__im__1);
#line 62
return ___nl__im__0;
#line 62
c_rt_lib0clear(&___nl__im__0);
#line 62
return NULL;
return NULL;
}

ImmT  tc_types0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0return_t");
return tc_types0return_t();
}
ImmT  tc_types0return_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 67
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(911)));
#line 67
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(53), ___get_global_const(911)));
#line 68
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 69
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(48), ___get_global_const(49)));
#line 69
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 69
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(51), ___nl__im__2, ___get_global_const(124), ___nl__im__3, ___get_global_const(95), ___nl__im__4));
#line 69
c_rt_lib0clear(&___nl__im__2);
#line 69
c_rt_lib0clear(&___nl__im__3);
#line 69
c_rt_lib0clear(&___nl__im__4);
#line 69
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 69
c_rt_lib0clear(&___nl__im__1);
#line 69
return ___nl__im__0;
#line 69
c_rt_lib0clear(&___nl__im__0);
#line 69
return NULL;
return NULL;
}

ImmT  tc_types0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0modules_t");
return tc_types0modules_t();
}
ImmT  tc_types0modules_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 74
c_rt_lib0move(&___nl__im__3, ptd0bool());
#line 74
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 74
c_rt_lib0clear(&___nl__im__3);
#line 74
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(tc_types0env0ptr, ___get_global_const(48), ___get_global_const(1247)));
#line 74
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__4));
#line 74
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tc_types0defs_funs_t0ptr, ___get_global_const(48), ___get_global_const(1282)));
#line 74
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 74
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(439), ___nl__im__2, ___get_global_const(1247), ___nl__im__4, ___get_global_const(1250), ___nl__im__5));
#line 74
c_rt_lib0clear(&___nl__im__2);
#line 74
c_rt_lib0clear(&___nl__im__4);
#line 74
c_rt_lib0clear(&___nl__im__5);
#line 74
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 74
c_rt_lib0clear(&___nl__im__1);
#line 74
return ___nl__im__0;
#line 74
c_rt_lib0clear(&___nl__im__0);
#line 74
return NULL;
return NULL;
}

ImmT  tc_types0deref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_type");
return tc_types0deref_type();
}
ImmT  tc_types0deref_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 78
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 78
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 78
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 78
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(153), ___nl__im__2, ___get_global_const(151), ___nl__im__3, ___get_global_const(1248), ___nl__im__4));
#line 78
c_rt_lib0clear(&___nl__im__2);
#line 78
c_rt_lib0clear(&___nl__im__3);
#line 78
c_rt_lib0clear(&___nl__im__4);
#line 78
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 78
c_rt_lib0clear(&___nl__im__1);
#line 78
return ___nl__im__0;
#line 78
c_rt_lib0clear(&___nl__im__0);
#line 78
return NULL;
return NULL;
}

ImmT  tc_types0deref_types0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0deref_types");
return tc_types0deref_types();
}
ImmT  tc_types0deref_types() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 82
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(48), ___get_global_const(52)));
#line 82
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 82
c_rt_lib0move(&___nl__im__2, ptd0arr(___nl__im__3));
#line 82
c_rt_lib0clear(&___nl__im__3);
#line 82
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tc_types0deref_type0ptr, ___get_global_const(48), ___get_global_const(52)));
#line 82
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 82
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 82
c_rt_lib0clear(&___nl__im__5);
#line 82
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(174), ___nl__im__2, ___get_global_const(176), ___nl__im__4));
#line 82
c_rt_lib0clear(&___nl__im__2);
#line 82
c_rt_lib0clear(&___nl__im__4);
#line 82
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 82
c_rt_lib0clear(&___nl__im__1);
#line 82
return ___nl__im__0;
#line 82
c_rt_lib0clear(&___nl__im__0);
#line 82
return NULL;
return NULL;
}

ImmT  tc_types0env0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0env");
return tc_types0env();
}
ImmT  tc_types0env() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 87
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 88
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tc_types0vars_t0ptr, ___get_global_const(48), ___get_global_const(1283)));
#line 88
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 88
c_rt_lib0move(&___nl__im__6, ptd0bool());
#line 88
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(758), ___nl__im__5, ___get_global_const(993), ___nl__im__6));
#line 88
c_rt_lib0clear(&___nl__im__5);
#line 88
c_rt_lib0clear(&___nl__im__6);
#line 88
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 88
c_rt_lib0clear(&___nl__im__4);
#line 89
c_rt_lib0move(&___nl__im__7, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 89
c_rt_lib0move(&___nl__im__7, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__7));
#line 90
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(48), ___get_global_const(49)));
#line 90
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 90
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_const(914), ___nl__im__2, ___get_global_const(1284), ___nl__im__3, ___get_global_const(429), ___nl__im__7, ___get_global_const(95), ___nl__im__8));
#line 90
c_rt_lib0clear(&___nl__im__2);
#line 90
c_rt_lib0clear(&___nl__im__3);
#line 90
c_rt_lib0clear(&___nl__im__7);
#line 90
c_rt_lib0clear(&___nl__im__8);
#line 90
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 90
c_rt_lib0clear(&___nl__im__1);
#line 90
return ___nl__im__0;
#line 90
c_rt_lib0clear(&___nl__im__0);
#line 90
return NULL;
return NULL;
}

ImmT  tc_types0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0var_t");
return tc_types0var_t();
}
ImmT  tc_types0var_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 96
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 96
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 96
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_mk(2, ___get_global_const(76), ___nl__im__4, ___get_global_const(77), ___nl__im__5));
#line 96
c_rt_lib0clear(&___nl__im__4);
#line 96
c_rt_lib0clear(&___nl__im__5);
#line 96
c_rt_lib0move(&___nl__im__2, ptd0var(___nl__im__3));
#line 96
c_rt_lib0clear(&___nl__im__3);
#line 97
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 97
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 98
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 98
c_rt_lib0move(&___nl__im__10, ptd0string());
#line 98
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__im__9, ___get_global_const(1285), ___nl__im__10));
#line 98
c_rt_lib0clear(&___nl__im__9);
#line 98
c_rt_lib0clear(&___nl__im__10);
#line 98
c_rt_lib0move(&___nl__im__7, ptd0var(___nl__im__8));
#line 98
c_rt_lib0clear(&___nl__im__8);
#line 98
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(1286), ___nl__im__2, ___get_global_const(205), ___nl__im__6, ___get_global_const(1287), ___nl__im__7));
#line 98
c_rt_lib0clear(&___nl__im__2);
#line 98
c_rt_lib0clear(&___nl__im__6);
#line 98
c_rt_lib0clear(&___nl__im__7);
#line 98
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 98
c_rt_lib0clear(&___nl__im__1);
#line 98
return ___nl__im__0;
#line 98
c_rt_lib0clear(&___nl__im__0);
#line 98
return NULL;
return NULL;
}

ImmT  tc_types0fun_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0fun_arg_t");
return tc_types0fun_arg_t();
}
ImmT  tc_types0fun_arg_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 104
c_rt_lib0move(&___nl__im__2, ptd0string());
#line 105
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 105
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 106
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 106
c_rt_lib0move(&___nl__im__7, ptd0none());
#line 106
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__im__6, ___get_global_const(40), ___nl__im__7));
#line 106
c_rt_lib0clear(&___nl__im__6);
#line 106
c_rt_lib0clear(&___nl__im__7);
#line 106
c_rt_lib0move(&___nl__im__4, ptd0var(___nl__im__5));
#line 106
c_rt_lib0clear(&___nl__im__5);
#line 106
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(167), ___nl__im__2, ___get_global_const(205), ___nl__im__3, ___get_global_const(266), ___nl__im__4));
#line 106
c_rt_lib0clear(&___nl__im__2);
#line 106
c_rt_lib0clear(&___nl__im__3);
#line 106
c_rt_lib0clear(&___nl__im__4);
#line 106
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 106
c_rt_lib0clear(&___nl__im__1);
#line 106
return ___nl__im__0;
#line 106
c_rt_lib0clear(&___nl__im__0);
#line 106
return NULL;
return NULL;
}

ImmT  tc_types0def_fun_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0def_fun_t");
return tc_types0def_fun_t();
}
ImmT  tc_types0def_fun_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
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
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(46), ___get_global_const(313)));
#line 112
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 113
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 113
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 113
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 113
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_const(77), ___nl__im__5, ___get_global_const(76), ___nl__im__6));
#line 113
c_rt_lib0clear(&___nl__im__5);
#line 113
c_rt_lib0clear(&___nl__im__6);
#line 113
c_rt_lib0move(&___nl__im__3, ptd0var(___nl__im__4));
#line 113
c_rt_lib0clear(&___nl__im__4);
#line 114
c_rt_lib0move(&___nl__im__9, ptd0none());
#line 114
c_rt_lib0move(&___nl__im__11, ptd0string());
#line 114
c_rt_lib0move(&___nl__im__10, ptd0arr(___nl__im__11));
#line 114
c_rt_lib0clear(&___nl__im__11);
#line 114
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_mk(2, ___get_global_const(77), ___nl__im__9, ___get_global_const(76), ___nl__im__10));
#line 114
c_rt_lib0clear(&___nl__im__9);
#line 114
c_rt_lib0clear(&___nl__im__10);
#line 114
c_rt_lib0move(&___nl__im__7, ptd0var(___nl__im__8));
#line 114
c_rt_lib0clear(&___nl__im__8);
#line 115
c_rt_lib0move(&___nl__im__12, ptd0string());
#line 116
c_rt_lib0move(&___nl__im__13, ptd0string());
#line 117
c_rt_lib0move(&___nl__im__16, ptd0none());
#line 117
c_rt_lib0move(&___nl__im__17, ptd0none());
#line 117
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_mk(2, ___get_global_const(428), ___nl__im__16, ___get_global_const(210), ___nl__im__17));
#line 117
c_rt_lib0clear(&___nl__im__16);
#line 117
c_rt_lib0clear(&___nl__im__17);
#line 117
c_rt_lib0move(&___nl__im__14, ptd0var(___nl__im__15));
#line 117
c_rt_lib0clear(&___nl__im__15);
#line 118
c_rt_lib0move(&___nl__im__19, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(48), ___get_global_const(1288)));
#line 118
c_rt_lib0move(&___nl__im__19, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__19));
#line 118
c_rt_lib0move(&___nl__im__18, ptd0arr(___nl__im__19));
#line 118
c_rt_lib0clear(&___nl__im__19);
#line 119
c_rt_lib0move(&___nl__im__20, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 119
c_rt_lib0move(&___nl__im__20, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__20));
#line 119
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(8, ___get_global_const(227), ___nl__im__2, ___get_global_const(1255), ___nl__im__3, ___get_global_const(1249), ___nl__im__7, ___get_global_const(167), ___nl__im__12, ___get_global_const(151), ___nl__im__13, ___get_global_const(209), ___nl__im__14, ___get_global_const(265), ___nl__im__18, ___get_global_const(429), ___nl__im__20));
#line 119
c_rt_lib0clear(&___nl__im__2);
#line 119
c_rt_lib0clear(&___nl__im__3);
#line 119
c_rt_lib0clear(&___nl__im__7);
#line 119
c_rt_lib0clear(&___nl__im__12);
#line 119
c_rt_lib0clear(&___nl__im__13);
#line 119
c_rt_lib0clear(&___nl__im__14);
#line 119
c_rt_lib0clear(&___nl__im__18);
#line 119
c_rt_lib0clear(&___nl__im__20);
#line 119
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 119
c_rt_lib0clear(&___nl__im__1);
#line 119
return ___nl__im__0;
#line 119
c_rt_lib0clear(&___nl__im__0);
#line 119
return NULL;
return NULL;
}

ImmT  tc_types0vars_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0vars_t");
return tc_types0vars_t();
}
ImmT  tc_types0vars_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
#line 124
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(tc_types0var_t0ptr, ___get_global_const(48), ___get_global_const(910)));
#line 124
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__1));
#line 124
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 124
c_rt_lib0clear(&___nl__im__1);
#line 124
return ___nl__im__0;
#line 124
c_rt_lib0clear(&___nl__im__0);
#line 124
return NULL;
return NULL;
}

ImmT  tc_types0type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0type");
return tc_types0type();
}
ImmT  tc_types0type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 128
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(tc_types0value_src0ptr, ___get_global_const(48), ___get_global_const(1289)));
#line 128
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__2));
#line 128
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 128
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 128
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(74), ___nl__im__2, ___get_global_const(205), ___nl__im__3));
#line 128
c_rt_lib0clear(&___nl__im__2);
#line 128
c_rt_lib0clear(&___nl__im__3);
#line 128
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 128
c_rt_lib0clear(&___nl__im__1);
#line 128
return ___nl__im__0;
#line 128
c_rt_lib0clear(&___nl__im__0);
#line 128
return NULL;
return NULL;
}

ImmT  tc_types0value_src0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0value_src");
return tc_types0value_src();
}
ImmT  tc_types0value_src() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 132
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 132
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 132
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 132
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(1235), ___nl__im__2, ___get_global_const(1236), ___nl__im__3, ___get_global_const(1241), ___nl__im__4));
#line 132
c_rt_lib0clear(&___nl__im__2);
#line 132
c_rt_lib0clear(&___nl__im__3);
#line 132
c_rt_lib0clear(&___nl__im__4);
#line 132
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 132
c_rt_lib0clear(&___nl__im__1);
#line 132
return ___nl__im__0;
#line 132
c_rt_lib0clear(&___nl__im__0);
#line 132
return NULL;
return NULL;
}

ImmT  tc_types0lval_path0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0lval_path");
return tc_types0lval_path();
}
ImmT  tc_types0lval_path() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
#line 136
c_rt_lib0move(&___nl__im__3, ptd0string());
#line 136
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 136
c_rt_lib0move(&___nl__im__5, ptd0string());
#line 136
c_rt_lib0move(&___nl__im__6, ptd0none());
#line 136
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 136
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(5, ___get_global_const(464), ___nl__im__3, ___get_global_const(128), ___nl__im__4, ___get_global_const(514), ___nl__im__5, ___get_global_const(1290), ___nl__im__6, ___get_global_const(518), ___nl__im__7));
#line 136
c_rt_lib0clear(&___nl__im__3);
#line 136
c_rt_lib0clear(&___nl__im__4);
#line 136
c_rt_lib0clear(&___nl__im__5);
#line 136
c_rt_lib0clear(&___nl__im__6);
#line 136
c_rt_lib0clear(&___nl__im__7);
#line 136
c_rt_lib0move(&___nl__im__1, ptd0var(___nl__im__2));
#line 136
c_rt_lib0clear(&___nl__im__2);
#line 136
c_rt_lib0move(&___nl__im__0, ptd0arr(___nl__im__1));
#line 136
c_rt_lib0clear(&___nl__im__1);
#line 136
return ___nl__im__0;
#line 136
c_rt_lib0clear(&___nl__im__0);
#line 136
return NULL;
return NULL;
}

ImmT  tc_types0walk_arg0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0walk_arg");
return tc_types0walk_arg();
}
ImmT  tc_types0walk_arg() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
#line 141
c_rt_lib0move(&___nl__im__4, ptd0string());
#line 141
c_rt_lib0move(&___nl__im__3, ptd0arr(___nl__im__4));
#line 141
c_rt_lib0clear(&___nl__im__4);
#line 141
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 141
c_rt_lib0clear(&___nl__im__3);
#line 142
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(48), ___get_global_const(911)));
#line 142
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 143
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tc_types0modules_t0ptr, ___get_global_const(48), ___get_global_const(1291)));
#line 143
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 143
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(3, ___get_global_const(1292), ___nl__im__2, ___get_global_const(51), ___nl__im__5, ___get_global_const(182), ___nl__im__6));
#line 143
c_rt_lib0clear(&___nl__im__2);
#line 143
c_rt_lib0clear(&___nl__im__5);
#line 143
c_rt_lib0clear(&___nl__im__6);
#line 143
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 143
c_rt_lib0clear(&___nl__im__1);
#line 143
return ___nl__im__0;
#line 143
c_rt_lib0clear(&___nl__im__0);
#line 143
return NULL;
return NULL;
}

ImmT  tc_types0ref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0ref_t");
return tc_types0ref_t();
}
ImmT  tc_types0ref_t() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
#line 149
c_rt_lib0move(&___nl__im__2, ptd0int());
#line 150
c_rt_lib0move(&___nl__im__5, ptd0int());
#line 150
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 150
c_rt_lib0clear(&___nl__im__5);
#line 150
c_rt_lib0move(&___nl__im__3, ptd0hash(___nl__im__4));
#line 150
c_rt_lib0clear(&___nl__im__4);
#line 151
c_rt_lib0move(&___nl__im__8, ptd0int());
#line 151
c_rt_lib0move(&___nl__im__7, ptd0arr(___nl__im__8));
#line 151
c_rt_lib0clear(&___nl__im__8);
#line 151
c_rt_lib0move(&___nl__im__6, ptd0hash(___nl__im__7));
#line 151
c_rt_lib0clear(&___nl__im__7);
#line 152
c_rt_lib0move(&___nl__im__9, ptd0bool());
#line 153
c_rt_lib0move(&___nl__im__10, ptd0bool());
#line 153
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(5, ___get_global_const(1238), ___nl__im__2, ___get_global_const(229), ___nl__im__3, ___get_global_const(318), ___nl__im__6, ___get_global_const(1239), ___nl__im__9, ___get_global_const(1240), ___nl__im__10));
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
c_rt_lib0clear(&___nl__im__3);
#line 153
c_rt_lib0clear(&___nl__im__6);
#line 153
c_rt_lib0clear(&___nl__im__9);
#line 153
c_rt_lib0clear(&___nl__im__10);
#line 153
c_rt_lib0move(&___nl__im__0, ptd0rec(___nl__im__1));
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
return ___nl__im__0;
#line 153
c_rt_lib0clear(&___nl__im__0);
#line 153
return NULL;
return NULL;
}

ImmT  tc_types0stack_info_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0stack_info_type");
return tc_types0stack_info_type();
}
ImmT  tc_types0stack_info_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
#line 159
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 160
c_rt_lib0move(&___nl__im__3, ptd0none());
#line 161
c_rt_lib0move(&___nl__im__4, ptd0none());
#line 162
c_rt_lib0move(&___nl__im__5, ptd0none());
#line 163
c_rt_lib0move(&___nl__im__6, ptd0string());
#line 164
c_rt_lib0move(&___nl__im__7, ptd0string());
#line 165
c_rt_lib0move(&___nl__im__8, ptd0string());
#line 166
c_rt_lib0move(&___nl__im__9, ptd0string());
#line 166
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(8, ___get_global_const(1176), ___nl__im__2, ___get_global_const(1099), ___nl__im__3, ___get_global_const(1170), ___nl__im__4, ___get_global_const(1097), ___nl__im__5, ___get_global_const(1171), ___nl__im__6, ___get_global_const(1098), ___nl__im__7, ___get_global_const(1178), ___nl__im__8, ___get_global_const(1101), ___nl__im__9));
#line 166
c_rt_lib0clear(&___nl__im__2);
#line 166
c_rt_lib0clear(&___nl__im__3);
#line 166
c_rt_lib0clear(&___nl__im__4);
#line 166
c_rt_lib0clear(&___nl__im__5);
#line 166
c_rt_lib0clear(&___nl__im__6);
#line 166
c_rt_lib0clear(&___nl__im__7);
#line 166
c_rt_lib0clear(&___nl__im__8);
#line 166
c_rt_lib0clear(&___nl__im__9);
#line 166
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 166
c_rt_lib0clear(&___nl__im__1);
#line 166
return ___nl__im__0;
#line 166
c_rt_lib0clear(&___nl__im__0);
#line 166
return NULL;
return NULL;
}

ImmT  tc_types0check_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0check_info");
return tc_types0check_info();
}
ImmT  tc_types0check_info() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
ImmT  ___nl__im__6 = NULL;
ImmT  ___nl__im__7 = NULL;
ImmT  ___nl__im__8 = NULL;
#line 172
c_rt_lib0move(&___nl__im__2, ptd0none());
#line 174
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 174
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 175
c_rt_lib0move(&___nl__im__6, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 175
c_rt_lib0move(&___nl__im__6, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__6));
#line 176
c_rt_lib0move(&___nl__im__8, c_rt_lib0func_new(tc_types0stack_info_type0ptr, ___get_global_const(48), ___get_global_const(1293)));
#line 176
c_rt_lib0move(&___nl__im__8, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__8));
#line 176
c_rt_lib0move(&___nl__im__7, ptd0arr(___nl__im__8));
#line 176
c_rt_lib0clear(&___nl__im__8);
#line 176
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(3, ___get_global_const(229), ___nl__im__5, ___get_global_const(318), ___nl__im__6, ___get_global_const(774), ___nl__im__7));
#line 176
c_rt_lib0clear(&___nl__im__5);
#line 176
c_rt_lib0clear(&___nl__im__6);
#line 176
c_rt_lib0clear(&___nl__im__7);
#line 176
c_rt_lib0move(&___nl__im__3, ptd0rec(___nl__im__4));
#line 176
c_rt_lib0clear(&___nl__im__4);
#line 176
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_const(79), ___nl__im__2, ___get_global_const(78), ___nl__im__3));
#line 176
c_rt_lib0clear(&___nl__im__2);
#line 176
c_rt_lib0clear(&___nl__im__3);
#line 176
c_rt_lib0move(&___nl__im__0, ptd0var(___nl__im__1));
#line 176
c_rt_lib0clear(&___nl__im__1);
#line 176
return ___nl__im__0;
#line 176
c_rt_lib0clear(&___nl__im__0);
#line 176
return NULL;
return NULL;
}

ImmT  tc_types0special_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0special_functions");
return tc_types0special_functions();
}
ImmT  tc_types0special_functions() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
ImmT  ___nl__im__5 = NULL;
#line 182
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_const(380), ___get_global_const(381)));
#line 182
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__3));
#line 182
c_rt_lib0move(&___nl__im__5, c_rt_lib0func_new(tc_types0fun_arg_t0ptr, ___get_global_const(48), ___get_global_const(1288)));
#line 182
c_rt_lib0move(&___nl__im__5, c_rt_lib0ov_mk_arg(___get_global_const(40), ___nl__im__5));
#line 182
c_rt_lib0move(&___nl__im__4, ptd0arr(___nl__im__5));
#line 182
c_rt_lib0clear(&___nl__im__5);
#line 182
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_mk(2, ___get_global_const(289), ___nl__im__3, ___get_global_const(1273), ___nl__im__4));
#line 182
c_rt_lib0clear(&___nl__im__3);
#line 182
c_rt_lib0clear(&___nl__im__4);
#line 182
c_rt_lib0move(&___nl__im__1, ptd0rec(___nl__im__2));
#line 182
c_rt_lib0clear(&___nl__im__2);
#line 182
c_rt_lib0move(&___nl__im__0, ptd0hash(___nl__im__1));
#line 182
c_rt_lib0clear(&___nl__im__1);
#line 182
return ___nl__im__0;
#line 182
c_rt_lib0clear(&___nl__im__0);
#line 182
return NULL;
return NULL;
}

tc_types0type0type tc_types0get_default_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "tc_types0get_default_type");
return tc_types0get_default_type();
}
tc_types0type0type tc_types0get_default_type() {
tc_types_priv0__const__init();
ImmT  ___nl__im__0 = NULL;
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 186
c_rt_lib0move(&___nl__im__1, tct0tct_im());
#line 186
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_none(___get_global_const(1241)));
#line 186
c_rt_lib0move(&___nl__im__0, c_rt_lib0hash_mk(2, ___get_global_const(205), ___nl__im__1, ___get_global_const(74), ___nl__im__2));
#line 186
c_rt_lib0clear(&___nl__im__1);
#line 186
c_rt_lib0clear(&___nl__im__2);
#line 186
return ___nl__im__0;
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void tc_types_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT tc_types_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT tc_types_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = tc_types_priv0get_binary_ops0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
