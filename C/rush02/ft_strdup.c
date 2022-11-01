/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:21:51 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 22:05:13 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		index;

	index = 0;
	len = ft_strlen(src) + 1;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (0);
	while (index < len)
	{
		ptr[index] = src[index];
	index++;
	}
	return (ptr);
}
