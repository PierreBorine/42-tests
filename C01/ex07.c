#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

#define MY_TEST(my_list) \
	printf("INITIAL VALUES\n\t"); \
	for (unsigned i=0; i<sizeof(my_list)/sizeof(int); i++) \
		printf("%d, ", my_list[i]); \
	printf("\nREVERSING...\n\t"); \
	ft_rev_int_tab(my_list, sizeof(my_list)/sizeof(int)); \
	for (unsigned i=0; i<sizeof(my_list)/sizeof(int); i++) \
		printf("%d, ", my_list[i]); \
	printf("\n\n")

int	main(void)
{
int liste[] = {4, -212, 999, 3, 5, 0, -4, 472};
	MY_TEST(liste);

	int liste2[] = {4, -212, 999, 5, 0, -4, 472};
	MY_TEST(liste2);
}
