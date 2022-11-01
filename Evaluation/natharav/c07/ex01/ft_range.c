/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:22:57 by natharav          #+#    #+#             */
/*   Updated: 2022/10/27 16:57:14 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	dest = (int *)malloc(sizeof(int) * size);
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
