#include <stdio.h>

int	ft_iterative_factorial(int nb);

#define MY_TEST(nb, expected) \
	printf("factorial(%d):\t%d, expected %s\n", \
		nb, ft_iterative_factorial(nb), expected)

int	main(void)
{
	MY_TEST(0, "1");
	MY_TEST(1, "1");
	MY_TEST(2, "2");
	MY_TEST(3, "6");
	MY_TEST(11, "39916800");
	MY_TEST(12, "479001600");
	MY_TEST(13, "undefined");
	MY_TEST(14, "undefined");
	MY_TEST(42, "undefined");
	MY_TEST(-42, "0");
	MY_TEST(-1, "0");
}
