/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:38:28 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/14 09:37:04 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	pp(long nb1)

{
	char	c;

	if (nb1 >= 0 && nb1 <= 9)
	{
		c = nb1 + 48;
		write(1, &c, 1);
	}
	else if (nb1 > 0)
	{
		pp(nb1 / 10);
		pp(nb1 % 10);
	}
}

void	ft_putnbr(int nb)
{
	long	nb2;

	nb2 = (long)nb;
	if (nb2 < 0)
	{
		write(1, "-", 1);
		nb2 = -nb2;
	}
	pp(nb2);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	in;

	in = 0;
	while (par[in].str != '\0')
	{
		ft_put_string(par[in].str);
		write(1, "\n", 1);
		ft_putnbr(par[in].size);
		write(1, "\n", 1);
		ft_put_string(par[in].copy);
		write(1, "\n", 1);
		in++;
	}
}
