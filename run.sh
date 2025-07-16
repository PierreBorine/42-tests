#!/usr/bin/env bash

RED='\033[0;31m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
NC='\033[39m'

SCRIPT_PATH=${BASH_SOURCE%/*}

gen_header() {
	$SCRIPT_PATH/.bin/header-gen $@
}

failure() {
	printf "${RED}"
	gen_header "FAILURE"
	echo $1
	printf "${NC}"
	exit 1
}

error() {
	printf "${RED}"
	gen_header "ERROR"
	echo $1
	printf "${NC}"
	exit 1
}

if [[ -z "$1" ]]; then
	failure "You need to give at least a project name to test. (ex: C02)"
fi

project=$1

printf "${GREEN}"
#echo ◢
gen_header "HELLO :D"
printf "${PURPLE}"
gen_header "$USER"
printf "${ORANGE}"
gen_header "PROJECT: $project"
#echo ◥
printf "${NC}"


if ! [[ "$project" =~ ^C[0-9]{2}$ ]]; then
	failure "Argument '$project' does not match any known project."
fi
if ! [[ -d "$SCRIPT_PATH/$project" ]]; then
	failure "No tests for '$project'."
fi
if [[ -z "$( ls -A $SCRIPT_PATH/$project )" ]]; then
	failure "No tests for '$project'."
fi


run_exercie() {
	mkdir -p /tmp/tests_c_pf
	echo
	printf "${CYAN}"
	gen_header "RUNNING: $1"
	printf "${NC}"
	echo
	# compile with flags
	cc -lbsd -Wextra -Wall -Werror \
		"$SCRIPT_PATH/$project/$1.c" \
		./$project/$1/*.c \
		-o /tmp/tests_c_pf/$1.o
	# execute the test program
	/tmp/tests_c_pf/$1.o
}

run_all() {
	for ex_dir in ./$project/*/
	do
		ex_dir=$(basename $ex_dir)
		if [ -f "$SCRIPT_PATH/$project/$ex_dir.c" ]; then
			run_exercie $ex_dir
		fi
	done
}


# Case 1: No exercise is precised, running all
if [ -z "$2" ]; then
	printf "${BLUE}"
	gen_header RUNNING: ALL
	printf "${NC}"
	run_all

# Case 2: An exercise is precised, running it only
else
	exercice=$2
	if ! [[ "$exercice" =~ ^ex[0-9]{2}$ ]]; then
		failure "Argument '$exercice' does not match any known exercice."
	fi
	if [ ! -f "$SCRIPT_PATH/$project/$exercice.c" ]; then
		failure "No tests for '$project/$exercice'."
	fi

	run_exercie $exercice
fi
