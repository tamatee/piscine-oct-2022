/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:01:10 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/13 12:56:55 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			i += 0;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str2[] = "chan";
	printf("%s",ft_strupcase(str2));
	//printf("%s",ft_strupcase("adfad"));
	return(0);
}*/
