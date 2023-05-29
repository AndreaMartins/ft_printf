# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 17:49:27 by andmart2          #+#    #+#              #
#    Updated: 2023/05/29 18:19:20 by andmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
HEADER = ft_printf.h
HEADER_LIBFT = libft/libft.h

SRCS = ft_printf.c \
   		ft_print_uninteger.c \
		ft_print_string.c \
		ft_print_ptr.c \
		ft_print_hex.c \
		ft_print_decimal.c \
		ft_print_char_fd.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		make -C libft --no-print-directory
		cp libft/libft.a $(NAME)
		make -C libft fclean
		$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER) $(HEADER_LIBFT)
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
