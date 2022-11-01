/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:45:44 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 20:49:22 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	top_one2four(int n, int x, int point[n][n])
{
	int	i;

	i = 0;
	while (i < n)
	{
			point[i][x] = i + 1;
			i++;
	}
}

void	bot_one2four(int n, int x, int point[n][n])
{
	int	i;

	i = 0;
	while (i < n)
	{
			point[n - i - 1][x] = i + 1;
			i++;
	}
}

void	left_one2four(int n, int x, int point[n][n])
{
	int	i;

	i = 0;
	while (i < n)
	{
			point[x][i] = i + 1;
			i++;
	}
}

void	right_one2four(int n, int x, int point[n][n])
{
	int	i;

	i = 0;
	while (i < n)
	{
			point[x][n - i - 1] = i + 1;
			i++;
	}
}

void	pt_2(int n, int point[n][n], int clue[n][n])
{
	int	x;
	int	i;

	x = 0;
	while (x < n)
	{			
		if (clue[0][x] == 4)
			top_one2four(n, x, point);
		if (clue[1][x] == 4)
			bot_one2four(n, x, point);
		if (clue[2][x] == 4)
			left_one2four(n, x, point);
		if (clue[3][x] == 4)
			right_one2four(n, x, point);
		x++;
	}
}
