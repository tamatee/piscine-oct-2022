/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:34:26 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 20:35:17 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pt_5(int n, int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 1 && clue[1][x] == 3 && point[1][x] == 3)
		{		
				point[0][x] = 4;
				point[2][x] = 1;
				point[3][x] = 2;
		}
		if (clue[0][x] == 1 && clue[1][x] == 3 && point[1][x] == 2)
		{		
				point[0][x] = 4;
				point[2][x] = 3;
				point[3][x] = 1;
		}
		if (clue[0][x] == 2 && clue[1][x] == 2 && point[0][x] == 2)
		{
				point[1][x] = 4;
				point[2][x] = 1;
				point[3][x] = 3;
		}
		if (clue[0][x] == 2 && clue[1][x] == 2 && point[0][x] == 3)
		{		
				point[1][x] = 4;
				point[2][x] = 1;
				point[3][x] = 2;
		}
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 3 && clue[1][x] == 1 && point[2][x] == 3)
		{		
				point[0][x] = 2;
				point[1][x] = 1;
				point[3][x] = 4;
		}
		if (clue[0][x] == 3 && clue[1][x] == 1 && point[2][x] == 2)
		{		
				point[0][x] = 1;
				point[1][x] = 3;
				point[3][x] = 4;
		}
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][1] == 3)
		{		
				point[x][0] = 4;
				point[x][2] = 1;
				point[x][3] = 2;
		}
		if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][1] == 2)
		{		
				point[x][0] = 4;
				point[x][2] = 3;
				point[x][3] = 1;
		}
		if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][0] == 2)
		{
				point[x][1] = 4;
				point[x][2] = 1;
				point[x][3] = 3;
		}
		if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][0] == 3)
		{		
				point[x][1] = 4;
				point[x][2] = 1;
				point[x][3] = 2;
		}
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 3 && clue[3][x] == 1 && point[x][2] == 3)
		{		
				point[x][0] = 2;
				point[x][1] = 1;
				point[x][3] = 4;
		}
		if (clue[2][x] == 3 && clue[3][x] == 1 && point[x][2] == 2)
		{		
				point[x][0] = 1;
				point[x][1] = 3;
				point[x][3] = 4;
		}
		x++;
	}
}
