/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:42:29 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 22:17:14 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	from1_to_9(unsigned int number_input, t_diction g_dict[number_input])
{
	int	index;

	index = 0;
	while (g_dict[index].word)
	{
		if (number_input == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			return ;
		}
		index++;
	}
}

void	from10_to_19(unsigned int number_input)
{
	int	index;

	index = 0;
	while (g_dict[index].word)
	{
		if (number_input == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			ft_putstr(" ");
			return ;
		}
		index++;
	}
}

void	from20_to_90(unsigned int number_input)
{
	int	index;

	number_input = number_input * 10;
	index = 0;
	while (g_dict[index].word)
	{
		if (number_input == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			ft_putstr(" ");
			return ;
		}
		index++;
	}
}

void	from10_to_99(unsigned int number_input)
{
	unsigned int	unit;
	unsigned int	tens;

	if (number_input >= 10 && number_input <= 19)
	{
		from10_to_19(number_input);
	}
	else if (number_input >= 20 && number_input <= 99)
	{
		tens = number_input / 10;
		unit = number_input % 10;
		from20_to_90(tens);
		from1_to_9(unit, g_dict);
	}
}

void	ft_put_hundred(void)
{
	int	index;

	index = 0;
	while (g_dict[index].word)
	{
		if (100 == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			ft_putstr(" ");
			return ;
		}
		index++;
	}
}

void	from100_to_999(unsigned int number_input)
{
	unsigned int	hundreds;

	hundreds = number_input / 100;
	number_input = number_input % 100;
	if (hundreds != 0)
	{
		from1_to_9(hundreds, g_dict);
		ft_putstr(" ");
		ft_put_hundred();
	}
	if (number_input >= 1 && number_input <= 9)
	{
		from1_to_9(number_input, g_dict);
	}
	else if (number_input >= 10 && number_input <= 99)
	{
		from10_to_99(number_input);
	}
}

void	ft_put_thous(void)
{
	int	index;
	
	index = 0;
	while (g_dict[index].word)
	{
		if (1000 == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			ft_putstr(" ");
			return ;
		}
		index++;
	}
}

void	from1000_to_999999(unsigned int number_input)
{
	if (number_input / 1000 != 0)
	{
		from100_to_999(number_input / 1000);
		ft_putstr(" ");
		ft_put_thous();
	}
	from100_to_999(number_input % 1000);
}

void	ft_put_million(void)
{
	int	index;
	
	index = 0;
	while (g_dict[index].word)
	{
		if (1000000 == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			ft_putstr(" ");
			return ;
		}
		index++;
	}
}

void	from1000000_to_999999999(unsigned int number_input)
{
	if (number_input / 1000000 != 0)
	{
		from100_to_999(number_input / 1000000);
		ft_putstr(" ");
		ft_put_million();
	}
	from1000_to_999999(number_input % 1000000);
}

void	ft_put_billion(void)
{
	int	index;
	
	index = 0;
	while (g_dict[index].word)
	{
		if (1000000000 == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			ft_putstr(" ");
			return ;
		}
		index++;
	}
}

void	ft_billion(unsigned int number_input)
{
		if (number_input != 0)
		{
			from1000000_to_999999999(number_input / 1000000000); 
			ft_putstr(" ");
			ft_put_billion();
		}
		from1000000_to_999999999(number_input % 1000000000);
}

int	check_1(unsigned int number_input, int n_line)
{
	int	index;

	index = 0;
	while (index <= n_line)
	{
		if (number_input == g_dict[index].number)
		{
			ft_putstr(g_dict[index].word);
			return(1);
		}
		index++;
	}
	return (0);
}

void	ft_conditions(unsigned int number_input)
{
	int	n_line;
	n_line = ft_openfilenumbers();
	
	if (check_1(number_input, n_line))
		return ;
	if (number_input >= 10 && number_input <= 99)
	{
		from10_to_99(number_input);
	}
	else if (number_input >= 100 && number_input <= 999)
	{
		from100_to_999(number_input);
	}
	else if (number_input >= 1000 && number_input <= 999999)
	{
		from1000_to_999999(number_input);
	}
	else if (number_input >= 1000000 && number_input <= 999999999)
	{
		from1000000_to_999999999(number_input);
	}
	else if (number_input >= 1000000000 && number_input <= 4294967295)
	{
		ft_billion(number_input);
	}
	ft_dict2free(n_line); 
}
