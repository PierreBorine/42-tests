#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

#define MY_TEST(str) \
	printf("ft_strlen(\"%s\")\nGOT:%d\n", str, ft_strlen(str)); \
	printf("EXPECTED: %lu\n\n", strlen(str))

int main(void)
{
	MY_TEST("Hello World !");
	MY_TEST("");
	MY_TEST("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua");
}
