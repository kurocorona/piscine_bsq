/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 23:04:57 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 10:06:18 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_tools.h"
#include "./srcs/00_example_t_map.c"


int		main(void)
{
	t_map	*test;

	test = init_map_example();
	ft_rwmap(test);
	ft_putmap(test);
	return (test->err);
}
