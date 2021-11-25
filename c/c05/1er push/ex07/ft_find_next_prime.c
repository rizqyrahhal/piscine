/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:35:11 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/07 12:13:23 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chek_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if ((nb % i) == 0)
			prime = 0;
		i++;
	}
	if (prime == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_chek_is_prime(nb))
		nb++;
	return (nb);
}
