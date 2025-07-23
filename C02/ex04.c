#include <stdio.h>
#include "../utils/blocs.h"

int	ft_str_is_lowercase(char *str);

#define MY_TEST(str) printf("is_lowercase(\"%s\"): %d\n", str, ft_str_is_lowercase(str))

int	main(void)
{
	DESCRIPTION("ft_str_is_lowercase", "Is the string only lowercase alphabetic characters.");

	MY_TEST("helloworld");
	MY_TEST("HelloWorld");
	MY_TEST("");
}
