#include <stdio.h>

char *ft_strdup(char *src);

int	main()
{
	char	array[] = "hello";
	char	*p;
	p = ft_strdup(array);
	printf("%s\n", p);
}
