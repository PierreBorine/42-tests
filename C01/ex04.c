#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int a = 9;
	int b = 4;

	printf("DIVIDING: %d by %d\n", a, b);

	printf("EXPECTED: div: %d, mod: %d\n", a / b, a % b);
	ft_ultimate_div_mod(&a, &b);
	printf("GOT     : div: %d, mod: %d\n", a, b);
}
