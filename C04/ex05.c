#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi_base(char *str, char *base);

#define MY_TEST(str, expected) \
	printf("ft_atoi_base(\"%s\"):\nGOT:%d\nEXPECTED:%d\n", \
		 str, ft_atoi_base(str, my_base), expected)

int	main(void)
{
	char my_base[] = "0123456789ABCDEF";

	MY_TEST(" +--+-E7A9a82", -59305);
	MY_TEST("7FFFFFFF", 2147483647);
	MY_TEST("-7FFFFFFF", -2147483647);
	MY_TEST("B16", 2838);
	MY_TEST("3", 3);
	MY_TEST("1", 1);
	MY_TEST("0", 0);
	MY_TEST("-1", -1);
	MY_TEST("--3", 3);
	MY_TEST("-B16", -2838);
	MY_TEST("---+-+---+--78932a89", -493874);
	MY_TEST("   ---+-+---+--78932a89", -493874);
	MY_TEST("  \t ---+-+---+--78932a89", -493874);
	MY_TEST("b ---+-+---+--78932a89", 0);
	MY_TEST("  ---+-+j--+--78932a89", 0);
	MY_TEST("", 0);
}
