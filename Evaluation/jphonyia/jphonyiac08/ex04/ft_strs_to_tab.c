/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:52:49 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/25 23:26:41 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(str) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*take;
	int			i;

	take = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
	if (take == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		take[i].size = ft_strlen(av[i]);
		take[i].str = ft_strdup(av[i]);
		take[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (take);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	t_stock_str	*take;
	take = ft_strs_to_tab(3, argv);

	for(int i = 0;i < argc;i++)
	{
			printf("%d\n",take[i].size);
			printf("%s\n",take[i].str);
			printf("%s\n",take[i].copy);
	}
	free(take);
	return (0);
}
*/
