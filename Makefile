NAME = libftprintf.a
include Libft/Makefile

SRC = ./ft_printf.c	\
		./ft_print_char.c	\
		./ft_print_str.c	\
		./ft_print_pointer.c	\
		./ft_print_int.c	\
		./ft_print_unsigned.c	\
		./ft_print_hex.c

OBJ = $(SRC:.c=.o)

all: libft_all $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

clean: libft_clean
	rm -f $(LIBFT_OBJ) $(OBJ)

fclean: libft_fclean clean
	rm -f $(NAME) a.out
	rm -rf .vscode

re: libft_re
	make fclean all

.PHONY: all clean fclean re
