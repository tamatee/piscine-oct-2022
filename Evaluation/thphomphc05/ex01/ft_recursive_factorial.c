/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:26:53 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/22 15:27:04 by thphomph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(5));
}
*/
