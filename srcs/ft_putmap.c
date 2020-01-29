/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:16:28 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 12:19:30 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_putmark(t_map *ans, unsigned long i, unsigned long k)
{
	char	c;

	if (ans->map[i][k] == 0)
	{
		c = ans->mark.obstacle;
		write(1, &c, 1);
	}
	else if (((ans->lcnt - ans->len) < i && i <= ans->lcnt) &&
	((ans->ccnt - ans->len) < k && k <= ans->ccnt))
	{
		c = ans->mark.full;
		write(1, &c, 1);
	}
	else
	{
		c = ans->mark.empty;
		write(1, &c, 1);
	}
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
			while (k < ans->ccnt)
			{
				ft_putmark(ans, i, k);
				k++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
