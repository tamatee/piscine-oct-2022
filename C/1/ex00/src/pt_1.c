/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:20:31 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 21:01:43 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pt_1(int n, int i, int point[n][n], int clue[n][n])
{
	int	k;

	i = 0;
	while (i < 4)
	{
		n = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				if ((i == 0) && clue[0][k] == 1)
					point[i][k] = 4;
				if (i == 3 && clue[1][k] == 1)
					point[i][k] = 4;
				if (j == 0 && clue[2][k] == 1)
					point[k][j] = 4;
				if (j == 3 && clue[3][k] == 1)
					point[k][j] = 4;
				k++;
			}
			n++;
		}
		i++;
	}
}
