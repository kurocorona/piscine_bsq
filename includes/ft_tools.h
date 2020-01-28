/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:42:25 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 07:56:20 by tkomatsu         ###   ########.fr       */
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

typedef struct
{
	char	empty;
	char	obstacle;
	char	full;
}	t_mark;

typedef struct
{
	int		x;
	int		y;
}	t_point;

typedef struct
{
	int				lcnt;
	t_mark			mark;
	char			**map;
	t_point			start;
	t_point			end;
	unsigned int	sq_type;
	unsigned int	err;
}	t_map;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
/*void	ft_rwmap(t_map *res);*/
void	ft_putmap(t_map *ans);

#endif
