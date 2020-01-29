/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:16:28 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 11:08:26 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_putmap(t_map *ans)
{
	unsigned long	i;

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
			ft_putstr(ans->map[i]);
			ft_putstr("\n");
			i++;
		}
	}
}
