/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wranu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:39:44 by wranu             #+#    #+#             */
/*   Updated: 2022/10/26 10:08:22 by wranu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
//#include	<string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("2Rt44"));
	return (0);
}*/
