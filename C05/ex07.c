#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

#define MY_TEST(nb, expected) \
	printf("ft_is_prime(%d) :\t%d, expected %s\n", \
		nb, ft_find_next_prime(nb), expected)

int	main(void)
{
	MY_TEST(0, "2");
	MY_TEST(1, "2");
	MY_TEST(2, "2");
	MY_TEST(3, "3");
	MY_TEST(4, "5");
	MY_TEST(5, "5");
	MY_TEST(37, "37");
	MY_TEST(38, "41");
	MY_TEST(INT_MIN, "2 (but instantaneous)");
	printf("Please be patient...\n");
	MY_TEST(INT_MAX - 8, "2147483647");
	MY_TEST(INT_MAX, "2147483647");
	MY_TEST(7852, "7853");
	MY_TEST(7853, "7853");
	MY_TEST(370245351, "370245371");
	MY_TEST(370248451, "370248451");
}
