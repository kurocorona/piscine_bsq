/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:56:39 by tjinichi          #+#    #+#             */
/*   Updated: 2020/01/28 10:57:43 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

t_map	*ft_init_map(char *filename)
{
	t_map	*pd;
	int		fd;
	int		i;
	int		j;

	i = 0;
	j = 0;
	fd = open(filename, O_RDONLY);
	pd = insert_val(fd, &j, filename, &i);
}
