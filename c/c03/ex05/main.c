#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	//unsigned int	n = 13;
	char	array1[] = "rahhal";
	char	array2[] = " rizqy";

	printf("%d\n", ft_strlcat(array1, array2, 8));
	return (0);
}
