/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:44:06 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/07 11:57:11 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
