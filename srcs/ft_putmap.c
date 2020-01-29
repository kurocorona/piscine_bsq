/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:16:28 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 15:22:59 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_putmark(t_map *ans, unsigned long i, unsigned long k)
{
	if (ans->map[i][k] == 0)
		write(1, &(ans->mark.obstacle), 1);
	else if (((ans->lcnt - ans->len) < i && i <= ans->lcnt) &&
	((ans->rcnt - ans->len) < k && k <= ans->rcnt))
		write(1, &(ans->mark.full), 1);
	else
		write(1, &(ans->mark.empty), 1);
}

void	ft_putmap(t_map *ans)
{
	unsigned long	i;
	unsigned long	k;

	if (ans->lcnt == 0)
	{
		ft_putstr(ERR_MSG_1);
		ans->err = 1;
	}
	else
	{
		i = 0;
		while (i < ans->lcnt)
		{
			k = 0;
			while (k < ans->rcnt)
			{
				ft_putmark(ans, i, k);
				k++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
