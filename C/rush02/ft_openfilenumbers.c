/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfilenumbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:49:25 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 22:44:57 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char			*ft_strdup(char *src);
int				ft_strnlen(char *str, char c);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
unsigned int	ft_atoi(char *str);

void	ft_load_dict(char *str, int n)
{
	int		i;
	char	*number;
	char	*word;

	number = (char *)malloc(sizeof(char) * ft_strnlen(str, ':'));
	word = (char *)malloc(sizeof(char) * ft_strnlen(str, '\n'));
	if (number == NULL || word == NULL)
		return ;
	i = 0;
	while (*str != ':')
		number[i++] = *str++;
	number[i] = '\0';
	g_dict[n].number = ft_atoi(number);
	i = 0;
	while (*str == ' ' || *str == ':')
		str++;
	while (*str)
		word[i++] = *str++;
	word[i] = '\0';
	g_dict[n].word = ft_strdup(word);
	free(number);
	free(word);
}

void	ft_load_str(int fd, char buff, int n_line, int line[n_line])
{
	int		n;
	int		i;
	char	*str;

	fd = open("numbers.dict", O_RDONLY);
	n = 0;
	i = 0;
	while (read(fd, &buff, 1))
	{
		if (i == 0)
			str = (char *)malloc(sizeof(char) * (line[n]));
		if (str == NULL)
			return ;
		str[i] = buff;
		if (i == line[n] - 1)
		{
			str[i] = '\0';
			ft_load_dict(str, n);
			free(str);
			i = -1;
			n++;
		}
		i++;
	}
}

int	ft_load(int fd, char buff)
{
	int	line[SIZE];
	int	n_line;
	int	size;

	n_line = 0;
	while (read(fd, &buff, 1))
	{
		size++;
		if (buff == '\n')
		{
			line[n_line] = size;
			n_line++;
			size = 0;
		}
	}
	ft_load_str(fd, buff, n_line, line);
	return (n_line);
}

int	ft_openfilenumbers(void)
{
	int		fd;
	char	buff;
	int		lenght;

	buff = '\0';
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	lenght = ft_load(fd, buff);
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (lenght);
}
