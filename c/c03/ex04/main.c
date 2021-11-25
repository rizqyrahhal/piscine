#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main()
{
	char	array1[] = "too andm se  ormsetore st an dmorg itadd";
	char	array2[] = "set";

	printf("%s\n", ft_strstr(array1, array2));
	return (0);
}
