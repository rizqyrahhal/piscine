char *ft_strcapitalize(char *str)
{
    int i;
    int n;

    i = 0;
    while (str[i] != '\0')
	{
		if (n == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (n == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] <'a') ||str[i] >122 )
			n = 1;
		else
			n = 0;
		i++;
	}
	return (str);
}
