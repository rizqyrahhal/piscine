/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:45:37 by rarahhal          #+#    #+#             */
/*   Updated: 2021/10/13 10:04:56 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

void ft_show_tab(struct s_stock_str *par);
struct  s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif
