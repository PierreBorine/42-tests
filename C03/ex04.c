#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

#define MY_TEST(stack, needle) \
	printf("(\"%s\") => %s\n", needle, ft_strstr(my_stack, needle))

#define THE_TEST(stack, needle) \
	printf("(\"%s\") => %s\n", needle, strstr(my_stack, needle))

int	main(void)
{
	char my_stack[] = "Hello World !";
	printf("STACK: \"%s\"", my_stack);

	printf("MINE:\n----------\n");
	MY_TEST(my_stack, "rl");
	MY_TEST(my_stack, "rrl");
	MY_TEST(my_stack, "");

	printf("\nREFERENCE:\n----------\n");
	THE_TEST(my_stack, "rl");
	THE_TEST(my_stack, "rrl");
	THE_TEST(my_stack, "");
}
