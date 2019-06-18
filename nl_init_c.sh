#!/bin/bash

NL_DIR=$(dirname "$(realpath $0)")
OUT_DIR='nl_lib'

if [ $# -eq 1 ]
then
	OUT_DIR="$1"
fi

mkdir -p $OUT_DIR

cp $NL_DIR/native_lib_c/* $OUT_DIR
cp $NL_DIR/nianio_lib/* $OUT_DIR
