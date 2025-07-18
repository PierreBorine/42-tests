#include <stdio.h>

int	ft_recursive_power(int nb, int power);

#define MY_TEST(nb, power, expected) \
	printf("power(%d, %d):\t%d, expected %s\n", \
		nb, power, ft_recursive_power(nb, power), expected)

int	main(void)
{
	MY_TEST(0, 0, "1");
	MY_TEST(0, 1, "1");
	MY_TEST(1, 0, "1");
	MY_TEST(1, 1, "2");
	MY_TEST(3, 1, "6");
	MY_TEST(11, 2, "39916800");
	MY_TEST(12, 9, "undefined");
	MY_TEST(13, 3, "2197");
	MY_TEST(14, 5, "537824");
	MY_TEST(42, 2, "1764");
	MY_TEST(-42, 2, "1764");
	MY_TEST(-1, 1, "-1");
	MY_TEST(-1, 2, "1");
	MY_TEST(42, 42, "undefined");
}
