
NAME = a.out
SRC = BSQ.c ./srcs/ft_*.c
HEAD = ./includes/ft_*.h
FLAG = -Wall -Wextra -Werror

all:
	gcc $(FLAG) $(SRC) $(HEAD)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re:
	fclean all