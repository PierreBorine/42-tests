#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	int	i;

	struct s_stock_str * tabs = ft_strs_to_tab(argc, argv);
	i = -1;
	while (++i < argc)
	{
		printf("Index: %d\n", i);
		printf("Size: %d\n", tabs[i].size);
		printf("Str : \"%s\"\n", tabs[i].str);
		printf("Copy: \"%s\"\n\n", tabs[i].copy);
	}
}
