/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:41:19 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 17:48:45 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	if (*str == '\0')
	{
		return (1);
	}
	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 'a' && (*(str + index) <= 'z')))
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
