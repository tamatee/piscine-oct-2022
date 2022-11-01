/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:54:36 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 17:51:16 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	if (*str == '\0')
	{
		retunr (1);
	}
	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 32 && (*(str + index) != 127)))
		{
			index++;
		}	
		else
		{
			return (0);
		}
	}
	return (1);
}
