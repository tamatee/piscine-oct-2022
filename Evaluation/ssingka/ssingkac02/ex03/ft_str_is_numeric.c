/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:31:09 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 17:46:32 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	if (*str == '\0')
	{
		return (1);
	}
	index = 0;
	while (*(str + index) != '\0' )
	{
		if ((*(str + index) >= '0' && (*(str + index) <= '9')))
		{
			index++;
		}
		else
		{
			return (0);
		}
		return (1);
	}
}
