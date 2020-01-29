/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatsumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:37:17 by tmatsumo          #+#    #+#             */
/*   Updated: 2020/01/29 14:37:20 by tmatsumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"
#include <stdio.h>

void	ft_modify_endofline(char *record)
{
	while (*record != '\n')
	{
		record++;
	}
	if (*record == '\n')
	{
		*record = '\0';
	}
}

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		result = result + (*str - '0');
		str++;
	}
	return (result * sign);
}

int		check_only_number(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

void	ft_first_line_atoi(char *str, t_map *board)
{
	int		str_length;

	ft_modify_endofline(str);
	str_length = ft_strlen(str) - 1;
	board->mark.empty = str[str_length - 2];
	board->mark.obstacle = str[str_length - 1];
	board->mark.full = str[str_length];
	str[str_length - 2] = '\0';
	if (check_only_number(str) == 0)
	{
		board->err = 4;
		return ;
	}
	board->lcnt = ft_atoi(str);
}
