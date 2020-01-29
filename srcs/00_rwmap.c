/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rwmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:32:02 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 10:27:51 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_rwmap(t_map *res)
{
	unsigned long	i;
	unsigned long	k;

	if (res->len == 0)
	{
		ft_putstr(ERR_MSG_3);
		res->err = 3;
	}
	else
	{
		i = res->start.x;
		while (i > res->len)
		{
			k = res->start.y;
			while (k < res->len)
			{
				res->map[i][k] = res->mark.full;
				k--;
			}
			i--;
		}
	}
}
