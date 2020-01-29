
NAME = BSQ
SRC = BSQ.c ./srcs/ft_*.c
HEAD = ./includes/ft_*.h
FLAG = -Wall -Wextra -Werror

all:
	gcc -c $(FLAG) $(SRC) $(HEAD)
	gcc $(FLAG) *.o -o $(NAME)

clean:
	/bin/rm -f *.o ./includes/ft_tools.h.gch

fclean:
	/bin/rm -f $(NAME) ./includes/ft_tools.h.gch *.o

re:
	fclean all
