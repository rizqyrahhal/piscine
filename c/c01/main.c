#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
    printf("--------------------------ft_ft--------------------------\n");
    {
        int	nb;

	    nb = 1;
    	ft_ft(&nb);
	    printf("%d", nb);
    }
    printf("-----------------------ft_ultimate_ft-----------------------\n");
    {
        int	nb;
	    int	*ptr = &nb;
	    int	**ptr1 = &ptr;
	    int	***ptr2 = &ptr1;
	    int	****ptr3 = &ptr2;
	    int	*****ptr4 = &ptr3;
	    int	******ptr5 = &ptr4;
	    int	*******ptr6 = &ptr5;
	    int	********ptr7 = &ptr6;
	    int	*********ptr8 = &ptr7;
	
	    nb = 55;
	    printf("old valus : %d\n", *********ptr8);
	    ft_ultimate_ft(ptr8);
	    printf("new valus : %d\n", nb);
    }
    printf("-----------------------ft_swap-----------------------\n");
    {
        int nb1 = 15;
	    int nb2 = 12;

	    printf("%d\n%d\n", nb1, nb2);
	    ft_swap(&nb1, &nb2);
	    printf("After  Swapping : \n%d\n%d\n", nb1, nb2);
    }
    printf("-----------------------ft_div_mod-----------------------\n");
    {
        int	nb1 = 15;
	    int	nb2 = 2;
	    int	div;
	    int	mod;
	    ft_div_mod(nb1, nb2, &div, &mod);
	    printf("Div = %d\n", div);
	    printf("Mod = %d\n", mod);
    }
    printf("-----------------------ft_ultimate_div_mod-----------------------\n");
    {
        int	nbr1 = 15;
	    int	nbr2 = 7;

	    ft_ultimate_div_mod(&nbr1, &nbr2);
	    printf("Div = %d\n", nbr1);
	    printf("Mod = %d\n", nbr2);
    }
    printf("-----------------------ft_putstr-----------------------\n");
    {
        char	str[11] = "hello world";
	    ft_putstr(str);
    }
    printf("-----------------------ft_strlen-----------------------\n");
    {
        char str[] = "helo world";
	    printf("%d\n", ft_strlen(str));
    }
    printf("-----------------------ft_rev_int_tab-----------------------\n");
    {
        int	array[5] = {1, 77, -98, 1234, 5};
	    ft_rev_int_tab(array, 5);

	    int	i = -1;
	    while (++i < 5)
		printf("%d ", array[i]);
    }
    printf("-----------------------ft_sort_int_tab-----------------------\n");
    {
        int	array[5] = {1, 77, -98, 1234, 5};
	    ft_sort_int_tab(array, 5);

	    int	i = -1;
	    while (++i < 5)
		printf("%d ", array[i]);
    }
	return (0);
}