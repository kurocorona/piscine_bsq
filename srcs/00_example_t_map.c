/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_example_t_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:50:22 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 15:00:15 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

t_map	init_map_example(void)
{
	t_map			example;
	unsigned long	i;
	unsigned long	k;

	example.lcnt = 20;
	example.ccnt = 15;
	example.mark.empty = '.';
	example.mark.obstacle = 'x';
	example.mark.full = 'o';
	example.start.x = 10;
	example.start.y = 10;
	example.len = 5;
	example.sq_type = 0;
	example.err = 0;
	i = 0;
	while (i < example.lcnt)
	{
		k = 0;
		while (k < example.ccnt)
		{
			example.map[i][k] = 0;
			k++;
		}
		i++;
	}

	return (example);
}