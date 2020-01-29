/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:16:28 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 15:47:41 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_putmark(t_map *ans, unsigned long x, unsigned long y)
{
	if (ans->map[y][x] == 0)
		write(1, &(ans->mark.obstacle), 1);
	else if (((ans->lcnt - ans->len) < y && y <= ans->lcnt) &&
	((ans->rcnt - ans->len) < x && x <= ans->rcnt))
		write(1, &(ans->mark.full), 1);
	else
		write(1, &(ans->mark.empty), 1);
}

void	ft_putmap(t_map *ans)
{
	unsigned long	x;
	unsigned long	y;

	if (ans->lcnt == 0 || ans->rcnt == 0)
	{
		ft_putstr(ERR_MSG_1);
		ans->err = 1;
	}
	else
	{
		y = 0;
		while (y < ans->lcnt)
		{
			x = 0;
			while (x < ans->rcnt)
			{
				ft_putmark(ans, x, y);
				x++;
			}
			ft_putchar('\n');
			y++;
		}
	}
}
