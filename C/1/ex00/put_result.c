/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_result.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:47:57 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/16 04:03:53 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	nbr(int i)
{
	char	c;

	if (i == 0)
		return ;
	c = '0' + i % 10;
	i = i / 10;
	nbr(i);
	putstr(&c);
}

void	putnbr(int i)
{
	if (i == 0)
		putstr("0");
	nbr(i);
}

void	put_result(int m, int n, int arr[m][n])
{
	int	i;
	int	j;

	i = 0;
	while (i < m)
	{
		j = 0;
		while (j < n)
		{
			putnbr(arr[i][j]);
			if (j != 3)
				putstr(" ");
			j++;
		}
		i++;
		putstr("\n");
	}
}
