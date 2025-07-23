#include <unistd.h>
#include <stdio.h>
#include "../utils/blocs.h"

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	DESCRIPTION("ft_putstr_non_printable", "Print a string of characters and replace the unprintable ones with their hex values.");

	printf("EXPECTED:\nHello\\0aHow are you?\nGOT:\n");
	ft_putstr_non_printable("Hello\nHow are you?");
	write(1, "\n\n", 2);
	printf("EXPECTED:\nHello\\0aH\\07o\\08w\\09 a\\0br\\0be \\0cy\\0do\\1bu?\nGOT:\n");
	ft_putstr_non_printable("Hello\nH\ao\bw\t a\vr\ve \fy\ro\eu?");
}
