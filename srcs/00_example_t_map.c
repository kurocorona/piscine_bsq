/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_t_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:50:22 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/28 23:06:24 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

t_map	*init_map_example(void)
{
	t_map	*example;
	int		col_cnt;
	int		i;

	col_cnt = 15;
	if (!(example = (t_map*)malloc(sizeof(t_map))))
	{
		ft_putstr("malloc error");
		example->err = 2;
		return (example);
	}
	example->lcnt = 20;
	example->mark.empty = '.';
	example->mark.obstacle = 'x';
	example->mark.full = 'o';
	example->start.x = 0;
	example->start.y = 0;
	example->end.x = 10;
	example->end.y = 10;
	example->sq_type = 0;
	example->err = 0;
	if (!(example->map = (char**)malloc(sizeof(char*) * example->lcnt)))
	{
		ft_putstr("malloc error");
		example->err = 2;
		return (example);
	}
	i = 0;
	while (i < example->lcnt)
	{
		if (!(example->map[i] = (char*)malloc(sizeof(char) * col_cnt)))
		{
			ft_putstr("malloc error");
			example->err = 2;
			return (example);
		}
		i++;
	}
	i = 0;
	while (i < example->lcnt)
	{
		example->map[i] = ".......x...x.x";
		i++;
	}

	return (example);
}