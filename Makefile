# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmacau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 12:54:53 by fmacau            #+#    #+#              #
#    Updated: 2024/10/05 12:54:54 by fmacau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = libft/
CC = cc
RM = rm -f
FLAGS = -Wall -Werror -Wextra
SRC_1 = srcs/push_swap.c \

SRC_2 = srcs/status/ft_error.c \
		srcs/general_functs/ft_count.c \
		srcs/general_functs/ft_atoi_long.c \
		srcs/checks_args/ft_check_any_arg.c \
		srcs/checks_args/ft_check_only_arg.c \
		srcs/check_sorted/ft_check_sorted_1.c \
		srcs/check_sorted/ft_check_sorted_2.c \
		srcs/operations/ft_sa.c \
		srcs/sort/ft_sort.c \
		srcs/stack_functs/ft_add_node_in_stack.c \
		srcs/stack_functs/ft_create_node.c \
		srcs/stack_functs/ft_free.c \
		srcs/stack_functs/ft_lstnode.c \
		srcs/stack_functs/ft_parse_arg.c \
		srcs/stack_functs/ft_parse_sub_arg.c \
		srcs/stack_functs/ft_lstsize.c \
		


OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L libft/ -lft

%.o:%.c
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJ_1} ${OBJ_2}
		@make -sC ${LIBFT}
		${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean: 
		${RM} ${OBJ_1} ${OBJ_2} ${NAME}
		@cd ${LIBFT} && ${MAKE} clean
fclean:
		${RM} ${NAME}
		@cd ${LIBFT} && ${MAKE} fclean

re: clean all

.PHONY: all clean fclean re
