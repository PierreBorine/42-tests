#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

#define MY_TEST(my_list) \
	printf("INITIAL VALUES\n\t"); \
	for (unsigned i=0; i<sizeof(my_list)/sizeof(int); i++) \
		printf("%d, ", my_list[i]); \
	printf("\nSORTING...\n\t"); \
	ft_sort_int_tab(my_list, sizeof(my_list)/sizeof(int)); \
	for (unsigned i=0; i<sizeof(my_list)/sizeof(int); i++) \
		printf("%d, ", my_list[i]); \
	printf("\n\n")

int	main(void)
{
	int liste[] = {4, -212, 999, 3, 5, 0, -4, 472};
	printf("Testing even list\n");
	MY_TEST(liste);

	int liste2[] = {4, -212, 999, 5, 0, -4, 472};
	printf("Testing odd list\n");
	MY_TEST(liste2);

	int liste3[] = {4, -212, 999, 3, 4, 5, 0, -4, 472};
	printf("Testing odd list with duplicate\n");
	MY_TEST(liste3);

	int liste4[] = {4, -212, 999, 5, 4, 0, -4, 472};
	printf("Testing even list with duplicate\n");
	MY_TEST(liste4);
}
