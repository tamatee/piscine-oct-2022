/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:50:36 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/22 16:50:38 by thphomph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0 || (nb == 0 && power != 0))
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		result *= ft_recursive_power(nb, power - 1);
	}
	else
	{
		return (nb);
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(5, 3));
}
*/
