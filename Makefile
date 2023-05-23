# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 17:49:27 by andmart2          #+#    #+#              #
#    Updated: 2023/05/23 19:15:26 by andmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
SRC_PATH = .
LIBFT_PATH = ./libft

SRC = ft_printf.c \

SRC += $(addprefix $(LIBFT_PATH)/, 
		ft_atoi.c \
		)

OBJS := $(SRCS: .c = .0)

all: $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(NAME)$(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
