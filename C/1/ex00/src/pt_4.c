/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:32:11 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 20:34:13 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pt_4(int n, int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	x = 0;
	while (x < 4)
	{
		if (band[0][x] != 0 && (band[0][x] == band[3][x]))
		{		
			if (point[1][x] != 0 && point[2][x] == 0
				&& (point[1][x] != band[0][x]))
				point[2][x] = band[0][x];
			if (point[2][x] != 0 && point[1][x] == 0
				&& (point[2][x] != band[0][x]))
				point[1][x] = band[0][x];
		}
		if (band[x][0] != 0 && (band[x][0] == band[x][3]))
		{		
			if (point[x][1] != 0 && point[x][2] == 0
				&& (point[x][1] != band[x][0]))
				point[x][2] = band[x][0];
			if (point[x][2] != 0 && point[x][1] == 0
				&& (point[x][2] != band[x][0]))
				point[x][1] = band[x][0];
		}
		x++;
	}
}
