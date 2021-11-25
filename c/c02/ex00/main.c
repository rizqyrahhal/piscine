#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main()
{
    printf("-*-*-*----------*-*-*--ft_strcpy--*-*-*----------*-*-*-\n");
    
    char    array1[] = "";
    char    array2[] = "rahhal";
    
    printf("array1 : %s\n", array1);
    printf("array2 : %s\n", array2);
    ft_strcpy(array1, array2);
    printf("---------------\n");
    printf("array1 : %s\n", array1);
    printf("array2 : %s\n", array2);
	return (0);
}
