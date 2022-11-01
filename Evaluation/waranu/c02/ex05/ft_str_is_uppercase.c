/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wranu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:34:39 by wranu             #+#    #+#             */
/*   Updated: 2022/10/26 09:47:02 by wranu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include      <stdio.h>
//#include      <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int   main(void)
{
        printf("%d\n", ft_str_is_uppercase("PIKL"));
        return (0);
}*/
