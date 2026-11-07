all: clean old compiler

some: compiler tester

compiler: compiler_nl compiler_gcc

test: old compiler tester_nl_c tester_nl_js tester_nl_coverage tester_nl_coverage_o2 \
	test_nl_c test_nl_js test_nl_coverage test_nl_coverage_o2

test_coverage: old compiler tester_nl_coverage tester_nl_coverage_o2 test_nl_coverage test_nl_coverage_o2

demo_coverage: old compiler demo_coverage_build demo_coverage_run

OBJDIR=obj
OUT=mk_cache.exe
BINEXEC=./bin/mk_cache.exe
CACHEDIR=cache_nl
CACHETEST=cache_test
CACHEJS=cache_js
CACHECOVERAGE=cache_coverage
CACHECOVERAGEO2=cache_coverage_o2
CACHECOVERAGEDEMO=cache_coverage_demo
CFLAGS=-std=c99 -O0 -ggdb -Wall -Wno-unused-variable -Wno-unused-but-set-variable -Werror
LINKS=-lm
JS?=node

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
	./${OUT} nianio_lib test/tests --deref --strict --o ${CACHETEST} --c --O2 --profile
	gcc ${CFLAGS} -o test_all test/test_all.c ${CACHETEST}/*.c ${NATIVE}/*.c -I${CACHETEST} -I${NATIVE} ${LINKS}

test_nl_c:
	@echo 'TEST C'
	MALLOC_CHECK_=2 ./test_all

tester_nl_js:
	./${OUT} nianio_lib test/tests --strict --o ${CACHETEST} --js --O2 --profile --debug

tester_nl_coverage:
	./${OUT} test/coverage --strict --o ${CACHECOVERAGE} --js --O0 --coverage

tester_nl_coverage_o2:
	./${OUT} test/coverage --strict --o ${CACHECOVERAGEO2} --js --O2 --coverage

test_nl_js:
	@echo 'TEST JS'
	cat native_lib_js/*.js ${CACHETEST}/*.js test/test_all.js | ${JS}

test_nl_coverage:
	@echo 'TEST ASM COVERAGE O0'
	cat native_lib_js/*.js ${CACHECOVERAGE}/*.js test/test_coverage.js | ${JS}

test_nl_coverage_o2:
	@echo 'TEST ASM COVERAGE O2'
	cat native_lib_js/*.js ${CACHECOVERAGEO2}/*.js test/test_coverage.js | ${JS}

demo_coverage_build:
	./${OUT} demo/coverage --strict --o ${CACHECOVERAGEDEMO} --js --O0 --coverage

demo_coverage_run:
	@echo 'DEMO ASM COVERAGE'
	cat native_lib_js/*.js ${CACHECOVERAGEDEMO}/*.js demo/coverage/run.js | ${JS}

vim_ide:
	perl ide.pl < ide.txt
	perl ide.pl < ide_js.txt
	perl ide.pl < ide_check.txt

clean:
	rm -rf *.o mk_cache */*.o
	rm -rf ${OBJDIR} ${CACHEDIR} ${CACHETEST} ${CACHECOVERAGE} ${CACHECOVERAGEO2} ${CACHECOVERAGEDEMO}
	rm -rf ./test_all ${BINEXEC} ${OUT}
