/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:16:51 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/13 14:16:59 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 1)
			ft_print(str[i]);
		else
		{
			ft_print('\\');
			ft_print("0123456789abcdef" [str[i] / 16]);
			ft_print("0123456789abcdef" [str[i] % 16]);
		}
		i++;
	}
}

/*
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_print('\n');
	ft_putstr_non_printable("Con tu vas bie\t\v\0n");
}*/
