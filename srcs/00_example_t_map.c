/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_example_t_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:50:22 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 15:49:52 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

t_map	init_map_example(void)
{
	t_map			example;
	unsigned long	x;
	unsigned long	y;

	example.lcnt = 30;
	example.rcnt = 30;
	example.mark.empty = '.';
	example.mark.obstacle = 'x';
	example.mark.full = 'o';
	example.start.x = 0;
	example.start.y = 0;
	example.len = 0;
	example.sq_type = 0;
	example.err = 0;
	y = 0;
	while (y < example.lcnt)
	{
		x = 0;
		while (x < example.rcnt)
		{
			example.map[y][x] = 0;
			x++;
		}
		y++;
	}

	return (example);
}