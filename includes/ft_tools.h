/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:42:25 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 17:44:57 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

#define ERR_MSG_1 "empty map!!"
#define ERR_MSG_2 "malloc error"
#define ERR_MSG_3 "empty answer"
#define ERR_MSG_4 "line error"

typedef struct s_mark
{
	char	empty;
	char	obstacle;
	char	full;
}	t_mark;

typedef struct s_point
{
	unsigned long	x;
	unsigned long	y;
}	t_point;

typedef struct s_map
{
	unsigned long	lcnt;
	unsigned long	rcnt;
	t_mark			mark;
	unsigned long	**map;
	t_point			start;
	unsigned long	len;
	unsigned int	sq_type;
	unsigned int	err;
}	t_map;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putmap(t_map *ans);
void	ft_modify_endofline(char *record);
int		ft_atoi(char *str);
int		check_only_number(char *str);
void	ft_first_line_atoi(char *str, t_map *board);

#endif
