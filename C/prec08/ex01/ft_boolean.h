/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:54:40 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 20:00:54 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_boolean.h>
#include<unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return((EVEN(nbr)) ? TRUE : FALSE)
}

int	main(int argc , char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr("I have an even number of arguments.");
	else
		ft_putstr("I have an odd number of arguments.");
}
