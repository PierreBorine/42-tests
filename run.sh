#!/usr/bin/env bash

# ▄▀▀ █▀█ █▄░█ █▀ ▀█▀ ▄▀█ █▄░█ ▀█▀ █▀ #
# ▀▄▄ █▄█ █░▀█ ▄█ ░█░ █▀█ █░▀█ ░█░ ▄█ #

readonly PROJ_PATH="$(pwd)"

readonly SCRIPT_PATH="$(
	cd -- "$(dirname "$0")" >/dev/null 2>&1
	pwd -P
)"

source $SCRIPT_PATH/utils/blocs.sh


readonly compile_cmd="cc -lbsd -Wextra -Wall -Werror -g"

# █▄▄ █░░ █▀█ ▄▀▀ █▀ #
# █▄█ █▄▄ █▄█ ▀▄▄ ▄█ #
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

soft_error() {
	printf "${RED}"
	gen_header "ERROR"
	echo $1
	printf "${NC}"
}

error() {
	printf "${RED}"
	gen_header "ERROR"
	echo $1
	printf "${NC}"
	exit 1
}

running_header() {
	echo
	printf "${CYAN}"
	gen_header "RUNNING: $1"
	printf "${NC}"
	echo
}

if [[ -z "$1" ]]; then
	error "You need to give at least a project name to test. (ex: C02)"
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

if ! [[ "$project" =~ ^C[0-9]{2}$ || "$project" =~ ^Rush[0-9]{2}$ ]]; then
	error "Argument '$project' does not match any known project."
fi
if ! [[ -d "$SCRIPT_PATH/$project" ]]; then
	error "No tests for '$project'."
fi
if [[ -z "$(ls -A $SCRIPT_PATH/$project)" ]]; then
	error "No tests for '$project'."
fi

test_type1() {
	test_file=""
	if [ -f "$SCRIPT_PATH/$project/$1.c" ]; then
		test_file="$SCRIPT_PATH/$project/$1.c"
	fi

	# compile with flags
	$compile_cmd \
		$test_file \
		$PROJ_PATH/$project/$1/*.c \
		-o /tmp/tests_c_pf/$1.o

	EXE "/tmp/tests_c_pf/$1.o"

	if [ -f "$SCRIPT_PATH/$project/$1.c" ]; then
		/tmp/tests_c_pf/$1.o
	elif [ -f "$SCRIPT_PATH/$project/$1.sh" ]; then
		"$SCRIPT_PATH/$project/$1.sh" "/tmp/tests_c_pf/$1.o"
	fi
}

test_type2() {
	"$SCRIPT_PATH/$project/$1/test.sh" "$PROJ_PATH/$project/$1" "$SCRIPT_PATH" "$compile_cmd"
}

run_exercie() {
	mkdir -p /tmp/tests_c_pf

	if [ -f "$SCRIPT_PATH/$project/$1.c" ]; then
		running_header $1
		test_type1 $1
	# elif [ -f "$SCRIPT_PATH/$project/$1.sh" ]; then
	elif [ -d "$SCRIPT_PATH/$project/$1" ]; then
		running_header $1
		test_type2 $1
	else
		soft_error "No tests for '$project/$1'."
		return
	fi

	# Run the norminette
	# if ! $(norminette $PROJ_PATH/$project/$1 -R CheckForbiddenSourceHeader); then
	# 	failure "Norminette failed !"
	# fi
}

run_all() {
	for ex_dir in $PROJ_PATH/$project/*/; do
		ex_dir=$(basename $ex_dir)
		run_exercie $ex_dir
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
	if ! [[ "$exercice" =~ ^ex[0-9]{2}(-b)?$ ]]; then
		error "Argument '$exercice' does not match any known exercice."
	fi
	run_exercie $exercice
fi
