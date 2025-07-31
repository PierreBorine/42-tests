#include "../utils/blocs.h"
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

#define MY_TEST(RANGE, MIN, MAX) { \
	printf("ft_ultimate_range(%d, %d): Return len: %d\n", \
		ft_ultimate_range(RANGE, MIN, MAX), MIN, MAX); \
	for (int i=0;i<MAX-MIN;i++) { \
		printf("%d, ", *RANGE[i]); \
	} \
	printf("\n"); \
}

int	main(void)
{
	DESCRIPTION("ft_ultimate_range", "Create a brand new int range array on the given pointer, return lenght.");

	int *my_range0 = NULL;
	MY_TEST(&my_range0, 0, 20);
	int *my_range1 = NULL;
	MY_TEST(&my_range1, 2, 13);
	int *my_range2 = NULL;
	MY_TEST(&my_range2, -1, 4);
	int *my_range3 = NULL;
	MY_TEST(&my_range3, -20, 0);
}
