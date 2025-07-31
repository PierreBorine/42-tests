#include "../utils/blocs.h"
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	DESCRIPTION("ft_strdup", "Create a new string, duplicate of the given one.");

	char my_string[] = "Hello World !";
	printf("Initial string: \"%s\"", my_string);
	char *my_new_string = ft_strdup(my_string);
	printf("Duplicate string: \"%s\"", my_new_string);
}
