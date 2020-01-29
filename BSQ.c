/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 23:04:57 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/29 14:56:25 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_tools.h"
#include "./srcs/00_example_t_map.c"


int		main(void)
{
	t_map	*test;
	t_map	val;

	val = init_map_example();
	test = &val;
	ft_putmap(test);
	return (test->err);
}
