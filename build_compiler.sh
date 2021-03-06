#!/bin/bash
set -exu
mkdir -p tmp tmp/a tmp/b tmp/c tmp/d tmp/nianio_lang
cp -r ./nianio_lib/* tmp/nianio_lang/
cp -r ./checker/* tmp/nianio_lang/
cp -r ./pretty_printer/* tmp/nianio_lang/
cp -r ./ast/* tmp/nianio_lang/
cp -r ./compiler/* tmp/nianio_lang/
cp -r ./translator/* tmp/nianio_lang/
cp -r ./parser/* tmp/nianio_lang/
cp -r ./compiler_base/ tmp/nianio_lang/

gcc -std=c99 -O0 -o bin/mk_cache.exe bin/mk_cache.c bin/native_lib_c/*.c bin/nianio_lang_c/*.c -Ibin/native_lib_c -Ibin/nianio_lang_c -lm
./bin/mk_cache.exe tmp/nianio_lang --strict --o tmp/a --c
gcc -std=c99 -O0 -ggdb -o a.exe tmp/a/*.c bin/native_lib_c/*.c mk_cache.c -Itmp/a -Ibin/native_lib_c  -lm
./a.exe tmp/nianio_lang --o tmp/b --c
gcc -std=c99 -O0 -ggdb -o b.exe tmp/b/*.c native_lib_c/*.c mk_cache.c -Itmp/b -Inative_lib_c -lm
./b.exe tmp/nianio_lang --o tmp/c --strict --c

cp nl_mk_cache.pl tmp/nl_mk_cache.pl

rm -r bin/native_lib_c
cp -r ./native_lib_c/ bin/native_lib_c
mv tmp/b/* bin/nianio_lang_c/
cp mk_cache.c bin/mk_cache.c
cp b.exe bin/mk_cache.exe
rm -r tmp
rm ./a.exe ./b.exe
