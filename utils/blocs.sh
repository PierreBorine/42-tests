#!/usr/bin/env bash

readonly GREEN='\033[38;5;84m'
readonly RED='\033[38;5;197m'
readonly BLUE='\033[38;5;45m'
readonly PURPLE='\033[38;5;63m'
readonly PINK='\033[38;5;207m'
readonly BLACK='\033[38;5;0m'
readonly BG_GREEN='\033[48;5;84m'
readonly BG_RED='\033[48;5;197m'
readonly BG_PURPLE='\033[48;5;63m'
readonly GREY='\033[38;5;8m'
readonly BOLD='\033[1m'
readonly DEFAULT='\033[0m'
readonly CHECKMARK='\xE2\x9C\x93'

DESCRIPTION() {
  printf "$BG_PURPLE $1 $DEFAULT : $PINK$2$DEFAULT\n\n"
}

HEADER() {
	printf "\n🔧 $BOLD$1$DEFAULT\n"
}

NORMS() {
	printf "\n📚 ${BOLD}Running the Norminette"
	if [[ -z "$1" ]]; then
		printf " $1"
	fi
	printf "$DEFAULT\n"
}
