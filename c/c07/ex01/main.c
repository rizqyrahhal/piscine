#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int	main()
{
	int i;
	int *tab;
	int	min;
	int	max;

	min = 19;
	max = 27;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
			printf("tab[%d] = %d\n", i, tab[i]);
	}
	else
		printf("tozz");
	return (0);
	//tab = (int*)malloc(sizeof(*tab) * (max - min));
}
