#include <stdio.h>
#include <string.h>
#include "../utils/blocs.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	DESCRIPTION("ft_strncpy", "Copy up to n bytes from a string to a destination.");

	// my strncpy
	char my_string[] =						"Hello World !";
	char dest_str[sizeof(my_string) + 4] =	"oh";

	ft_strncpy(dest_str, my_string, 7);

	printf("%s\n", dest_str);

	// linux strncpy
	char my_str2[] =					"Hello World !";
	char dest_str2[sizeof(my_str2) + 4] =	"oh";

	strncpy(dest_str2, my_str2, 7);

	printf("%s\n", dest_str2);
}
