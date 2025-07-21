#!/usr/bin/env bash

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE:-$0}")" &>/dev/null && pwd 2>/dev/null)"
source $SCRIPT_DIR/../utils/blocs.sh
exercice=$1

DESCRIPTION "ft_print_program_name" "Print the executable's name."

echo 'Test 1: "Hello World" "oooh mamaaa"'
$exercice "Hello World" "oooh mamaaa"

echo -e '\nTest 2: "oooh mamaaa"'
$exercice "oooh mamaaa"

echo -e '\nTest 3: ""'
$exercice ""

echo -e '\nTest 4: a b c d e f g h i j k lmnop'
$exercice a b c d e f g h i j k lmnop

echo -e '\nTest 5: "-1"'
$exercice "-1"
