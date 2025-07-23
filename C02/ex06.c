#include <stdio.h>
#include "../utils/blocs.h"

int	ft_str_is_printable(char *str);

#define MY_TEST(str) \
	printf("is_printable(\"%s\"): %d\n", str, ft_str_is_printable(str))

int	main(void)
{
	DESCRIPTION("ft_str_is_printable", "Is the string composed only of printable characters.");

	MY_TEST("Hello World !");
	MY_TEST("Hello\nWorld !");
	MY_TEST("");
}
