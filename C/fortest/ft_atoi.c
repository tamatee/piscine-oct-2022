/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:14:05 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/19 18:23:03 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/*
int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	mcheck;
	
	mcheck = 1;
	result = 0;
	while (str[i])
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}*/
int	ft_atoi(char *str)
{
	int		i;
	int		mult;
	int		nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n'|| str[i] == '\t')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}


int	main(int args, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		printf("%d",ft_atoi(argv[i]));
		i++;
	}
}
