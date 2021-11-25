/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:37:38 by rarahhal          #+#    #+#             */
/*   Updated: 2021/09/26 17:38:48 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(void)
{
	ft_putnbr(-8536545);
	return (0);
}
