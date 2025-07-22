#!/usr/bin/env bash

readonly ex_path=$1
readonly SCRIPT_PATH=$2
readonly compile_cmd=$3
source $SCRIPT_PATH/utils/blocs.sh

DESCRIPTION "ft_abs.h" "Annoying header library."

NORMS "with 'CheckDefine' flag."
norminette "$ex_path/ft_abs.h" -R CheckForbiddenSourceHeader -R CheckDefine

# Compile everything
tempdir="$(mktemp -d)"
cp $SCRIPT_PATH/C08/ex02/main.c $tempdir/main.c
cp "$ex_path/ft_abs.h" $tempdir/
executable="$tempdir/a.out"
$compile_cmd $tempdir/main.c -o $executable

HEADER "Testing without arguments."
$executable
