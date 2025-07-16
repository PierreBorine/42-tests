#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	my_a;
	int	my_b;

	my_a = 12;
	my_b = 42;
	printf("a: %d, b: %d\nswapping...\n", my_a, my_b);
	ft_swap(&my_a, &my_b);
	printf("a: %d, b: %d\n", my_a, my_b);
}
