/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:30:08 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/25 15:15:16 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnlen(char *str)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (str[index] != 'm')
	{
		if (str[index])
			return (0);
		if (str[index] != ' ')
			count++;
		index++;
	}
	return (count);
}
