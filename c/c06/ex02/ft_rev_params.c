/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:27:06 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/09 15:19:50 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		argc--;
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
	}
	return (0);
}
