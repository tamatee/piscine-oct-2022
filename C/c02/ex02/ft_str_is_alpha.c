/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:25:33 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/12 17:33:11 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		a;
	char	cur;

	i = 0;
	a = 1;
	while (str[i])
	{
		cur = str[i];
		if (str[i] == '\0')
		{
			break ;
		}
		if (!((cur >= 'A' && cur <= 'Z') || (cur >= 'a' && cur <= 'z')))
		{
			a = 0;
			break ;
		}
		i++;
	}
	return (a);
}
