#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, int len)
{
	int		i;
	char	*res;

	if (src == NULL)
		return (NULL);
	len++;
	res = malloc(len);
	if (res == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		res[i] = src[i];
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	res = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i], res[i].size);
	}
	res[ac].str = 0;
	return (res);
}
