/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:29:59 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/09 15:34:14 by rarahhal         ###   ########.fr       */
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

int	main(int argc, char	**argv)
{
	if (argc)
	{
		write(1, argv[0], ft_strlen(argv[0]));
		write(1, "\n", 1);
	}
	return (0);
}
