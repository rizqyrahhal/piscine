/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:45:30 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/06 15:25:52 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

int ft_chek(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '+' || str[i] == '-')
            return (1);
        i++;
    }
    return (0);
}

int ft_twic(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i++] != '\0')
    {
        j = 0;
        while (str[j++] != '\0')
            if (str[i] == str[j] && i != j)
                return (1);
    }
    return (0);
}

int ft_strcmp(char *str, char *base)
{
    int i;

    if (ft_strlen(str) != ft_strlen(base))
        return (1);
    i = -1;
    while (str[++i] && base[i])
        if (str[i] != base[i])
            return (1);
    return (0);

}

void	ft_putnbr(int n)
{
	int nb;
    char cnb;

	nb = n;
	if (n < 0)
	{
		write(1, "-", 1);
		nb = n * (-1);
	}
	if (nb > 10)
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
	else
    {
        cnb = nb + '0';
		write(1, &cnb, 1);
    }
}



void ft_putnbr_base(int nbr, char *base)
{
    if (*base == '\0' || ft_strlen(base) < 2
        || ft_chek(base) == 1 || ft_twic(base) == 1)
        return ;

    if (ft_strcmp("0123456789", base) == 0)
        ft_putnbr(nbr);

        //&& ft_strcmp("0123456789ABCDEF", base) == 1
        //&& ft_strcmp("01", base) == 1
        //&& ft_strcmp("poneyvif", base) == 1)
}

int main()
{
    ft_putnbr_base(500, "0123456789");
    return (0);
}
