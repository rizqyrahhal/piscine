/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:41:05 by rarahhal          #+#    #+#             */
/*   Updated: 2021/09/27 10:28:31 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void);

int	main(void)
{
	int	a;
	int	b;

	a = '0';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((char)((a / 10) + '0'));
			ft_putchar((char)((a % 10) + '0'));
			ft_putchar(' ');
			ft_putchar((char)((b / 10) + '0'));
			ft_putchar((char)((b % 10) + '0'));
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
