/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:14:54 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 14:51:47 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	mem;

	mem = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= mem;
		power--;
	}
	return (nb);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d",ft_iterative_power(0,0));
}
*/
