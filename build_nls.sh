#! /bin/bash
# Creates nls/ directory and builds minimal NL interpreter.
# Optionaly includes fe_lib, used by compiler, and olympic_io for algorythic tasks.
# Usage: ./build_nls  [--olympic_io] [--fe_lib]
# nls usage: nls/nls [files and directories] [-- args for interpreted program]
# nls finds one argument public main function and executes it with array of args given after --.

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
	'nls_c.c'
)
olympic_io=false
fe_lib=false

for arg in "$@"
do
	if [ "$arg" == "--olympic_io" ]
	then
		olympic_io=true
	elif [[ "$arg" == "--fe_lib" ]]
	then
		fe_lib=true
	else
		echo "Usage: $0 [--olympic_io] [--fe_lib]"
		exit 1
	fi
done

rm -rf cache_nls
mkdir cache_nls
for file in "${files_min[@]}"
do
	file_path=$(find . -name "$file" -not -path "./cache_nls")
	cp -v "$file_path" cache_nls/
done
cp -r native_lib_c cache_nls/
cp -r nianio_lib cache_nls/

if [ $olympic_io = false ]
then
	rm cache_nls/native_lib_c/c_olympic_io.*
	rm cache_nls/nianio_lib/console.nl
	sed -i '/c_olympic_io BEGIN/,/c_olympic_io END/d' cache_nls/optional_libraries.nl
	sed -i '/use c_olympic_io;/d' cache_nls/optional_libraries.nl
fi
if [ $fe_lib = false ]
then
	sed -i '/c_fe_lib BEGIN/,/c_fe_lib END/d' cache_nls/optional_libraries.nl
	sed -i '/use c_fe_lib;/d' cache_nls/optional_libraries.nl
fi

./bin/mk_cache.exe cache_nls/ --strict --c --o cache_nls/cache_nl/
gcc -o nls.exe cache_nls/nls_c.c cache_nls/cache_nl/*.c cache_nls/native_lib_c/*.c -Icache_nls/cache_nl -Icache_nls/native_lib_c -lm
