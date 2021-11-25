#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	unsigned int	nb;

	char	array1[] = "rahhal";
	char	array2[] = " rizqy jane fifwf hjewefh";
	nb = 6;

	printf("%s\n", ft_strncat(array1, array2, nb));
	return (0);
}
