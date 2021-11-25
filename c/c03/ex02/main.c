#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char	array1[] = "abcd";
	char	array2[] = "efgh";

	printf("%s\n", ft_strcat(array1, array2));
	return (0);
}
