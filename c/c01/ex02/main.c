#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int nb1 = 15;
	int nb2 = 12;

	printf("%d\n%d\n", nb1, nb2);
	ft_swap(&nb1, &nb2);
	printf("After  Swapping : \n%d\n%d\n", nb1, nb2);
}
