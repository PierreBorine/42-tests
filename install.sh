#!/usr/bin/env bash

RED='\033[0;31m'
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
NC='\033[39m'

SCRIPT_PATH="$( cd -- "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )"

gen_header() {
	$SCRIPT_PATH/.bin/header-gen $@
}

mkdir -p /tmp/tests_c_pf/bin

printf "${GREEN}"
gen_header "INSTALLING BAT"
printf "${NC}"

bat_version="0.25.0"
if [ ! -f /tmp/tests_c_pf/bin/bat_${bat_version}_amd64.deb ]; then
	curl -L \
		https://github.com/sharkdp/bat/releases/download/v${bat_version}/bat_${bat_version}_amd64.deb \
		-o /tmp/tests_c_pf/bin/bat_${bat_version}_amd64.deb
fi
dpkg --extract /tmp/tests_c_pf/bin/bat_${bat_version}_amd64.deb \
	/tmp/tests_c_pf/bin/
mv /tmp/tests_c_pf/bin/usr/bin/bat $SCRIPT_PATH/.bin/bat

echo "fish: 'alias bat $SCRIPT_PATH/.bin/bat'"
echo "fish: 'alias cat \"$SCRIPT_PATH/.bin/bat -pp\"'"
echo
echo "posix: 'alias bat=$SCRIPT_PATH/.bin/bat'"
echo "posix: 'alias cat=\"$SCRIPT_PATH/.bin/bat -pp\"'"
