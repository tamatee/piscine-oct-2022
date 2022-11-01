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