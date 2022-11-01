# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teecharo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 14:17:39 by teecharo          #+#    #+#              #
#    Updated: 2022/10/26 14:39:01 by teecharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec cc -Wall -Werror -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
