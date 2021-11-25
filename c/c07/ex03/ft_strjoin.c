/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:48:17 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/12 17:16:14 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		a;
	int		b;
	int		c;
	
	tab = malloc(sizeof(strs));
	if (!tab)
		return (0);
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
			tab[c++] = strs[a][b++];
		b = 0;
		while (sep[b] != '\0' && a != size - 1)
			tab[c++] = sep[b++];
		a++;
	}
	tab[c] = '\0';
	return (tab);
}
