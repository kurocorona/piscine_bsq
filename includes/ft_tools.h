#ifndef FT_TOOLS_H
# define FT_TOOLS_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

typedef struct s_mark
{
	char	empty;
	char	obstacle;
	char	full;
}	t_mark;

typedef struct s_point
{
	int		x;
	int		y;
};	t_point;

typedef struct s_map
{
	int		line_count;
	t_mark	mark;
	char	**map;
	t_point	start;
	t_point	end;
	int		sq_bool;
	int		err;
}	t_map;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_count_line(char *filename);
int		ft_putmap(t_map *ans);
t_map	*ft_init_map(char *filename);
t_map	*ft_insert_val(int fd, int *j, char *filename, int *i);

#endif
