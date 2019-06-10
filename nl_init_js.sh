#!/bin/bash

NL_DIR=$(dirname "$(realpath $0)")
CACHE_DIR=$(mktemp -d)
OUT_DIR='nl_lib'

if [ $# -eq 1 ]
then
	OUT_DIR="$1"
fi

$NL_DIR/mk_cache.exe $NL_DIR/nianio_lib --js --o $CACHE_DIR

mkdir -p $OUT_DIR
cat $NL_DIR/native_lib_js/*.js $CACHE_DIR/*.js > $OUT_DIR/nl_lib.js

rm -rf $CACHE_DIR
