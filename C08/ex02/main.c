#include "ft_abs.h"
#include <stdio.h>

#define MY_TEST(nb) \
	printf("BASE: %d  ABS: %d\n", nb, ABS(nb));

int	main(void)
{
	MY_TEST(4);
	MY_TEST(-4);
	MY_TEST(0);
	MY_TEST(-1);
	MY_TEST(-4000);
}
