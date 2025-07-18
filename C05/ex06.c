#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb);

#define MY_TEST(nb, expected) \
	printf("ft_is_prime(%d) :\t%d, expected %s\n", \
		nb, ft_is_prime(nb), expected)

int	main(void)
{
	MY_TEST(0, "0");
	MY_TEST(1, "0");
	MY_TEST(2, "1");
	MY_TEST(3, "1");
	MY_TEST(4, "0");
	MY_TEST(5, "1");
	MY_TEST(37, "1");
	MY_TEST(97, "1");
	MY_TEST(42, "0");
	MY_TEST(7852, "0");
	MY_TEST(7853, "1");
	MY_TEST(-42, "0");
	MY_TEST(-1, "0");
	MY_TEST(-2, "0");
	MY_TEST(-3, "0");
	MY_TEST(370245351, "0");
	MY_TEST(370248451, "1");
	MY_TEST(INT_MAX, "1");
}
