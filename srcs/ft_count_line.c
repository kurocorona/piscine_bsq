/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:59:33 by tjinichi          #+#    #+#             */
/*   Updated: 2020/01/28 11:00:51 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

int	ft_count_line(char *filename)
{
	int		fd;
	char	c;
	int		lcnt;

	lcnt = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			lcnt++;
		}
	}
	return (lcnt);
}
