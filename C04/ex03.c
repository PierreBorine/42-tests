#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(char *str);

#define MY_TEST(str) \
	printf("ft_atoi(\"%s\"): %d\n", str, ft_atoi(str))

int	main(void)
{
	MY_TEST("78932");
	MY_TEST("2147483647 INT_MAX");
	MY_TEST("2147483648 INT_MAX");
	MY_TEST("2147483649 INT_MAX");
	MY_TEST("-2147483647 INT_MIN");
	MY_TEST("-2147483648 INT_MIN");
	MY_TEST("-2147483649 INT_MIN");
	MY_TEST("2838");
	MY_TEST("3");
	MY_TEST("1");
	MY_TEST("0");
	MY_TEST("-1");
	MY_TEST("---3");
	MY_TEST("-2838");
	MY_TEST("---+-+---+--78932a89");
	MY_TEST("   ---+-+---+--78932a89");
	MY_TEST("  \t \r \v \f \n ---+-+---+--78932a89");
	MY_TEST("d ---+-+---+--78932a89");
	MY_TEST("  ---+-+m--+--78932a89");
	MY_TEST(" - ---+-+--+--78932a89");
	MY_TEST(" + ---+-+--+--78932a89");
	MY_TEST("");
}
