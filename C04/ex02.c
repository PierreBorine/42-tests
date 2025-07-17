#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42090842);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-42);
}
