#include "../utils/blocs.h"
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

#define MY_TEST(dest1, dest2, str, size) \
	printf("ft_strlcat(%d): \"%s\"\n", ft_strlcat(dest1, str, size), dest1); \
	printf("strlcat   (%zu): \"%s\"\n", strlcat(dest2, str, size), dest2); \
	write(1, "ft_strlcat: ", 13); \
	ft_putstr_non_printable(dest1, sizeof(dest1)); \
	write(1, "\nstrlcat   : ", 13); \
	ft_putstr_non_printable(dest2, sizeof(dest2))

int	main(void)
{
	DESCRIPTION("ft_strlcat", "Concatenate two srings until the given size, return the length.");

	#define STR1 "Hello"
	#define STR1B " World !"
	char my_string[30] = STR1;
	my_string[15] = 7;
	my_string[16] = -8;
	char my_string2[30] = STR1;
	my_string2[15] = 7;
	my_string2[16] = -8;
	printf("CONCATENATING WITH EXTRA BYTES: (\"%s\") + (\"%s\")\n", my_string, STR1B);
	MY_TEST(my_string, my_string2, STR1B, 20);

	write(1, "\n\n", 2);

	#define STR2 ""
	#define STR2B " World !"
	char my_string3[20] = STR2;
	my_string3[15] = 7;
	my_string3[16] = -8;
	char my_string4[20] = STR2;
	my_string4[15] = 7;
	my_string4[16] = -8;
	printf("CONCATENATING: (\"%s\") + (\"%s\")\n", my_string3, STR2B);
	MY_TEST(my_string3, my_string4, STR2B, sizeof(my_string3) + sizeof(STR2B));

	write(1, "\n\n", 2);

	#define STR3 "Hello "
	#define STR3B ""
	char my_string5[20] = STR3;
	char my_string6[20] = STR3;
	printf("CONCATENATING: (\"%s\") + (\"%s\")\n", my_string5, STR3B);
	MY_TEST(my_string5, my_string6, STR3B, sizeof(my_string5) + sizeof(STR3B));

	return (0);
}
