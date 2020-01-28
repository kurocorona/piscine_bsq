#ifndef FT_TOOLS_H
# define FT_TOOLS_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int ft_putmap(t_map *ans);

typedef struct s_map
{  
    int     line_count;  
    char    *mark; 
    char    **map;  
}			t_map;

t_map	*ft_init_map(char *filename);
int	    ft_count_line(char *filename);
t_map	*ft_insert_val(int fd, int *j, char *filename, int *i);


#endif
