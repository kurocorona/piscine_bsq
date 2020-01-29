//#include "includes/ft_tools.h"
#include "ft_tools.h"
#include <stdio.h>

char	*ft_first_line_atoi(char*, t_map*);

int main(void)
{
	t_map board1;
	board1.err = 0;
	char str[10] = "12t9o.c\n";
	ft_first_line_atoi(str, &board1);
	printf("lcnt = %lu\n", board1.lcnt);
	printf("empty = %c\n", board1.mark.empty);
	printf("obstacle = %c\n", board1.mark.obstacle);
	printf("full = %c\n", board1.mark.full);
	printf("err = %d\n", board1.err);
	return (0);
}
