/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:12:23 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/24 12:32:49 by thphomph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	while (nb < 2)
	{
		nb = 2;
	}
	i = 2;
	while ((i < nb))
	{
		if (((nb % i) == 0))
		{
			i = 2;
			nb++;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(100000));
	printf("%d\n", ft_find_next_prime(1000000000));
}
*/
