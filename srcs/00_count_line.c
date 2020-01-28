/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:59:33 by tjinichi          #+#    #+#             */
/*   Updated: 2020/01/28 23:04:19 by tkomatsu         ###   ########.fr       */
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
