/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:08:06 by natharav          #+#    #+#             */
/*   Updated: 2022/10/27 17:19:22 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*dest;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	dest = (int *)malloc(sizeof(int) * size);
	if (!dest)
	{
		*range = 0;
		return (-1);
	}
	*range = dest;
	i = 0;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	return (size);
}
