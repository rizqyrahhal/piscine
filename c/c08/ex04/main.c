#include <stdio.h>
#include "ft_stock_str.h"

/*int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}*/

#include "stdlib.h"
#include "string.h"
int	main()
{
	char **av;
	int ac = 3;
	av = malloc(sizeof(av) * ac);
	av[0] = strdup("string1");
	av[1] = strdup("string2");
	av[2] = strdup("string3");
	ft_show_tab(ft_strs_to_tab(3, av));
	return (0);
}
