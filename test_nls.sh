#!/bin/bash
set -exu

rm -rf tmp
mkdir tmp
bash build_nls.sh --olympic_io --fe_lib
mv nls tmp/

echo "123" | tmp/nls/nls tmp/nls/ nls_nl.nl --  test/test_nls.nl test/test_nls.nl > tmp/out
echo "c_fe_lib::print
c_olympic_io::read_int=123" > tmp/expected_out
diff tmp/out tmp/expected_out
rm -r tmp
