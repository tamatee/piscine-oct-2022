/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wranu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:43:53 by wranu             #+#    #+#             */
/*   Updated: 2022/10/26 09:37:59 by wranu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include      <stdio.h>
//#include      <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int   main(void)
{
        printf("%d\n", ft_str_is_printable("iop$5"));
        return (0);
}*/
