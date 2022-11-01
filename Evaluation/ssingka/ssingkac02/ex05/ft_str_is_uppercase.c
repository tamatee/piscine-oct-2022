/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:46:15 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 17:50:03 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	if (*str == '\0')
	{
		return (1);
	}
	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 'A' && (*(str + index) <= 'Z' )))
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
