#include "../utils/blocs.h"
#include <stdio.h>

int *ft_range(int min, int max);

#define MY_TEST(MIN, MAX) { \
	printf("ft_range(%d, %d):\t", MIN, MAX); \
	int *my_range = ft_range(MIN, MAX); \
	for (int i=0;i< MAX - MIN;i++) { \
		printf("%d, ", my_range[i]); \
	} \
	printf("\n"); \
}

int	main(void)
{
	DESCRIPTION("ft_range", "Create a brand new array of ints, between two given ints.");

	MY_TEST(0, 20);
	MY_TEST(2, 13);
	MY_TEST(-1, 4);
	MY_TEST(-20, 0);
}
