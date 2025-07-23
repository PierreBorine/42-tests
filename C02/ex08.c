#include "../utils/blocs.h"
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	DESCRIPTION("ft_strlowcase", "Change every uppercase characters to lowercase.");

	char my_string[] = "Hello World !";
	printf("(\"Hello World !\") => (\"%s\")\n", ft_strlowcase(my_string));

	char my_string2[] = "UPPERCASE !!!";
	printf("(\"UPPERCASE !!!\") => (\"%s\")\n", ft_strlowcase(my_string2));
}
