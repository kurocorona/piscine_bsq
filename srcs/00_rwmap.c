/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rwmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:32:02 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 07:53:20 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_rwmap(t_map *res)
{
	int	i;
	int	k;

	if (res->end.x - res->start.x == 0 || res->end.y - res->start.y == 0)
	{
		ft_putstr(ERR_MSG_3);
		res->err = 3;
		return;
	}
	i = res->start.x;
	while (res->start.x <= i && i <= res->end.x)
	{
		k = res->start.y;
		while (res->end.y <= i && i <= res->end.y)
		{
			res->map[i][k] = res->mark.full;
			k++;
		}
		i++;
	}
}
