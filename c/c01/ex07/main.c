#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
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

int	main()
{
	int	array[5] = {1, 77, -98, 1234, 5};
	ft_rev_int_tab(array, 5);

	int	i = -1;
	while (++i < 5)
		printf("%d ", array[i]);
	return (0);
}
