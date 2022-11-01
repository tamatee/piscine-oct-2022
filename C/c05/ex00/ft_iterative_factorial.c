/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:13:20 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 14:42:12 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	mem;

	count = 1;
	mem = 1;
	if (nb < 0)
		mem = 0;
	while (count <= nb && nb >= 0)
	{
		mem *= count;
		count++;
	}
	return (mem);
}
/*
#include<stdio.h>
int	main(void)
{
	int a =	ft_iterative_factorial(-1);
	printf("%d",a);
}
*/
