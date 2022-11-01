/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2V2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:14:39 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/09 17:13:51 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_comb2(int a, int b)
{
	ft_print('0' + a / 10);
	ft_print('0' + a % 10);
	ft_print(' ');
	ft_print('0' + b / 10);
	ft_print('0' + b % 10);
	if (! (a == 98 && b == 99))
	{
		ft_print(',');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = '0';
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_comb2(a, b);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
