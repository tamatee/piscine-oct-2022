/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:17:10 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 22:37:29 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_error(void)
{
	write(1, "Error\n", 6);
}

int	ft_checkin(char *str)
{
	while (*str)
	{
		while (*str)
		{
			if (*str != ' ' && !(*str >= 9 && *str <= 13))
				break ;
			str++;
		}
		if (!(*str >= '0' && *str <= '9'))
		{
			display_error();
			return (1);
		}
		str++;
	}
	return (0);
}
