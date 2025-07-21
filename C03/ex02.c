#include "../utils/blocs.h"
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

#define MY_TEST(str1, str2) \
	printf("CONCATENATING:\n(\"%s\") + ", str1); \
	printf("(\"%s\") => \"%s\"\n", str2, ft_strcat(str1, str2))

int	main()
{
	DESCRIPTION("ft_strcat", "Concatenate two strings");

	char my_string[100] = "Hello";
	MY_TEST(my_string, " World !");

	char my_string2[100] = "Bonjour les";
	MY_TEST(my_string2, " amis");

	char my_string3[100] = "Bonjour les";
	MY_TEST(my_string3, "");

	char my_string4[100] = "";
	MY_TEST(my_string4, "World !");

	return (0);
}
