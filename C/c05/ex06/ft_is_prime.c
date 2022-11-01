/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:40:36 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 10:45:03 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
/*
#include<stdio.h>
int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 200, ft_is_prime(200));
	printf("%d -> %d\n", 201, ft_is_prime(201));
	printf("%d -> %d\n", 202, ft_is_prime(202));
	printf("%d -> %d\n", 203, ft_is_prime(203));
	printf("%d -> %d\n", 204, ft_is_prime(204));
	printf("%d -> %d\n", 205, ft_is_prime(205));
	printf("%d -> %d\n", 206, ft_is_prime(206));
	printf("%d -> %d\n", 207, ft_is_prime(207));
	printf("%d -> %d\n", 208, ft_is_prime(208));
	printf("%d -> %d\n", 209, ft_is_prime(209));
	return (0);
}
*/
