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
