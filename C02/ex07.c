#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char my_string[] = "Hello World !";
	printf("(\"Hello World !\") => (\"%s\")\n", ft_strupcase(my_string));
}
