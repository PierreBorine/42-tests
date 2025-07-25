void	ft_swap(int *a, int *b)
{
	int	temp_a_to_b;

	temp_a_to_b = *a;
	*a = *b;
	*b = temp_a_to_b;
}
