/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:44:47 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/02 09:27:55 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
