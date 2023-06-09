# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 17:49:27 by andmart2          #+#    #+#              #
#    Updated: 2023/06/01 13:30:50 by andmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
HEADER = ft_printf.h

SRCS = ft_printf.c \
		ft_print_char_l.c \
		ft_print_string_l.c \
		ft_print_number_l.c \
		ft_print_unsigned_l.c \
		ft_print_hexa_l.c \
		ft_print_pointer_l.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

		$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER) $(HEADER_LIBFT)
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
