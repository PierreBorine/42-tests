#include <stdio.h>
#include "../utils/blocs.h"

int	ft_str_is_alpha(char *str);

#define MY_TEST(str) printf("is_alpha(\"%s\"): %d\n", str, ft_str_is_alpha(str))

int	main(void)
{
	DESCRIPTION("ft_str_is_alpha", "Is the string only alphabetic.");

	MY_TEST("Hello World !");
	MY_TEST("HelloWorld");
	MY_TEST("");
}
