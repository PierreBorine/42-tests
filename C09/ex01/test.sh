#!/usr/bin/env bash

readonly ex_path=$1
readonly SCRIPT_PATH=$2
readonly compile_cmd=$3
source $SCRIPT_PATH/utils/blocs.sh

DESCRIPTION "Makefile" "Receipe for compiled binaries."

tempdir="$(mktemp -d)"
cp "$ex_path/Makefile" $tempdir/
cp -r "$SCRIPT_PATH/C09/ex01/*" $tempdir/

HEADER "Manual testing required."
echo Path to testing ground: "$tempdir"
