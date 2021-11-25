void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	tmp;

	i = 0;
	n = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[n];
		tab[n] = tmp;
		i++;
		n--;
	}
}