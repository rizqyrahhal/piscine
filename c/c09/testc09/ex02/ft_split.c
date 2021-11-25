/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:10:54 by RizQy             #+#    #+#             */
/*   Updated: 2021/10/15 07:23:55 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset && charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	num_of_splits(char *str, char *charset)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (str && str[0] == '\0')
		return (0);
	while (str && str[i] && is_in(charset, str[i]))
		i++;
	while (str && str[i] != '\0')
	{
		if (is_in(charset, str[i]) && str[i + 1] != '\0'
			&& !is_in(charset, str[i + 1]))
			num++;
		i++;
	}
	return (num);
}

int	len_of_split(char *str, char *charset, int index)
{
	int	len;

	len = 0;
	while (str && str[index] && is_in(charset, str[index]))
		index++;
	while (str && str[index] && !is_in(charset, str[index]))
	{
		len++;
		index++;
	}
	return (len);
}

char	*split(char *str, char *charset, int index, int len)
{
	int		i;
	char	*split_str;	

	split_str = malloc(sizeof(char) * (len + 1));
	if (!split_str)
		return (NULL);
	i = 0;
	(void)charset;
	while (i < len)
		split_str[i++] = str[index++];
	split_str[i] = '\0';
	return (split_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**splits;
	int		num_of_splits_;
	int		len_of_split_;
	int		index;
	int		i;

	num_of_splits_ = num_of_splits(str, charset);
	splits = malloc(sizeof(char *) * (num_of_splits_ + 1));
	if (!splits)
		return (NULL);
	i = 0;
	index = 0;
	while (i < num_of_splits_)
	{
		while (str && str[index] && is_in(charset, str[index]))
			index++;
		len_of_split_ = len_of_split(str, charset, index);
		splits[i] = split(str, charset, index, len_of_split_);
		index += len_of_split_;
		while (str && str[index] && is_in(charset, str[index]))
			index++;
		i++;
	}
	splits[i] = NULL;
	return (splits);
}

/*int main()
{
    char *ss = "     hakam     tawol    ";
    char **sss = ft_split(ss, " ,o");

    for (int i = 0; sss[i] != NULL; i++) {
        printf("|%s|\n", sss[i]);
    }

    return (0);
}*/
