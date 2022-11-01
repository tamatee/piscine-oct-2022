/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wranu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:51:58 by wranu             #+#    #+#             */
/*   Updated: 2022/10/26 10:24:40 by wranu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include      <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int   main(void)
{
	char str[] = "abcdefghi";
	printf("%s", ft_strupcase(str));
}*/
