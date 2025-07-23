#include <stdio.h>
#include "../utils/blocs.h"
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

#define MY_TEST(STRS, SEP) { \
	printf("SEP(\"%s\")\nRESULT: \"%s\"\n\n", SEP, \
		ft_strjoin(sizeof(STRS)/sizeof(STRS[0]), STRS, SEP)); \
}

int	main(void)
{
	DESCRIPTION("ft_strjoin", "Concat an array of strings, with a separator.");

	char *my_strings[6];
	my_strings[0] = "Hello";
	my_strings[1] = " World !";
	my_strings[2] = " I ";
	my_strings[3] = "(=D)";
	my_strings[4] = "Am HEEERE :]";
	my_strings[5] = "HeLp.";
	
	MY_TEST(my_strings, "");
	MY_TEST(my_strings, " ");
	MY_TEST(my_strings, "\n");
	MY_TEST(my_strings, ",");
	MY_TEST(my_strings, "");
	MY_TEST(my_strings, "Hello World !");

	printf("Testing free capabilities...\n");
	printf("Testing freeing a normal string.\n");
	char *my_final_string = ft_strjoin(
		sizeof(my_strings)/sizeof(my_strings[0]),
		my_strings,	""
	);
	printf("RESULT: \"%s\"\n", my_final_string);
	free(my_final_string);
}
