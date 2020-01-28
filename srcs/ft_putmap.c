/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 09:16:28 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/28 23:00:15 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

void	ft_putmap(t_map *ans)
{
	int	i;

	if (ans->lcnt == 0)
	{
		ft_putstr("!empty map!");
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
		ans->err = 0;
	}
}