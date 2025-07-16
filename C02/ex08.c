#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char my_string[] = "Hello World !";
	printf("(\"Hello World !\") => (\"%s\")\n", ft_strlowcase(my_string));

	char my_string2[] = "UPPERCASE !!!";
	printf("(\"UPPERCASE !!!\") => (\"%s\")\n", ft_strlowcase(my_string2));
}
