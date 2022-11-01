/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:23:48 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/26 10:52:53 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (0);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", i);
		printf("\t| original : $%s$ @ %p\n", structs[i].str, structs[i].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[i].copy, structs[i].copy);
		printf("\t|     size : %d\n", structs[i].size);
		i++;
	}
}
*/
