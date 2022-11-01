/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:21:15 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 14:52:52 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0)
		return (0);
	else
		return (1);
}
/*
#include<stdio.h>
int	main() 
{
	printf("Factorial of %d = %d", 5, ft_recursive_factorial(0));
	return 0;
}
*/
