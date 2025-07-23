#include <stdio.h>
#include "../utils/blocs.h"

char	*ft_strcapitalize(char *str);

int	main(void)
{
	DESCRIPTION("ft_strcapitalize", "Change the first character of every words in a string.");

	char	my_string[] =
		"hi, hOw are you? 42words foRty-two; fifty+and+one 4 A a";
	printf("BEFORE: %s\n", my_string);
	printf("AFTER : %s\n\n", ft_strcapitalize(my_string));

	char	my_string2[] = "Hello W0rld b=azar";
	printf("BEFORE: %s\n", my_string2);
	printf("AFTER : %s\n", ft_strcapitalize(my_string2));
}
