#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

#define MY_TEST(str1, str2, n) \
	printf("CONCATENATING:\n(\"%s\") + ", str1); \
	printf("(\"%s\") until (%d) => \"%s\"\n", str2, n, ft_strncat(str1, str2, n))

int	main()
{
	char my_string[100] = "Hello";
	MY_TEST(my_string, " World !", 5);

	char my_string2[100] = "Bonjour les";
	MY_TEST(my_string2, " amis", 2);

	char my_string3[100] = "Bonjour les";
	MY_TEST(my_string3, "", 5);

	char my_string4[100] = "";
	MY_TEST(my_string4, "World !", 3);

	return (0);
}
