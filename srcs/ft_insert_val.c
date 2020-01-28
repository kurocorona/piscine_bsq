/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:58:22 by tjinichi          #+#    #+#             */
/*   Updated: 2020/01/28 10:58:40 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

t_map	*ft_insert_val(int fd, int *j, char *filename, int *i)
{
	char c;
	char *str;
	t_map *pd;

	str = (char *)malloc(sizeof(char) * 100);
	pd = (t_map *)malloc(sizeof(t_map) * count_line(filename));
	while (read(fd, &c, 1))
	{
		if (c != '\n')
		str[(*i)++] = c;
		else if (c == '\n')
		{
			str[*i] = '\0';
			if 
			{

			}
			else if
			{
				/* code */
			}
			
		}
	}
	return (pd);
}