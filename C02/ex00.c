#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	// my strcpy
	char my_string[] =					"Hello World !";
	char dest_str[sizeof(my_string) + 4] =	"oh";

	ft_strcpy(dest_str, my_string);

	printf("%s\n", dest_str);

	// linux strcpy
	char my_str2[] =					"Hello World !";
	char dest_str2[sizeof(my_str2) + 4] =	"oh";

	strcpy(dest_str2, my_str2);

	printf("%s\n", dest_str2);
}
