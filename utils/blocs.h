#ifndef BLOCKS_H
#define BLOCKS_H

#include <stdio.h>

#define GREEN "\033[38;5;84m"
#define RED "\033[38;5;197m"
#define BLUE "\033[38;5;45m"
#define PURPLE "\033[38;5;63m"
#define PINK "\033[38;5;207m"
#define BLACK "\033[38;5;0m"
#define BG_GREEN "\033[48;5;84m"
#define BG_RED "\033[48;5;197m"
#define BG_PURPLE "\033[48;5;63m"
#define GREY "\033[38;5;8m"
#define BOLD "\033[1m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"

void	DESCRIPTION(char *name, char *desc) {
	printf(BG_PURPLE " %s " DEFAULT ": " PINK "%s" DEFAULT "\n\n", name, desc);
}

#endif
