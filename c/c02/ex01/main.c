#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);

int	main()
{
	printf("-*-*-*----------*-*-*--ft_strncpy--*-*-*----------*-*-*-\n");
        
	char    array11[] = "";
	char    array22[] = "rizqy";

	printf("array11 : %s\n", array11);
	printf("array22 : %s\n", array22);
	ft_strncpy(array11, array22, 2);
	printf("---------------\n");
	printf("array11 : %s\n", array11);
	printf("array22 : %s\n", array22);
	return (0);
}
