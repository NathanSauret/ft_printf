LIBFT_NAME = Libft/libft.a

LIBFT_SRC = ./Libft/ft_atoi.c	\
			./Libft/ft_bzero.c	\
			./Libft/ft_calloc.c	\
			./Libft/ft_isalnum.c	\
			./Libft/ft_isalpha.c	\
			./Libft/ft_isascii.c	\
			./Libft/ft_isdigit.c	\
			./Libft/ft_isprint.c	\
			./Libft/ft_itoa.c	\
			./Libft/ft_memchr.c	\
			./Libft/ft_memcmp.c	\
			./Libft/ft_memcpy.c	\
			./Libft/ft_memmove.c	\
			./Libft/ft_memset.c	\
			./Libft/ft_putchar_fd.c	\
			./Libft/ft_putendl_fd.c	\
			./Libft/ft_putnbr_fd.c	\
			./Libft/ft_putstr_fd.c	\
			./Libft/ft_split.c	\
			./Libft/ft_strchr.c	\
			./Libft/ft_strdup.c	\
			./Libft/ft_striteri.c	\
			./Libft/ft_strjoin.c	\
			./Libft/ft_strlcat.c	\
			./Libft/ft_strlcpy.c	\
			./Libft/ft_strlen.c	\
			./Libft/ft_strmapi.c	\
			./Libft/ft_strncmp.c	\
			./Libft/ft_strnstr.c	\
			./Libft/ft_strrchr.c	\
			./Libft/ft_strtrim.c	\
			./Libft/ft_substr.c	\
			./Libft/ft_tolower.c	\
			./Libft/ft_toupper.c	\
			./Libft/ft_lstnew_bonus.c	\
			./Libft/ft_lstadd_front_bonus.c	\
			./Libft/ft_lstsize_bonus.c	\
			./Libft/ft_lstlast_bonus.c	\
			./Libft/ft_lstadd_back_bonus.c	\
			./Libft/ft_lstdelone_bonus.c	\
			./Libft/ft_lstclear_bonus.c	\
			./Libft/ft_lstiter_bonus.c	\
			./Libft/ft_lstmap_bonus.c

LIBFT_OBJ = $(LIBFT_SRC:.c=.o)

all:

libft_all: $(LIBFT_NAME)
$(LIBFT_NAME): $(LIBFT_OBJ)
	ar -rcs $(LIBFT_NAME) $(LIBFT_OBJ)

libft_clean:
	rm -f $(LIBFT_OBJ)

libft_fclean: libft_clean
	rm -f $(LIBFT_NAME)

libft_re: libft_fclean libft_all

.PHONY: all libft_all libft_clean libft_fclean libft_re
