all: clean old compiler

some: compiler tester

compiler: compiler_nl compiler_gcc

test: old compiler tester_nl_c tester_nl_js test_nl_c test_nl_js

OBJDIR=obj
OUT=mk_cache.exe
BINEXEC=./bin/mk_cache.exe
CACHEDIR=cache_nl
CACHETEST=cache_test
CACHEJS=cache_js
CFLAGS=-std=c99 -O0 -ggdb -Wall -Wno-unused-variable -Wno-unused-but-set-variable -Werror
LINKS=-lm

NLDIR=ast checker compiler nianio_lib parser pretty_printer translator compiler_base
NATIVE=native_lib_c

CDIR=${CACHEDIR} ${NATIVE}
ICDIR=$(patsubst %,-I%,${CDIR})
SRC_C:=$(shell find ${CDIR} -maxdepth 1  -name '*.c' -type f 2> /dev/null)
SRC_O:=${SRC_C:%.c=${OBJDIR}/%.o}

ide:
	rm -rf ${OBJDIR}
	rm -rf ${CACHEDIR}
	@mkdir -p ${CACHEDIR}
	@mkdir -p ${OBJDIR}
	${BINEXEC} --idex 'make sub_ide --no-print-directory' --o ${CACHEDIR} ${NLDIR} --O2 | tee ide.txt

sub_ide: ide_start ${OUT}

ide_start:
	@echo 'COMPILE GCC'

${OBJDIR}/%.o: %.c
	@echo $(notdir $(<:.c= ...))
	@mkdir -p $(dir $@)
	@gcc ${CFLAGS} -o $@ -c $< ${ICDIR} ${LINKS}

${OUT}: ${SRC_O} ./mk_cache.c
	@gcc ${CFLAGS} -o ${OUT} ./mk_cache.c ${SRC_O} ${ICDIR} ${LINKS} || true

old:
	gcc ${CFLAGS} -o bin/mk_cache.exe bin/mk_cache.c bin/native_lib_c/*.c bin/nianio_lang_c/*.c -Ibin/native_lib_c -Ibin/nianio_lang_c ${LINKS}

compiler_nl:
	${BINEXEC} --strict --o ${CACHEDIR} ${NLDIR} --O2

compiler_gcc:
	gcc ${CFLAGS} -o mk_cache.exe mk_cache.c ${CACHEDIR}/*.c ${NATIVE}/*.c -I${CACHEDIR} -I${NATIVE} ${LINKS}

tester_nl_c:
	./${OUT} nianio_lib test --deref --strict --o ${CACHETEST} --c --O2 --profile
	gcc ${CFLAGS} -o test_all test_all.c ${CACHETEST}/*.c ${NATIVE}/*.c -I${CACHETEST} -I${NATIVE} ${LINKS}

test_nl_c:
	@echo 'TEST C'
	./test_all

tester_nl_js:
	./${OUT} nianio_lib test --strict --o ${CACHETEST} --js --O2 --namespace instadb --profile

test_nl_js:
	@echo 'TEST JS'
	cat native_lib_js/*.js ${CACHETEST}/*.js test_js/test_all.js | js

vim_ide:
	perl ide2.pl < ide.txt
	perl ide2.pl < ide_js.txt
	perl ide2.pl < ide_check.txt

clean:
	rm -rf *.o mk_cache */*.o main
	rm -rf ${OBJDIR} ${CACHEDIR} ${CACHETEST}
	rm -rf ./test_all ${BINEXEC} ${OUT}

main: main.nl
	./${OUT} nianio_lib main.nl --deref --strict --o ${CACHETEST} --c --O2 --profile

main_exe: main.nl
	gcc ${CFLAGS} -o main main_c.c ${CACHETEST}/*.c ${NATIVE}/*.c -I${CACHETEST} -I${NATIVE} ${LINKS}

main_js: main.nl
	./${OUT} nianio_lib main.nl --deref --strict --o ${CACHEJS} --js --O2 --profile

nls:
	./$(OUT) nls/ --strict --c --o nls/cache_nl/
	gcc -o nls/nls nls/nls.c nls/cache_nl/*.c nls/native_lib_c/* -Inls/cache_nl -Inls/native_lib_c -lm
