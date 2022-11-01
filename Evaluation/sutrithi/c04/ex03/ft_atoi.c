/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sutrithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:47:11 by sutrithi          #+#    #+#             */
/*   Updated: 2022/10/25 00:51:13 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_negative(char *str)
{
	int	i;
	int	ngt;

	i = 0;
	ngt = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			ngt *= -1;
		}
			i++;
	}
	return (ngt);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ans;
	int	ngt;

	i = 0;
	ans = 0;
	ngt = is_negative(str);
	while (str[i] <= 32)
	i++;
	while (str[i] == '-' || str[i] == '+')
	i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			ans = (ans * 10) + (str[i] - '0');
			i++;
		}
		return (ans * ngt);
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	return (ans * ngt);
}
