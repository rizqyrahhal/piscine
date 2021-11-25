#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main()
{
	char	array1[] = "eklrsf";
	char	array2[] = "abcefgh";

	printf(" value is %d\n",ft_strcmp(array1, array2));
	return (0);
}
