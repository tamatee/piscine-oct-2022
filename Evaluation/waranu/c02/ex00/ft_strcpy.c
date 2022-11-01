/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wranu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:46:46 by wranu             #+#    #+#             */
/*   Updated: 2022/10/19 12:08:46 by wranu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	ch_arr1[20];
	char	ch_arr2[20];

	printf("Enter first string (ch_arr1): ");
	gets(ch_arr1);

	printf("Enter second string (ch_arr2): ");
	gets(ch_arr2);

	printf("\nCopying first string into second... \n\n");
    	ft_strcpy(ch_arr2, ch_arr1);

    	printf("First string (ch_arr_1) = %s\n", ch_arr1);
    	printf("Second string (ch_arr_2) = %s\n", ch_arr2);

    	printf("\nCopying \"Greece\" string into ch_arr1 ... \n");
    	ft_strcpy(ch_arr1, "Greece");

    	printf("\nCopying \"Slovenia\" string into ch_arr2 ... \n\n");
    	ft_strcpy(ch_arr2, "Slovenia");

    	printf("First string (ch_arr_1) = %s\n", ch_arr1);
    	printf("Second string (ch_arr_2) = %s\n", ch_arr2);

    	return 0;
}*/
