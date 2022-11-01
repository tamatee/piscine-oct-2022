/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:15:50 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 21:16:49 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	whitespaces(char *str, int *ptr)
{
	int	count;
	int	index;

	index = 0;
	count = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] && (str[index] == 43 || str[index] == 45))
	{
		if (str[index] == 45)
			count = count * -1;
		index++;
	}
	*ptr = index;
	return (count);
}

unsigned int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	index;

	result = 0;
	sign = whitespaces(str, &index);
	while (str[index] && str[index] >= 48 && str[index] <= 57)
	{
		result = result * 10;
		result = result + str[index] - '0';
		index++;
	}
	result = result * sign;
	return (result);
}
