/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:57:04 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/13 01:01:40 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ret;

	ret = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ret);
}
