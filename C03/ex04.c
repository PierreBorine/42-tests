#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

#define MY_TEST(stack, needle) \
	printf("(\"%s\") => \"%s\"\n", needle, ft_strstr(stack, needle))

#define THE_TEST(stack, needle) \
	printf("(\"%s\") => \"%s\"\n", needle, strstr(stack, needle))

int	main(void)
{
	char my_stack[] = "Hello World !";
	printf("TESTING: (\"%s\")\n", my_stack);
	printf("MINE:\n----------\n");
	MY_TEST(my_stack, "rl");
	MY_TEST(my_stack, "rrl");
	MY_TEST(my_stack, "");
	printf("REFERENCE:\n----------\n");
	THE_TEST(my_stack, "rl");
	THE_TEST(my_stack, "rrl");
	THE_TEST(my_stack, "");

	char my_stack2[] = "";
	printf("\nTESTING: (\"%s\")\n", my_stack2);
	printf("MINE:\n----------\n");
	MY_TEST(my_stack2, "rl");
	MY_TEST(my_stack2, "rrl");
	MY_TEST(my_stack2, "");
	printf("REFERENCE:\n----------\n");
	THE_TEST(my_stack2, "rl");
	THE_TEST(my_stack2, "rrl");
	THE_TEST(my_stack2, "");
}
