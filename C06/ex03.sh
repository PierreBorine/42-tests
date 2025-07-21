#!/usr/bin/env bash

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE:-$0}")" &>/dev/null && pwd 2>/dev/null)"
source $SCRIPT_DIR/../utils/blocs.sh
exercice=$1

DESCRIPTION "ft_sort_params" "Print the program's arguments, sorted by ASCII code."

echo 'Test 1: "Hello World" "oooh mamaaa"'
$exercice "Hello World" "oooh mamaaa"

echo -e '\nTest 2: "oooh mamaaa"'
$exercice "oooh mamaaa"

echo -e '\nTest 3: ""'
$exercice ""

echo -e '\nTest 4: j d j u m b d u k n "" g lmnop'
$exercice j d j u m b d u k n "" g lmnop

echo -e '\nTest 5: "-1"'
$exercice "-1"
