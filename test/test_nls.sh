#!/bin/bash
set -exu

rm -rf tmp
mkdir tmp
./build_nls.sh --olympic_io --fe_lib
mv cache_nls tmp/
mv nls.exe tmp/

# Interpret nls with itself and execute test_nls.nl
echo "123" | tmp/nls.exe tmp/cache_nls/ nls/nls_nl.nl --  test/tests/test_nls.nl test/tests/test_nls.nl > tmp/out
echo "c_fe_lib::print
c_olympic_io::read_int=123" > tmp/expected_out
diff tmp/out tmp/expected_out
rm -r tmp
