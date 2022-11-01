/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:38:10 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/22 16:38:28 by thphomph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(0, 0));
}
*/
