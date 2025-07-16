#include <stdio.h>

int	ft_str_is_alpha(char *str);

#define MY_TEST(str) printf("is_alpha(\"%s\"): %d\n", str, ft_str_is_alpha(str))

int	main(void)
{
	MY_TEST("Hello World !");
	MY_TEST("HelloWorld");
	MY_TEST("");
}
