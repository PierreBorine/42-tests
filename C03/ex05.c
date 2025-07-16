#include <unistd.h>
#include <stdio.h>
// must compile with -lbsd
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	#define MY_SIZE 20

	// FT
	char my_string[35] = "Hello";
	my_string[15] = 7;
	my_string[16] = -8;
	printf("ft_strlcat:(%d)%s\n", ft_strlcat(my_string, " World !", MY_SIZE), my_string);
	ft_putstr_non_printable(my_string, sizeof(my_string));

	write(1, "\n\n", 2);

	// BSD
	char my_string2[35] = "Hello";
	my_string2[15] = 7;
	my_string2[16] = -8;
	printf("strlcat:(%zu)%s\n", strlcat(my_string2, " World !", MY_SIZE), my_string2);
	ft_putstr_non_printable(my_string2, sizeof(my_string2));

	return (0);
}
