/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_example_t_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:50:22 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 12:07:34 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

t_map	*init_map_example(void)
{
	t_map			*example;
	unsigned long	col_cnt;
	unsigned long	i;

	col_cnt = 15;
	if (!(example = (t_map*)malloc(sizeof(t_map))))
	{
		ft_putstr(ERR_MSG_2);
		example->err = 2;
		return (example);
	}
	example->lcnt = 20;
	example->lcnt = 15;
	example->mark.empty = '.';
	example->mark.obstacle = 'x';
	example->mark.full = 'o';
	example->start.x = 10;
	example->start.y = 10;
	example->len = 5;
	example->sq_type = 0;
	example->err = 0;
	if (!(example->map = (unsigned long**)malloc(sizeof(unsigned long*) * example->lcnt)))
	{
		ft_putstr(ERR_MSG_2);
		example->err = 2;
		return (example);
	}
	i = 0;
	while (i < example->lcnt)
	{
		if (!(example->map[i] = (unsigned long*)malloc(sizeof(unsigned long) * col_cnt)))
		{
			ft_putstr(ERR_MSG_2);
			example->err = 2;
			return (example);
		}
		i++;
	}
	i = 0;
	while (i < example->lcnt)
	{
		example->map[i][2] = 1;
		i++;
	}

	return (example);
}