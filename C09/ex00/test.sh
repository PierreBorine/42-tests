#!/usr/bin/env bash

readonly ex_path=$1
readonly SCRIPT_PATH=$2
readonly compile_cmd=$3
source $SCRIPT_PATH/utils/blocs.sh

DESCRIPTION "libft_creator.sh" "Script to compile a library."

tempdir="$(mktemp -d)"
cp "$ex_path/*" $tempdir/
executable="sh $tempdir/libft_creator.sh"

EXE "$executable"

HEADER "Manual testing required."
echo Path to testing ground: "$tempdir"
