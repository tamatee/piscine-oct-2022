/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:52:25 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/12 17:58:43 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i])
	{
		if (str[i] == '\0')
		{
			break ;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			a = 0;
			break ;
		}
		i++;
	}
	return (a);
}