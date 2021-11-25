#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	unsigned int	n = 2;

	char	array1[] = "abcdef";
	char	array2[] = "azcdef";

	printf(" value is %d\n",ft_strncmp(array1, array2, n));
	return (0);
}
