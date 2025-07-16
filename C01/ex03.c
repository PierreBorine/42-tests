#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int a = 9;
	int b = 4;

	int	div;
	int	mod;

	printf("DIVIDING: %d by %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("GOT     : div: %d, mod: %d\n", div, mod);
	printf("EXPECTED: div: %d, mod: %d\n", a / b, a % b);
}
