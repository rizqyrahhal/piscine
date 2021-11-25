/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:12:05 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/12 11:11:11 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		return (tab);
	}
}
