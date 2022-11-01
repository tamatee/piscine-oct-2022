/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:16:21 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/22 17:16:28 by thphomph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(10));
}
*/
