#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int	main(void)
{
	int	nb1 = 15;
	int	nb2 = 2;
	int	div;
	int	mod;
	ft_div_mod(nb1, nb2, &div, &mod);
	printf("Div = %d\n", div);
	printf("Mod = %d\n", mod);
	return (0);
}
