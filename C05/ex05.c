#include <stdio.h>
#include <limits.h>
#include "../utils/blocs.h"

int	ft_sqrt(int nb);

#define MY_TEST(nb, expected) \
	printf("ft_sqrt(%d):\t%d, expected %s\n", \
		nb, ft_sqrt(nb), expected)

int	main(void)
{
	DESCRIPTION("ft_sqrt", "Get the square root of an int");

	MY_TEST(16, "4");
	MY_TEST(0, "0");
	MY_TEST(1, "1");
	MY_TEST(3, "0 (irrational)");
	MY_TEST(6, "0 (irrational)");
	MY_TEST(11, "0 (irrational)");
	MY_TEST(36, "6");
	MY_TEST(42, "0 (irrational)");
	MY_TEST(998001, "999");
	MY_TEST(-42, "0 (irrational)");
	MY_TEST(-1, "0 (irrational)");
	MY_TEST(INT_MIN, "");
	MY_TEST(INT_MAX, "");
}
