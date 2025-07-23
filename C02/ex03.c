#include <stdio.h>
#include "../utils/blocs.h"

int	ft_str_is_numeric(char *str);

#define MY_TEST(str) \
	printf("is_numeric(\"%s\"): %d\n", str, ft_str_is_numeric(str))

int	main(void)
{
	DESCRIPTION("ft_str_is_numeric", "Is the string only numerical.");

	MY_TEST("2948723-428");
	MY_TEST("29487231428");
	MY_TEST("");
}
