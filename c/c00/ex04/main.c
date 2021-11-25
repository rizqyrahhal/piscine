/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:34:00 by rarahhal          #+#    #+#             */
/*   Updated: 2021/09/27 15:11:20 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_is_negative(int n);

int	main(void)
{
	int	n;

	n = 0;
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
