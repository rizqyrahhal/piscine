/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:30:45 by rarahhal          #+#    #+#             */
/*   Updated: 2021/09/25 09:37:37 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	int	i;

	i = 26;
	while (i > 0)
	{
		i--;
		ft_putchar(i + 97);
	}
}
