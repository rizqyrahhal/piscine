/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:35:04 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/05 10:46:33 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		j += size;
	else
		j += i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (j);
}
