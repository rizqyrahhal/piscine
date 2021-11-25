#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				i = 0;
			}
			else
				i++;
		}
}

int	main()
{
	int	array[5] = {1, 77, -98, 1234, 5};
	ft_sort_int_tab(array, 5);

	int	i = -1;
	while (++i < 5)
		printf("%d ", array[i]);
	return (0);
}
