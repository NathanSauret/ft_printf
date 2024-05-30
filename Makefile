NAME = libftprintf.a
include Libft/Makefile

SRC = ./ft_printf.c	\
		./ft_print_char.c	\
		./ft_print_str.c	\
		./ft_print_pointer.c	\
		./ft_print_int.c	\
		./ft_print_unsigned_int.c	\
		./ft_print_hex.c

OBJ = $(SRC:.c=.o)

all: libft_all $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

clean: libft_clean
	rm -f $(LIBFT_OBJ) $(OBJ)

fclean: libft_fclean clean
	rm -f $(NAME)

re: libft_re fclean all

coffee:
	while [ true ]; do \
		clear; \
		echo ""; \
		echo "                   ("; \
		echo "	                     )     ("; \
		echo "               ___...(-------)-....___"; \
		echo '           .-""       )    (          ""-.'; \
		echo "      .-''''|-._             )         _.-|"; \
		echo '     /  .--.|   `""---...........---""`   |'; \
		echo "    /  /    |                             |"; \
		echo "    |  |    |                             |"; \
		echo "     \  \   |       MY CODE IS LAME       |"; \
		echo "      '\ '\ |                             |"; \
		echo "        '\ '|    BUT MY COFFEE IS GOOD    |"; \
		echo "        _/ /\                             /"; \
		echo "       (__/  \                           /"; \
		echo '    _..---""` \                         /`""---.._'; \
		echo " .-'           \                       /          '-."; \
		echo ":               '-.__             __.-'              :"; \
		echo ':                  ) ""---...---"" (                :'; \
		echo "\'._                '"--...___...--"'              _.'"; \
		echo '   \""--..__                              __..--""/'; \
		echo "     '._     """----.....______.....----"""         _.'"; \
		echo '         ""--..,,_____            _____,,..--"""'''; \
		echo '                      """------"""'; \
		sleep 0.3; \
		one; \
		clear; \
		echo ""; \
		echo "                 ("; \
		echo "	                  )      ("; \
		echo "               ___..(.------)--....___"; \
		echo '           .-""       )   (           ""-.'; \
		echo "      .-''''|-._      (       )        _.-|"; \
		echo '     /  .--.|   `""---...........---""`   |'; \
		echo "    /  /    |                             |"; \
		echo "    |  |    |                             |"; \
		echo "     \  \   |       MY CODE IS LAME       |"; \
		echo "      '\ '\ |                             |"; \
		echo "        '\ '|    BUT MY COFFEE IS GOOD    |"; \
		echo "        _/ /\                             /"; \
		echo "       (__/  \                           /"; \
		echo '    _..---""` \                         /`""---.._'; \
		echo " .-'           \                       /          '-."; \
		echo ":               '-.__             __.-'              :"; \
		echo ':                  ) ""---...---"" (                :'; \
		echo "\'._                '"--...___...--"'              _.'"; \
		echo '   \""--..__                              __..--""/'; \
		echo "     '._     """----.....______.....----"""         _.'"; \
		echo '         ""--..,,_____            _____,,..--"""'''; \
		echo '                      """------"""'; \
		sleep 0.3; \
		clear; \
		echo ""; \
		echo "               ("; \
		echo "	                  )     ("; \
		echo "               ___..(.------)--....___"; \
		echo '           .-""      )    (           ""-.'; \
		echo "      .-''''|-._      (       )        _.-|"; \
		echo '     /  .--.|   `""---...........---""`   |'; \
		echo "    /  /    |                             |"; \
		echo "    |  |    |                             |"; \
		echo "     \  \   |       MY CODE IS LAME       |"; \
		echo "      '\ '\ |                             |"; \
		echo "        '\ '|    BUT MY COFFEE IS GOOD    |"; \
		echo "        _/ /\                             /"; \
		echo "       (__/  \                           /"; \
		echo '    _..---""` \                         /`""---.._'; \
		echo " .-'           \                       /          '-."; \
		echo ":               '-.__             __.-'              :"; \
		echo ':                  ) ""---...---"" (                :'; \
		echo "\'._                '"--...___...--"'              _.'"; \
		echo '   \""--..__                              __..--""/'; \
		echo "     '._     """----.....______.....----"""         _.'"; \
		echo '         ""--..,,_____            _____,,..--"""'''; \
		echo '                      """------"""'; \
		sleep 0.3; \
		clear; \
		echo ""; \
		echo "             (         ) "; \
		echo "	              )        ("; \
		echo "               ___)...----)----....___"; \
		echo '           .-""      )    (           ""-.'; \
		echo "      .-''''|-._      (       )        _.-|"; \
		echo '     /  .--.|   `""---...........---""`   |'; \
		echo "    /  /    |                             |"; \
		echo "    |  |    |                             |"; \
		echo "     \  \   |       MY CODE IS LAME       |"; \
		echo "      '\ '\ |                             |"; \
		echo "        '\ '|    BUT MY COFFEE IS GOOD    |"; \
		echo "        _/ /\                             /"; \
		echo "       (__/  \                           /"; \
		echo '    _..---""` \                         /`""---.._'; \
		echo " .-'           \                       /          '-."; \
		echo ":               '-.__             __.-'              :"; \
		echo ':                  ) ""---...---"" (                :'; \
		echo "\'._                '"--...___...--"'              _.'"; \
		echo '   \""--..__                              __..--""/'; \
		echo "     '._     """----.....______.....----"""         _.'"; \
		echo '         ""--..,,_____            _____,,..--"""'''; \
		echo '                      """------"""'; \
		sleep 0.3; \
	done

.PHONY: all libft_all clean libft_clean fclean libft_fclean re libft_re coffee
