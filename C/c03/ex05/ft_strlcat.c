/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:06:03 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/17 14:18:04 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	destlen = 0;
	while (dest[destlen])
		destlen++;
	i = 0;
	while (src[i] && destlen + i < (size - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	if (i < size)
		dest[destlen + i] = '\0';
	if (destlen > size)
		return (srclen + size);
	return (destlen + srclen);
}
