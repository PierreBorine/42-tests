#!/usr/bin/env bash
exercice=$1

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
