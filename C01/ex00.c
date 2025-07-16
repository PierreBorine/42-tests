#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	test_int = 19;

	printf("Initial: %d\n", test_int);
	ft_ft(&test_int);
	printf("Final: %d\n", test_int);
}
