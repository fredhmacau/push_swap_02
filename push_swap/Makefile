# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmacau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 20:53:21 by fmacau            #+#    #+#              #
#    Updated: 2024/09/27 20:53:22 by fmacau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = push_swap
RM = rm -f
LIBFT = libft
CC = cc 
FLAGS = -Wall -Werror -Wextra
SRCS = ./srcs/general_functs/ft_atoi2.c \
		./srcs/process_args/ft_process.c \
		./srcs/status_answers/ft_error.c \
		./srcs/check_args/ft_check_if_characters.c 

OBJS = $(SRCS:.c=.o)
INCLUDE = -L ./libft -lft
.c.o:
	${CC} ${FLAGS} -c $< -o $@
${NAME}: ${OBJS}
	@echo "compilation libft"
	make -sC $(LIBFT)
	${CC} ${FLAGS} ${OBJS} -o ${NAME} ${INCLUDE}
all:${NAME}

.PHONY: all