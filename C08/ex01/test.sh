#!/usr/bin/env bash

readonly ex_path=$1
readonly SCRIPT_PATH=$2
readonly compile_cmd=$3
source $SCRIPT_PATH/utils/blocs.sh

DESCRIPTION "ft_boolean.h" "Another simple header library."

NORMS "with 'CheckDefine' flag."
norminette "$ex_path/ft_boolean.h" -R CheckForbiddenSourceHeader -R CheckDefine

# Compile everything
tempdir="$(mktemp -d)"
cp $SCRIPT_PATH/C08/ex01/main.c $tempdir/main.c
cp "$ex_path/ft_boolean.h" $tempdir/
executable="$tempdir/a.out"
$compile_cmd $tempdir/main.c -o $executable

HEADER "Testing without arguments."
$executable

HEADER "Testing with odd number of args."
$executable "HELP" "ME" "PLEASE"

HEADER "Testing with even number of args."
$executable "HELP" "PLEASE"
