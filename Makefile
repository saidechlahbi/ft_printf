SRC = ft_printf.c ft_putnbr_unsigned.c ft_putchar.c\
		 ft_putstr.c ft_putnbr_baze_16.c  ft_void_hexadecimal.c ft_putnbr.c

CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re