/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:49 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/07 14:37:23 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	ft_print(int rn, int a, int b)
{
	char	c;

	c = a;
	write(1, &rn, 1);
	write(1, &a, 1);
	write(1, &b, 1);
	if (rn != '7')
	{
		write(1, ", ", 2);
	}
	return (0);
}

void	ft_print_comb(void)
{
	int	rn;
	int	a;
	int	b;

	rn = '0';
	while (rn <= '7')
	{
		a = rn + 1;
		while (a <= '8')
		{
			b = a + 1;
			while (b <= '9')
			{
				ft_print(rn, a, b);
				b++;
			}
			a++;
		}
		rn++;
	}
}
