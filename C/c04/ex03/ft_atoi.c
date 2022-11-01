/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:14:05 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/19 15:24:27 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		mult;
	int		nb;

	mult = 1;
	nb = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			mult *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - '0');
	nb *= mult;
	return (nb);
}
/*
#include<stdio.h>
int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}
*/
