#!/bin/bash
# (c) Atinea Sp z o. o.
# Stamp: PLE 2016-06-16

set -e

if [ $# -ne 1 ]
then
	echo "Usage: $0 /path/to/instadb"
	exit 1
fi

instadb_dir=$1

rm -f $instadb_dir/nl/*

cp cache_nl/* $instadb_dir/nl/
cp native_lib_c/* $instadb_dir/nl/
cp mk_cache.c $instadb_dir/nl/
cp patchlist $instadb_dir/nl/

cp native_lib_c/c_rt_lib.* $instadb_dir/c_compiler_lib/
cp native_lib_c/c_std_lib.* $instadb_dir/c_compiler_lib/
cp native_lib_c/c_trace.c $instadb_dir/c_compiler_lib/

cp native_lib_js/* $instadb_dir/static/js/nl/
cp nianio_lib/*.nl $instadb_dir/nianio_lib/

echo "OK"
