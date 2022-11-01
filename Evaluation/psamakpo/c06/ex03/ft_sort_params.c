/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psamakpo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:03:04 by psamakpo          #+#    #+#             */
/*   Updated: 2022/10/26 15:47:49 by psamakpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_loop_putstr(char **arr)
{
	int	i;

	i = 1;
	while (arr[i])
	{
		ft_putstr(arr[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				c = argv[i];
				argv[i] = argv[j];
				argv[j] = c;
			}
			j++;
		}
		i++;
	}
	ft_loop_putstr(argv);
	return (0);
}
