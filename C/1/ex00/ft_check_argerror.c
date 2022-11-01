/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argerror.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:04:10 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 23:06:25 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>

bool	ft_check_argerror(int m, int n, int clue[m][n])
{
	int	i;
	int	a;
	bool	b;

	i = 0;
	b = false;
	while (i < 4)
	{
		a = clue[0][i] + clue[1][i];
		if (a > 5)
		{
			b = true;
			break ;
		}
		i++;
	}
	return(b);
}

