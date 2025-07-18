#include <stdio.h>

int	ft_fibonacci(int index);

#define MY_TEST(nb, expected) \
	printf("fibonacci(%d):\t%d, expected %s\n", \
		nb, ft_fibonacci(nb), expected)

int	main(void)
{
	MY_TEST(0, "0");
	MY_TEST(0, "0");
	MY_TEST(1, "1");
	MY_TEST(1, "1");
	MY_TEST(3, "2");
	MY_TEST(6, "8");
	MY_TEST(11, "89");
	MY_TEST(12, "144");
	MY_TEST(13, "13");
	MY_TEST(14, "377");
	MY_TEST(42, "267914296");
	printf("Please wait... this is normal (~8s) :)\n");
	MY_TEST(46, "1836311903");
	MY_TEST(-42, "-1");
	MY_TEST(-1, "-1");
}
