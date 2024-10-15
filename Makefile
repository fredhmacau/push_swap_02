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
		srcs/checks_args/ft_check_only_arg.c \
		srcs/general_functs/ft_max_index.c \
		srcs/general_functs/ft_min_index.c \
		srcs/operations/ft_operations.c \
		srcs/operations/ft_operations_2.c \
		srcs/operations/ft_operations_3.c \
		srcs/sort/ft_sort.c \
		srcs/sort/ft_sort_till_3.c \
		srcs/sort/ft_sort_till_4.c \
		srcs/sort/ft_sort_till_5.c \
		srcs/sort/ft_sort_big_numbers.c \
		srcs/stack_functs/ft_add_node_in_stack.c \
		srcs/stack_functs/ft_create_node.c \
		srcs/stack_functs/ft_free.c \
		srcs/stack_functs/ft_lstnode.c \
		srcs/stack_functs/ft_first_node.c \
		srcs/stack_functs/ft_lstsize.c \
		srcs/general_functs/ft_create_index.c \
		


OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L libft/ -lft

%.o:%.c
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJ_1} ${OBJ_2}
		@make -sC ${LIBFT}
		${CC} ${FLAGS} -s ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean: 
		${RM} ${OBJ_1} ${OBJ_2} ${NAME}
		@cd ${LIBFT} && ${MAKE} clean
fclean:
		${RM} ${NAME}
		@cd ${LIBFT} && ${MAKE} fclean

re: clean all

.PHONY: all clean fclean re
