#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main()
{
	char	*test[10];

	test[0] = "amos";
	test[1] = "figor";
	test[2] = "tige";
	test[3] = "dimod";
	test[4] = "firoeb";
	test[5] = "fi -/7dk";
	test[6] = "a";
	test[7] = "df kr";
	test[8] = "difnre";
	test[9] = "75";
	printf("%s\n", ft_strjoin(10, test, "  <)(>  "));
}
