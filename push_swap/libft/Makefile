NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	 ft_strlen.c 		\
	ft_strchr.c 		\
	ft_atoi.c 			\
	ft_putchar_fd.c 	\
	ft_putstr_fd.c 		\
	ft_putendl_fd.c 	\
	ft_putnbr_fd.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
