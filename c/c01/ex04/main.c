#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main()
{
	int	nbr1 = 15;
	int	nbr2 = 7;

	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("Div = %d\n", nbr1);
	printf("Mod = %d\n", nbr2);
	return (0);
}
