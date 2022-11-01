/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:59:06 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/16 19:09:35 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_clue(int count, int **clue, int i, int j)
{
	if (count != clue[i][j])
		return (0);
	else
		return (1);
}

int	ft_validate_x(int **point)
{
	int		count;
	int		tmp;
	int		i;

	i = 0;
	tmp = 0;
	count = 1;
	while (i <= 3)
	{
		j = i;
		while (j <= 2)
		{
			tmp += point[j][i] - point[j + 1][i];
			if (tmp < 0)
				count++;
			if (j == 3)
				return (ft_check_clue(count), i, 0);
		}
		i++;
	}
	return (0);
}

int	ft_validate_y(int **point)
{
	int		count;
	int		tmp;
	int		i;

	j = 0;
	tmp = 0;
	count = 1;
	while (j <= 3)
	{
		i = j;
		while (i <= 2)
		{
			tmp += point[i][j] - point[i + 1][j];
			if (tmp < 0)
				count++;
			if (j == 3)
				return (ft_check_clue(count), j, 0);
		}
		i++;
	}
	return (0);
}
