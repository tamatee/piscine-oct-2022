/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:12:56 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 21:15:17 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char *av[])
{
	unsigned int	number_input;

	if (ac == 2)
	{
		if ((ft_checkin(av[1])))
			return (1);
		number_input = ft_atoi(av[1]);
		ft_conditions(number_input);
	}
	else if (ac == 3)
	{
		number_input = ft_atoi(av[2]);
	}
	else
	{
		display_error();
		return (1);
	}
	write(1, "\n", 1);
	return (0);
}
