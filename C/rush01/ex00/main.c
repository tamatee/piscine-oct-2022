/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_r01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:44:29 by natharav          #+#    #+#             */
/*   Updated: 2022/10/16 23:28:19 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include"put_result.c"
#include"ft_check_argerror.c"
void	put_result(int m, int n, int arr[m][n]);
bool	ft_check_argerror(int m, int n, int clue[m][n]);
int	len(char *argv)
{
	int	i;

	i = 7;
	while (argv[i])
	{
		i++;
	}
	if (i == 31)
		return (0);
	return (1);
}

int	validate_args(char *argv, int n, int m, int arr[n][m])
{
	int	i;
	int	j;

	i = 0;
	while (i <= n - 1)
	{
		j = 0;
		while (j <= m - 1)
		{
			if (*argv >= '1' && *argv <= '4')
			{
				arr[i][j] = *argv - '0';
				argv = argv + 2;
			}
			else
			{
				write (1, "Error\n", 6);
				return (0);
			}
			j ++;
		}
		i ++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	clue[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (len(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	validate_args(argv[1], 4, 4, clue);
	if (ft_check_argerror(4,4,clue))
	{
		write(1, "Error\n", 6);
	}
	int point[4][4];
	int band[4][4];
	//give zero to array
	setzero(4, 4, point);
	setzero(4, 4, band);

	//put_result(4, 4, point);
	//
	//put_result(4, 4, clue);
	//

	
	
	//pattern_1 for 1 & 4;
	pt_1(4, point, clue);
	
	

	pt_2(4, point, clue);

	
	

	//pattern ;  clues& band 3,4
	pt_3(4, point, clue, band);

	
	 
	put_result(4, 4, band);
	

	//pattern ;check band 3,4 & put number
	pt_4(4, point, clue, band);

	
	 
	put_result(4, 4, band);
	

	//pattern ;check band 3,4 & put number
	pt_4_2(4, point, clue, band);
	
	
	 
	put_result(4, 4, band);
	
	
	//pattern ; 1 point &,2 clue & put number
	pt_5(4, point, clue, band);
	
	
	 

	//pattern ; 2 point &,2 clue & put 2 number
	pt_6(4, point, clue, band);
	
	
	 
	
	//pattern ; 3 point and put remaining for top & bottom
	pt_7(4, point, clue, band);
	
	
	
 
	//pattern ; 3 point and put remaining for top & bottom
	pt_8(4, point, clue, band);

	
	 

	//setzero(4, 4, band);
	put_result(4, 4, point);
	 
	//pt_4(4, point, clue, band);
	//pt_5(4, point, clue, band);
	//pt_6(4, point, clue, band);
	//pt_7(4, point, clue, band);
	//pt_8(4, point, clue, band);

	//printf("round 2\n");
	//
	// 
	//put_result(4, 4, band);
	//

}
