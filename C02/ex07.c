#include <stdio.h>
#include "../utils/blocs.h"

char	*ft_strupcase(char *str);

int	main(void)
{
	DESCRIPTION("ft_strupcase", "Change every lowercase characters to uppercase.");

	char my_string[] = "Hello World !";
	printf("(\"Hello World !\") => (\"%s\")\n", ft_strupcase(my_string));
}
