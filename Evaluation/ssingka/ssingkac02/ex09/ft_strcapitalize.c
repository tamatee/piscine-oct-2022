/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:12:17 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/13 01:02:19 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (count == 1)
				str[i] = str[i] - 32;
				count = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			count = 0;
		else
		{
			count = 1;
		}
		i++;
	}
	return (str);
}

/*int	main(){
	char	str[] = "THIS SSSdaW YED BEEMJ daKL AAKLdaa =)$5- , ADW sad 085sA20s";
	char	str1[] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	printf("%s\n",ft_strcapitalize(str));
	printf("%s\n",ft_strcapitalize(str1));
}*/
