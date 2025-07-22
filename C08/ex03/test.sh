#!/usr/bin/env bash

readonly ex_path=$1
readonly SCRIPT_PATH=$2
readonly compile_cmd=$3
source $SCRIPT_PATH/utils/blocs.sh

DESCRIPTION "ft_point.h" "Header library."

NORMS "with 'CheckDefine' flag."
norminette "$ex_path/ft_point.h" -R CheckForbiddenSourceHeader

# Compile everything
tempdir="$(mktemp -d)"
cp $SCRIPT_PATH/C08/ex03/main.c $tempdir/main.c
cp "$ex_path/ft_point.h" $tempdir/
executable="$tempdir/a.out"
$compile_cmd $tempdir/main.c -o $executable

HEADER "Compiling the provided main.c"
$executable
HEADER "If nothing failed, it worked :)"
