/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:19:30 by rarahhal          #+#    #+#             */
/*   Updated: 2021/09/28 09:18:46 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nb;
	int	*ptr = &nb;
	int	**ptr1 = &ptr;
	int	***ptr2 = &ptr1;
	int	****ptr3 = &ptr2;
	int	*****ptr4 = &ptr3;
	int	******ptr5 = &ptr4;
	int	*******ptr6 = &ptr5;
	int	********ptr7 = &ptr6;
	int	*********ptr8 = &ptr7;
	
	nb = 55;
	printf("old valus : %d\n", *********ptr8);
	ft_ultimate_ft(ptr8);
	printf("new valus : %d\n", nb);
	return (0);
}
