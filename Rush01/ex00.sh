#!/usr/bin/env bash
exercice=$1

echo 'Test 1: Give too many arguments'
echo './rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" 9'
$exercice

echo -e '\nTest 2: Give bad arguments'
echo './rush01 9 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"'
$exercice

echo -e '\nTest 3: Give no arguments'
echo './rush01'
$exercice

echo -e "\nTest 4: Subject's working example"
echo './rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"'
$exercice "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
