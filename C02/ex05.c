#include <stdio.h>
#include "../utils/blocs.h"

int	ft_str_is_uppercase(char *str);

#define MY_TEST(str) printf("is_uppercase(\"%s\"): %d\n", str, ft_str_is_uppercase(str))

int	main(void)
{
	DESCRIPTION("ft_str_is_uppercase", "Is the string only uppercase alphabetic characters.");

	MY_TEST("Hello World !");
	MY_TEST("HelloWorld");
	MY_TEST("HELLOWORLD");
	MY_TEST("");
}
