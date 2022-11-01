/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:13:35 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/17 18:53:16 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	setzero(int m, int n, int arr[m][n]);
void	put_result(int m, int n, int arr[m][n]);

void	pt_1(int n, int point[n][n], int clue[n][n])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			k = 0;
			while (k < n)
			{
				if ((i == 0) && clue[0][k] == 1)  //top
					point[i][k] = 4;
				if (i == 3 && clue[1][k] == 1)  //bottom
					point[i][k] = 4;
				if (j == 0 && clue[2][k] == 1)  //left
					point[k][j] = 4;
				if (j == 3 && clue[3][k] == 1)
					point[k][j] = 4;
				k++;
			}
			j++;
		}
		i++;
	}
}

void top_one2four(int n ,int x, int point[n][n])
{
	int i;

	i = 0;
	while(i < n)
	{
			point[i][x] = i + 1;
			i++;
	}
}

void bot_one2four(int n ,int x, int point[n][n])
{
	int i;

	i = 0;
	while(i < n)
	{
			point[n - i - 1][x] = i + 1;
			i++;
	}
}

void left_one2four(int n ,int x, int point[n][n])
{
	int i;

	i = 0;
	while(i < n)
	{
			point[x][i] = i + 1;
			i++;
	}
}

void right_one2four(int n ,int x, int point[n][n])
{
	int i;

	i = 0;
	while(i < n)
	{
			point[x][n - i - 1] = i + 1;
			i++;
	}
}

void	pt_2(int n, int point[n][n], int clue[n][n])
{
	int x;
	int i;

	x = 0;
	while (x < n)
	{			
		if (clue[0][x] == 4)
				top_one2four(n, x, point);
	    else if (clue[1][x] == 4)
				bot_one2four(n, x, point);
		else if (clue[2][x] == 4)
				left_one2four(n, x, point);
		else if (clue[3][x] == 4)
				right_one2four(n, x, point);
		x++;
	}
}

void	pt_3(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	//top
	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 1 && clue[1][x] == 2)
		{		
				point[0][x] = 4;
				point[3][x] = 3;
		}
		else if (clue[0][x] == 1 && clue[1][x] == 3)
		{		
				point[0][x] = 4;
				band[3][x] = 3;
		}
		else if (clue[0][x] == 2 && clue[1][x] == 2)
		{		
				band[0][x] = 4;
				band[3][x] = 4;
		}
		else if (clue[0][x] == 2 && clue[1][x] == 3)
		{		
				point[1][x] = 4;
				band[3][x] = 3;
		}
		x++;
	}
	//bottom
	x = 0;
	while (x < n)
	{
		if (clue[1][x] == 1 && clue[0][x] == 2)
		{		
				point[3][x] = 4;
				point[0][x] = 3;
		}
		else if (clue[1][x] == 1 && clue[0][x] == 3)
		{		
				point[3][x] = 4;
				band[0][x] = 3;
		}
		else if (clue[1][x] == 2 && clue[0][x] == 3)
		{	 	
				point[2][x] = 4;
				band[0][x] = 3;
		}
		x++;
	}
	//left
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 1 && clue[3][x] == 2)
		{		
				point[x][0] = 4;
				point[x][3] = 3;
		}
		else if (clue[2][x] == 1 && clue[3][x] == 3)
		{		
				point[x][0] = 4;
				band[x][3] = 3;
		}
		else if (clue[2][x] == 2 && clue[3][x] == 2)
		{		
				band[x][0] = 4;
				band[x][3] = 4;
		}
		else if (clue[2][x] == 2 && clue[3][x] == 3)
		{		
				point[x][1] = 4;
				band[x][3] = 3;
		}
		x++;
	}
	//right
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 2 && clue[3][x] == 1)
		{		
				point[x][3] = 4;
				point[x][0] = 3;
		}
		else if (clue[2][x] == 3 && clue[3][x] == 1)
		{		
				point[x][3] = 4;
				band[x][0] = 3;
		}
		else if (clue[2][x] == 3 && clue[3][x] == 2)
		{		
				point[x][2] = 4;
				band[x][0] = 3;
		}
		x++;
	}
	
}

void	pt_4(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	x = 0;
	while (x < 4)
	{
		//top & bottom
		if (band[0][x] != 0  && (band[0][x] == band[3][x]))
		{		
			if (point[1][x] != 0 && point[2][x] == 0 && (point[1][x] != band[0][x]))
				point[2][x] = band[0][x];
			else if (point[2][x] != 0 && point[1][x] == 0 && (point[2][x] != band[0][x]))
				point[1][x] = band[0][x];
			
		}
		//left & right 
		if (band[x][0] != 0 && (band[x][0] == band[x][3]))
		{		
			if (point[x][1] != 0 && point[x][2] == 0 && (point[x][1] != band[x][0]))
				point[x][2] = band[x][0];
			else if (point[x][2] != 0 && point[x][1] == 0 && (point[x][2] != band[x][0]))
				point[x][1] = band[x][0];
		}
		x++;
	}
}

void	pt_4_2(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	x = 0;
	while (x < 4)
	{
		//top & bottom
		if (band[0][x] != 0  && (band[0][x] == band[2][x]))
		{		
			if (point[1][x] != 0 && point[3][x] == 0 && (point[1][x] != band[0][x]))
				point[3][x] = band[0][x];
			else if (point[3][x] != 0 && point[1][x] == 0 && (point[3][x] != band[0][x]))
				point[1][x] = band[0][x];
			
		}
		//left & right 
		if (band[x][0] != 0 && (band[x][0] == band[x][3]))
		{		
			if (point[x][1] != 0 && point[x][3] == 0 && (point[x][1] != band[x][0]))
				point[x][3] = band[x][0];
			else if (point[x][3] != 0 && point[x][1] == 0 && (point[x][3] != band[x][0]))
				point[x][1] = band[x][0];
		}
		x++;
	}
}

void	pt_5(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	//top
	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 1 && clue[1][x] == 3 && point[1][x] == 3)
		{			
			if (point[0][x] == 0)
				point[0][x] = 4;
			if (point[2][x] == 0)
				point[2][x] = 1;
			if (point[3][x] == 0)
				point[3][x] = 2;
		}
		else if (clue[0][x] == 1 && clue[1][x] == 3 && point[1][x] == 2)
		{		
			if (point[0][x] == 0)
				point[0][x] = 4;
			if (point[2][x] == 0)
				point[2][x] = 3;
			if (point[3][x] == 0)
				point[3][x] = 1;
		}
		else if (clue[0][x] == 2 && clue[1][x] == 2 && point[0][x] == 2) 
		{
			if(point[3][x] != 2 && point[3][x] != 3)
			{
				if (point[1][x] == 0)
					point[1][x] = 4;
				if (point[1][x] == 0)
					point[1][x] = 1;
				if (point[1][x] == 0)
					point[1][x] = 3;
			}
		}
		else if (clue[0][x] == 2 && clue[1][x] == 2 && point[0][x] == 3)
		{
			if (point[3][x] != 3 && point[3][x] != 2)
			{
				if (point[1][x] == 0)
					point[1][x] = 4;
				if (point[2][x] == 0)
					point[2][x] = 1;
				if (point[3][x] == 0)
					point[3][x] = 2;
			}
		}
		x++;
	}
	//bottom
	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 3 && clue[1][x] == 1 && point[2][x] == 3)
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 1;
			if (point[3][x] == 0)
				point[3][x] = 4;
		}
		else if (clue[0][x] == 3 && clue[1][x] == 1 && point[2][x] == 2)
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 3;
			if (point[3][x] == 0)
				point[3][x] = 4;
		}
		else if (clue[0][x] == 2 && clue[1][x] == 2 && point[3][x] == 2) 
		{	
			if (point[3][x] != 2 && point[3][x] != 3)
			{
				if (point[2][x] == 0)
					point[2][x] = 4;
				if (point[1][x] == 0)
					point[1][x] = 1;
				if (point[0][x] == 0)
					point[0][x] = 3;
			}
		}
		else if (clue[0][x] == 2 && clue[1][x] == 2 && point[3][x] == 3)
		{		
		 	if (point[0][x] != 3 && point[0][x] != 2)	
			{
				if (point[2][x] == 0)
					point[2][x] = 4;
				if (point[1][x] == 0)
					point[1][x] = 1;
				if (point[0][x] == 0)
					point[0][x] = 2;
			}
		}

		x++;
	}
	//left
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][1] == 3)
		{		
			if (point[x][0] == 0)
				point[x][0] = 4;
			if (point[x][2] == 0)
				point[x][2] = 1;
			if (point[x][3] == 0)
				point[x][3] = 2;
		}
		else if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][1] == 2)
		{		
			if (point[x][0] == 0)
				point[x][0] = 4;
			if (point[x][2] == 0)
				point[x][2] = 3;
			if (point[x][3] == 0)
				point[x][3] = 1;
		}
		else if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][0] == 2 && point[x][3] != 2)
		{
			if (point[x][1] == 0)
				point[x][1] = 4;
			if (point[x][2] == 0)
				point[x][2] = 1;
			if (point[x][3] == 0)
				point[x][3] = 3;
		}
		else if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][0] == 3 && point[x][3] != 3)
		{		
			if (point[x][1] == 0)
				point[x][1] = 4;
			if (point[x][2] == 0)
				point[x][2] = 1;
			if (point[x][3] == 0)
				point[x][3] = 2;
		}
		x++;
	}
	//right
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 3 && clue[3][x] == 1 && point[x][2] == 3)
		{		
			if (point[x][0] == 0)
				point[x][0] = 2;
			if (point[x][1] == 0)
				point[x][1] = 1;
			if (point[x][3] == 0)
				point[x][3] = 4;
		}
		else if (clue[2][x] == 3 && clue[3][x] == 1 && point[x][2] == 2)
		{		
			if (point[x][0] == 0)
				point[x][0] = 1;
			if (point[x][1] == 0)
				point[x][1] = 3;
			if (point[x][3] == 0)
				point[x][3] = 4;
		}
		else if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][3] == 2)
		{
			if (point[x][0] != 2 && point[x][0] != 3) 
			{	
				if (point[x][2] == 0)
					point[x][2] = 4;
				if (point[x][1] == 0)
					point[x][1] = 1;
				if (point[x][0] == 0)
					point[x][0] = 3;
			}
		}
		else if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][3] == 3)
		{		
			if (point[x][0] != 3 && point[x][0] != 2)
			{
				if (point[x][2] == 0)
					point[x][2] = 4;
				if (point[x][1] == 0)
					point[x][1] = 1;
				if (point[x][0] == 0)
					point[x][0] = 2;
			}
		}

		x++;
	}
	
}

void	pt_6(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;

	//top
	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 1 && clue[1][x] == 3 && point[0][x] == 4 && point[3][x] == 1) 
		{		
			if (point[1][x] == 0)
				point[1][x] = 2;
			if (point[2][x] == 0)
				point[2][x] = 3;
		}
		if (clue[0][x] == 1 && clue[1][x] == 3 && point[0][x] == 4 && point[1][x] == 1) 
		{		
			if (point[2][x] == 0)
				point[2][x] = 3;
			if (point[3][x] == 0)
				point[3][x] = 2;
		}
		if (clue[0][x] == 1 && clue[1][x] == 3 && point[0][x] == 4 && point[1][x] == 3) 
		{		
			if (point[2][x] == 0)
				point[2][x] = 1;
			if (point[3][x] == 0)
				point[3][x] = 2;
		}
		if (clue[0][x] == 2 && clue[1][x] == 2 && point[0][x] == 3 && point[1][x] == 4) 
		{		
			if (point[2][x] == 0)
				point[2][x] = 1;
			if (point[3][x] == 0)
				point[3][x] = 2;
		}
		if (clue[0][x] == 2 && clue[1][x] == 2 && point[1][x] == 4 && point[2][x] == 2) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[4][x] == 0)
				point[4][x] = 3;
		}
		if (clue[0][x] == 2 && clue[1][x] == 3 && point[0][x] == 1 && point[1][x] == 4) 
		{		
			if (point[2][x] == 0)
				point[2][x] = 3;
			if (point[3][x] == 0)
				point[3][x] = 2;
		}
		if (clue[0][x] == 2 && clue[1][x] == 3 && point[1][x] == 4 && point[3][x] == 2) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[2][x] == 0)
				point[2][x] = 3;
		}
		if (clue[0][x] == 2 && clue[1][x] == 3 && point[0][x] == 3 && point[1][x] == 4) 
		{		
			if (point[2][x] == 0)
				point[2][x] = 2;
			if (point[3][x] == 0)
				point[3][x] = 1;
		}
		if (clue[0][x] == 2 && clue[1][x] == 3 && point[0][x] == 2 && point[1][x] == 4) 
		{		
			if (point[2][x] == 0)
				point[2][x] = 3;
			if (point[3][x] == 0)
				point[3][x] = 1;
		}
		x++;
	}
	//bottom
	x = 0;
	while (x < n)
	{
		if (clue[0][x] == 3 && clue[1][x] == 1 && point[0][x] == 1 && point[3][x] == 4) 
		{		
			if (point[1][x] == 0)
				point[1][x] = 3;
			if (point[2][x] == 0)
				point[2][x] = 2;
		}
		if (clue[0][x] == 3 && clue[1][x] == 1 && point[2][x] == 1 && point[3][x] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		if (clue[0][x] == 3 && clue[1][x] == 1 && point[3][x] == 4 && point[2][x] == 3) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 1;
		}
		if (clue[0][x] == 3 && clue[1][x] == 2 && point[3][x] == 1 && point[2][x] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		if (clue[0][x] == 3 && clue[1][x] == 2 && point[2][x] == 4 && point[0][x] == 2) 
		{		
			if (point[3][x] == 0)
				point[3][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		if (clue[0][x] == 3 && clue[1][x] == 2 && point[3][x] == 3 && point[2][x] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 2;
		}
		if (clue[0][x] == 3 && clue[1][x] == 2 && point[3][x] == 2 && point[2][x] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		x++;
	}
	//left
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][0] == 4 && point[x][3] == 1) 
		{		
			if (point[x][1] == 0)
				point[x][1] = 2;
			if (point[x][2] == 0)
				point[x][2] = 3;
		}
		if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][0] == 4 && point[x][1] == 1) 
		{		
			if (point[x][2] == 0)
				point[x][2] = 3;
			if (point[x][3] == 0)
				point[x][3] = 2;
		}
		if (clue[2][x] == 1 && clue[3][x] == 3 && point[x][0] == 4 && point[x][1] == 3) 
		{		
			if (point[x][3] == 0)
				point[x][3] = 1;
			if (point[x][3] == 0)
				point[x][3] = 2;
		}
		if  (clue[2][x] == 2 && clue[3][x] == 2 && point[x][0] == 3 && point[x][1] == 4) 
		{		
			if (point[x][2] == 0)
				point[x][2] = 1;
			if (point[x][3] == 0)
				point[x][3] = 2;
		}
		if (clue[2][x] == 2 && clue[3][x] == 2 && point[x][1] == 4 && point[x][2] == 2) 
		{		
			if (point[x][0] == 0)
				point[x][0] = 1;
			if (point[x][4] == 0)
				point[x][4] = 3;
		}
		if (clue[2][x] == 2 && clue[3][x] == 3 && point[x][0] == 1 && point[x][1] == 4) 
		{		
			if (point[x][2] == 0)
				point[x][2] = 3;
			if (point[x][3] == 0)
				point[x][3] = 2;
		}
		if (clue[2][x] == 2 && clue[3][x] == 3 && point[x][1] == 4 && point[x][3] == 2) 
		{		
			if (point[x][0] == 0)
				point[x][0] = 1;
			if (point[x][2] == 0)
				point[x][2] = 3;
		}
		if (clue[2][x] == 2 && clue[3][x] == 3 && point[x][0] == 3 && point[x][1] == 4) 
		{		
			if (point[x][2] == 0)
				point[x][2] = 2;
			if (point[x][3] == 0)
				point[x][3] = 1;
		}
		if (clue[2][x] == 2 && clue[3][x] == 3 && point[x][0] == 2 && point[x][1] == 4) 
		{		
			if (point[x][2] == 0)
				point[x][2] = 3;
			if (point[x][3] == 0)
				point[x][3] = 1;
		}
		x++;
	}
	//right
	x = 0;
	while (x < n)
	{
		if (clue[2][x] == 3 && clue[3][x] == 1 && point[0][x] == 1 && point[3][x] == 4) 
		{		
			if (point[1][x] == 0)
				point[1][x] = 3;
			if (point[2][x] == 0)
				point[2][x] = 2;
		}
		if (clue[2][x] == 3 && clue[3][x] == 1 && point[x][2] == 1 && point[x][3] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		if (clue[2][x] == 3 && clue[3][x] == 1 && point[x][3] == 4 && point[x][2] == 3) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 1;
		}
		if (clue[2][x] == 3 && clue[3][x] == 2 && point[x][3] == 1 && point[x][2] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 2;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		if (clue[2][x] == 3 && clue[1][3] == 2 && point[x][2] == 4 && point[x][0] == 2) 
		{		
			if (point[3][x] == 0)
				point[3][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		if (clue[2][x] == 3 && clue[3][x] == 2 && point[x][3] == 3 && point[x][2] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 2;
		}
		if (clue[2][x] == 3 && clue[3][x] == 2 && point[x][3] == 2 && point[x][2] == 4) 
		{		
			if (point[0][x] == 0)
				point[0][x] = 1;
			if (point[1][x] == 0)
				point[1][x] = 3;
		}
		x++;
	}
	
}

int sum_tob(int n, int index, int point[n][n])
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (i < n)
	{
		total += point[i][index];
		i++;
	}
	return (total);
}

int sum_ler(int n, int index, int point[n][n])
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (i < n)
	{
		total += point[index][i];
		i++;
	}
	return (total);
}


void	pt_7(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;
	int i;
	int zero[2];

	//top & bottom
	i = 0;
	while(i < n)
	{
		x = 0;
		zero[0] = 0;
		zero[1] = 0;
		while (x < n)
		{
			if (point[x][i] == 0) 
			{
				zero[0] = zero[0] + 1;	
				zero[1] = x;
			}
			x++;
		}
		if (zero[0] == 1)
		{
			point[zero[1]][i] = 10 - sum_tob(4, i, point);
		}
		i++;
	} 
}

void	pt_8(int n,int point[n][n], int clue[n][n], int band[n][n])
{
	int	x;
	int i;
	int zero[2];

	//left & right
	i = 0;
	while(i < n)
	{
		x = 0;
		zero[0] = 0;
		zero[1] = 0;
		while (x < n)
		{
			if (point[i][x] == 0) 
			{
				zero[0] = zero[0] + 1;	
				zero[1] = x;
			}
			x++;
		}
		if (zero[0] == 1)
		{
			point[i][zero[1]] = 10 - sum_ler(4, i, point);
		}
		i++;
	} 
}

void	plot(int n, int point[n][n], int clue[n][n])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < n)
	{	
		if (i == 0)
		{
			k = 0;
			printf("  ");
			while (k < n)
			{
				printf("%d ", clue[0][k]);
				k++;
			}
			printf("\n  ");
			k = 0;
			while (k < n)
			{	
				printf("--");
				k++;
			}
			printf("\n");
		}
	
		j = 0;
		while (j < n)
		{
			if (j == 0)
				printf("%d|", clue[2][i]);
			if (j > 0)
				printf(" ");
			printf("%d", point[i][j]); 
			if (j == 3)
				printf("|%d", clue[3][i]);
			j++;
		}
		printf("\n");
		i++;
	}
	k = 0;
	printf("  ");
	while (k < n)
	{	
		printf("--");
		k++;
	}
	printf("\n  ");
	k = 0;
	while (k < n)
	{
		printf("%d ", clue[1][k]);
		k++;
	}
	printf("\n");
}

int main()
{
	int clue[4][4] = {
						{4, 3, 2, 1},
						{1, 2, 2, 2},
						{4, 3, 2, 1},
						{1, 2, 2, 2},
									};
	int point[4][4];
	int band[4][4];
	//give zero to array
	setzero(4, 4, point);
	setzero(4, 4, band);

	//put_result(4, 4, point);
	//printf("\n");
	//put_result(4, 4, clue);
	//printf("\n");

	plot(4, point, clue);
	printf("\n");
	//pattern_1 for 1 & 4;
	pt_1(4, point, clue);
	printf("pattern 1\n");
	plot(4, point, clue);
	printf("\n");

	pt_2(4, point, clue);
	printf("pattern 2\n");
	plot(4, point, clue);
	printf("\n");

	//pattern ;  clues& band 3,4
	pt_3(4, point, clue, band);
	printf("pattern3\n");
	plot(4, point, clue);
	printf("\n"); 
	put_result(4, 4, band);
	printf("\n");

	//pattern ;check band 3,4 & put number
	pt_4(4, point, clue, band);
	printf("pattern 4\n");
	plot(4, point, clue);
	printf("\n"); 
	put_result(4, 4, band);
	printf("\n");

	//pattern ;check band 3,4 & put number
	pt_4_2(4, point, clue, band);
	printf("pattern 4_2\n");
	plot(4, point, clue);
	printf("\n"); 
	put_result(4, 4, band);
	printf("\n");
	
	//pattern ; 1 point &,2 clue & put number
	pt_5(4, point, clue, band);
	printf("pattern 5\n");
	plot(4, point, clue);
	printf("\n"); 

	//pattern ; 2 point &,2 clue & put 2 number
	pt_6(4, point, clue, band);
	printf("pattern 6\n");
	plot(4, point, clue);
	printf("\n"); 
	
	//pattern ; 3 point and put remaining for top & bottom
	pt_7(4, point, clue, band);
	printf("pattern 7\n");
	plot(4, point, clue);
	printf("\n");
 
	//pattern ; 3 point and put remaining for top & bottom
	pt_8(4, point, clue, band);
	printf("pattern 8\n");
	plot(4, point, clue);
	printf("\n"); 

	//setzero(4, 4, band);
	put_result(4, 4, band);
	printf("\n"); 
	//pt_4(4, point, clue, band);
	//pt_5(4, point, clue, band);
	//pt_6(4, point, clue, band);
	//pt_7(4, point, clue, band);
	//pt_8(4, point, clue, band);

	//printf("round 2\n");
	//plot(4, point, clue);
	//printf("\n"); 
	//put_result(4, 4, band);
	//printf("\n");

}
