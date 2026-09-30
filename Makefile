CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = 	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atoi.c 
	
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
