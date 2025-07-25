#include <stdio.h>
#include <stdlib.h>
#include "../utils/blocs.h"

char	**ft_split(char *str, char *charset);

void	MY_TEST(char *charset, char *str)
{
	char **splits = ft_split(str, charset);
	for (int i=0;splits[i] != NULL;i++) {
		printf("SPLIT %d: %s\n", i+1, splits[i]);
	}
}

int	main(void)
{
	DESCRIPTION("ft_split", "Split a string based on a character set.");

	HEADER("Testing normal string.");
	MY_TEST("nm", "I love algeas and geas, whenever I see one of theas, I see myself eating one by the fire !");

	HEADER("Testing empty string.");
	MY_TEST("help", "");

	HEADER("Testing empty charset.");
	MY_TEST("", "Hello");

	HEADER("Testing empty string with empty charset.");
	MY_TEST("", "");

	HEADER("Testing with separator at the start and end.");
	MY_TEST("b", "bHellob");
}
