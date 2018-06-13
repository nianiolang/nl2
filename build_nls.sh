#! /bin/bash
files_min=(
	'interpreter_wrapper.nl'
	'compiler_lib.nl'
	'interpreter.nl'
	'nast.nl'
	'nlasm.nl'
	'nparser.nl'
	'nsystem.nl'
	'ntokenizer.nl'
	'profile_inter.nl'
	'ptd_parser.nl'
	'tct.nl'
	'tc_types.nl'
	'translator.nl'
	'optional_libraries.nl'
	'nls.c'
)

rm -rf nls
mkdir nls
for file in "${files_min[@]}"
do
	file_path=$(find . -name "$file" -not -path "./nls")
	cp -v "$file_path" nls/
done
cp -r native_lib_c nls/
cp -r nianio_lib nls/

./mk_cache.exe nls/ --strict --c --o nls/cache_nl/
gcc -o nls/nls nls/nls.c nls/cache_nl/*.c nls/native_lib_c/*.c -Inls/cache_nl -Inls/native_lib_c -lm
