/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:09:54 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/12 17:44:29 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	if (*str == '\0')
	{
		return (1);
	}
	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 'A' && (*(str + index) <= 'Z')))
		{
			index++;
		}
		else if ((*(str + index) >= 'a' && (*(str + index) <= 'z')))
		{	
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main()
{
	char str1[] ="Hello";
	char str2[] ="Hi My name is";
	char str3[] ="YOuSUdk";
	char str4[] ="mfWlfaS";

	printf("%d : %s\n",ft_str_is_alpha(str1), str1);
	printf("%d : %s\n",ft_str_is_alpha(str2), str2);
	printf("%d : %s\n",ft_str_is_alpha(str3), str3);
	printf("%d : %s\n",ft_str_is_alpha(str4), str4);
}*/
