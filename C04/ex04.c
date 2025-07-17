#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

#define PRINT_BASE(base) \
	write(1, "\nBASE: ", 7); \
	write(1, base, sizeof(base))

#define MY_TEST(nbr, base) \
	printf("\nft_putnbr_base(%d):\n", nbr); \
	ft_putnbr_base(nbr, base)

int	main(void)
{
	char my_base[] = "0123456789ABCDEF";
	PRINT_BASE(my_base);
	MY_TEST(0, my_base);
	MY_TEST(42, my_base);
	MY_TEST(-42, my_base);
	MY_TEST(INT_MAX, my_base);
	MY_TEST(INT_MIN, my_base);
	MY_TEST(INT_MIN + 1, my_base);
	write(1, "\n", 1);

	char my_base2[] = "rustking";
	PRINT_BASE(my_base2);
	MY_TEST(0, my_base2);
	MY_TEST(42, my_base2);
	MY_TEST(-42, my_base2);
	MY_TEST(INT_MAX, my_base2);
	MY_TEST(INT_MIN, my_base2);
	MY_TEST(INT_MIN + 1, my_base2);
	write(1, "\n", 1);

	char my_base3[] = "miP 'rpeI;";
	PRINT_BASE(my_base3);
	MY_TEST(840217557, my_base3);
	write(1, "\n", 1);

	// Test invalid bases
	char my_base4[] = "01234567890";
	PRINT_BASE(my_base4);
	MY_TEST(42, my_base4);
	write(1, "\n", 1);

	char my_base5[] = "01";
	PRINT_BASE(my_base5);
	MY_TEST(INT_MIN + 1, my_base5);
	write(1, "\n", 1);
}
