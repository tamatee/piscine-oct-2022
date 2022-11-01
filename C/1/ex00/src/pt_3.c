/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:29:40 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 21:01:45 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pt_3(int n, int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 1 && clue[1][x] == 2)
		{		
				point[0][x] = 4;
				point[3][x] = 3;
		}
		if (clue[0][x] == 1 && clue[1][x] == 3)
		{		
				point[0][x] = 4;
				band[3][x] = 3;
		}
		if (clue[0][x] == 2 && clue[1][x] == 2)
		{		
				band[0][x] = 4;
				band[3][x] = 4;
		}
		if (clue[0][x] == 2 && clue[1][x] == 3)
		{		
				point[1][x] = 4;
				band[3][x] = 3;
		}
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (clue[1][x] == 1 && clue[0][x] == 2)
		{		
				point[3][x] = 4;
				point[0][x] = 3;
		}
		if (clue[1][x] == 1 && clue[0][x] == 3)
		{		
				point[3][x] = 4;
				band[0][x] = 3;
		}
		if (clue[1][x] == 2 && clue[0][x] == 3)
		{		
				point[2][x] = 4;
				band[0][x] = 3;
		}
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 1 && clue[3][x] == 2)
		{		
				point[x][0] = 4;
				point[x][3] = 3;
		}
		if (clue[2][x] == 1 && clue[3][x] == 3)
		{		
				point[x][0] = 4;
				band[x][3] = 3;
		}
		if (clue[2][x] == 2 && clue[3][x] == 2)
		{		
				band[x][0] = 4;
				band[x][3] = 4;
		}
		if (clue[2][0] == 2 && clue[3][1] == 3)
		{		
				point[1][x] = 4;
				band[3][x] = 3;
		}
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 2 && clue[3][x] == 1)
		{		
				point[x][3] = 4;
				point[x][0] = 3;
		}
		if (clue[2][x] == 3 && clue[3][x] == 1)
		{		
				point[x][3] = 4;
				band[x][0] = 3;
		}
		if (clue[2][x] == 3 && clue[3][x] == 2)
		{		
				point[x][2] = 4;
				band[x][0] = 3;
		}
		x++;
	}
}
