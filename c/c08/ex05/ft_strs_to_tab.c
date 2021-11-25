/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:34:00 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/13 10:30:13 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*res;

	res = malloc(ft_strlen(src) + 1);
	if (!res)
		return (0);
	ft_strcpy(res, src);
	return (res);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tot;
	int			i;

	if (ac < 0)
		ac = 0;
	tot = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tot)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		tot[i].size = ft_strlen(av[i]);
		tot[i].str = av[i];
		tot[i].copy = ft_strdup(av[i]);
	}
	tot[i].str = NULL;
	return (tot);
	free(tot);
}
