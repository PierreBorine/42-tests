#include <unistd.h>
#include <stdio.h>
// Must compile with '-lbsd'
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

char	*int2hex(char *hex_buf, long n)
{
	int	rem;
	int	i;

	i = 1;
	while (i >= 0)
	{
		rem = n % 16;
		if (rem < 10)
			hex_buf[i] = rem + '0';
		else
			hex_buf[i] = rem + 'a' - 10;
		n /= 16;
		i--;
	}
	return (hex_buf);
}

void	ft_putstr_non_printable(char *str, unsigned size)
{
	char	hex[2];
	long final_addr = (long int)str + size;

	while ((long int)str < final_addr)
	{
		if (*str < 32 || *str > 127)
		{
			write(1, "\\", 1);
			write(1, int2hex(hex, *str), 2);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	printf("FT_STRLCPY\n");
	char my_src[] = "Hello World !";
	char my_dest[sizeof(my_src) + 6];
	ft_strlcpy(my_dest, my_src, sizeof(my_dest));
	ft_putstr_non_printable(my_dest, sizeof(my_dest));

	write(1, "\n\n", 2);

	printf("BSD STRLCPY\n");
	char my_src2[] =						"Hello World !";
	char my_dest2[sizeof(my_src2) + 6] =	"Hejadkjnhasldas";
	strlcpy(my_dest2, my_src2, sizeof(my_dest2));
	ft_putstr_non_printable(my_dest2, sizeof(my_dest2));
}
