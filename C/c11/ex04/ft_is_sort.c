/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:17:10 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/27 13:27:31 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 0;
	while (i < length - 1 && sorted)
	{
		if ((*f)(tab[i], sorted))
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tav[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
