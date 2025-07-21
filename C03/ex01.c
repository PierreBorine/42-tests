#include "../utils/blocs.h"
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

#define MY_TEST(str1, str2, n) \
	printf("COMPARING: (\"%s\") / (\"%s\") until (%d)\n", str1, str2, n); \
	printf("GOT      : %d\n", ft_strncmp(str1, str2, n))
	//printf("EXPECTED : %d\n", strcmp(str1, str2))

int	main(void)
{
	DESCRIPTION("ft_strncmp", "Compare two strings and their ASCI code until n bytes");

	MY_TEST("Hello", "Hello1", 5);
	MY_TEST("Hello3", "Hello1", 6);
	MY_TEST("Hello", "Hello", 6);
	MY_TEST("", "", 2);
	MY_TEST("Hey", "", 2);
	MY_TEST("", "Hey", 2);

	return (0);
}
