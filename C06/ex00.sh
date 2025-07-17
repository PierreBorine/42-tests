#!/usr/bin/env bash
exercice=$1

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
