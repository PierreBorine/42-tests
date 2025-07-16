#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	printf("PRINTING A STRING\n");
	ft_putstr("Hello World idjadajsdaj!");

	printf("\n\nPRINTING AN EMPTY STRING\n");
	ft_putstr("");

	printf("\n\nPRINTING SPECIAL CHARACTERS\n");
	ft_putstr("Hello\tW	or\nld");
}
