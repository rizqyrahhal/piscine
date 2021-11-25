#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int i;
	int	*tab;
	int	min;
	int	max;

	min = 3;
	max = 9;
	i = max -min;
	ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
			printf("tab[%d] = %d\n", i, tab[i]);
		printf("%d\n", i);
	}
	return (0);
	//tab = (int*)malloc(sizeof(*tab) * (max - min));
}
