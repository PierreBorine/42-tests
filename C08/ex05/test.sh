#!/usr/bin/env bash

readonly ex_path=$1
readonly SCRIPT_PATH=$2
readonly compile_cmd=$3
source $SCRIPT_PATH/utils/blocs.sh

DESCRIPTION "ft_strs_to_tab.c" "Display the structs."

NORMS "with 'CheckDefine' flag."
norminette "$ex_path/ft_show_tab.c" -R CheckForbiddenSourceHeader

# Compile everything
tempdir="$(mktemp -d)"
cp $SCRIPT_PATH/C08/ex05/main.c $tempdir/main.c
cp $SCRIPT_PATH/C08/ex05/ft_strs_to_tab.c $tempdir/
cp $SCRIPT_PATH/C08/ex05/head.h $tempdir/ft_stock_str.h
cp "$ex_path/ft_show_tab.c" $tempdir/
executable="$tempdir/a.out"
$compile_cmd \
	$tempdir/main.c \
	$tempdir/ft_strs_to_tab.c \
	$tempdir/ft_show_tab.c \
	-o $executable

HEADER "Testing with no arguments"
$executable

HEADER 'Testing with a single argument: "Hello World !"'
$executable "Hello World !"

HEADER 'Testing with a very long argument: "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."'
$executable "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."

HEADER 'Testing with many arguments: "Hello" " " "" "How" "are" "dOINg"'
$executable "Hello" " " "" "How" "are" "dOINg" | cat -e
