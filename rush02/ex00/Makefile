
NAME = rush-2
SRC = *.c
INCLUDES = includes

all: $(NAME)

$(NAME):
	@gcc -Werror -Wall -Wextra $(SRC) -I$INCLUDES -o $(NAME)
clean:
	@/bin/rm -f *.o
fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all