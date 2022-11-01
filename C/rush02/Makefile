CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c\
		ft_checkin.c\
		ft_dict2free.c\
		ft_openfilenumbers.c\
		ft_putstr.c\
		ft_conditions.c\
		ft_strdup.c\
		ft_strnlen.c\
		main.c\

OBJS = $(patsubst %.c, %.o, $(SRCS))
HEAD = header.h
NAME = rush-02

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJS): %.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all


