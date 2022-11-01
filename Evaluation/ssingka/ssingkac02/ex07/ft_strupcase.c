/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:17:46 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 12:04:18 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	index;

	if (*str == '\0')
	{
		return (str);
	}
	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 'a' && (*(str + index) <= 'z')))
		{
			*(str + i) = 'a' - 'A';
		}
		index++;
	}
	return (str);
}
