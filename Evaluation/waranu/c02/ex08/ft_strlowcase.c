/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wranu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:17:03 by wranu             #+#    #+#             */
/*   Updated: 2022/10/26 10:23:21 by wranu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "ABCDEFGHI";
	printf("%s", ft_strlowcase(str));
}*/
