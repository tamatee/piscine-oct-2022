/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:04:43 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 12:07:21 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	if (*str == '\0')
	{
		return (str);
	}
	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 'A' && (*(str + index) <= 'Z')))
		{
			*(str + i) = 'A' - 'a';
		}
		index++;
	}
	return (str);
}
