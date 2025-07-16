#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char my_text[] = "Bonjour les aminches\n\t\nc\n est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\tlol.lol\n \0";
	my_text[1] = -8;
	ft_print_memory(my_text, sizeof(my_text));
	return (0);
}
