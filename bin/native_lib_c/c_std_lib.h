/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: PLE 2013-03-28
*/

#pragma once

#include "c_rt_lib.h"

ImmT c_std_lib0print(ImmT el);
ImmT c_std_lib0set_profile_global(ImmT el);
ImmT c_std_lib0get_profile_global();
ImmT c_std_lib0fast_substr(ImmT text_arr, INT begin, INT len);
ImmT c_std_lib0array_sub(ImmT arr, INT begin, INT len);
ImmT c_std_lib0array_push(ImmT *arr, ImmT el);
INT c_std_lib0array_len(ImmT arr);
ImmT c_std_lib0array_pop(ImmT *arr);
ImmT c_std_lib0hash_get_value(ImmT hash, ImmT key);
bool c_std_lib0hash_has_key(ImmT hash, ImmT key);
ImmT c_std_lib0hash_set_value(ImmT *hash, ImmT key, ImmT value);
ImmT c_std_lib0hash_delete(ImmT *hash, ImmT key);
int c_std_lib0hash_size(ImmT hash);
ImmT c_std_lib0string_chr(INT cc);
INT c_std_lib0string_ord(ImmT c);
INT c_std_lib0string_length(ImmT s);
INT c_std_lib0string_index(ImmT s, ImmT substr, INT start);
ImmT c_std_lib0string_sub(ImmT strg, INT start, INT length);
INT c_std_lib0string_get_char_code(ImmT strI, INT position);
ImmT c_std_lib0string_replace(ImmT str, ImmT old, ImmT new_part);
ImmT c_std_lib0string_escape2hex31(ImmT ___nl__str);

ImmT c_std_lib0string_lc(ImmT str);
ImmT c_std_lib0string_uc(ImmT str);
INT c_std_lib0string_compare(ImmT a, ImmT b);


bool c_std_lib0is_array(ImmT imm);
bool c_std_lib0is_hash(ImmT imm);
bool c_std_lib0is_int(ImmT imm);
bool c_std_lib0is_string(ImmT imm);
bool c_std_lib0is_printable(ImmT imm);
bool c_std_lib0is_variant(ImmT imm);
ImmT c_std_lib0escape_characters(ImmT str);
ImmT c_std_lib0exec(ImmT func, ImmT *arr);

ImmT c_std_lib0string_decode_utf16(ImmT ___nl__str, ImmT ___nl__a);
ImmT c_std_lib0string_encode_utf16(ImmT ___nl__str);
ImmT c_std_lib0int_to_string(INT n);
ImmT c_std_lib0try_string_to_int(ImmT imm);
