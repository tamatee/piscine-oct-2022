/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:32:44 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/24 22:18:46 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

# define BYTE 1
# define SIZE 100 

typedef struct diction
{
	unsigned int	number;
	char			*word;
}	t_diction;

t_diction	g_dict[SIZE];

int					ft_openfilenumbers(void);
unsigned int		ft_atoi(char *str);
void				display_error(void);
void				ft_conditions(unsigned int number_input);
void				ft_putstr(char *str);
int					ft_checkin(char *str);
void				ft_dict2free(int n);

#endif
