/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:43:18 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/13 14:05:14 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i += 0;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void){
	printf("%d",ft_str_is_lowercase("lofdsf"));
	printf("%d",ft_str_is_lowercase("fdsAA"));
}*/
