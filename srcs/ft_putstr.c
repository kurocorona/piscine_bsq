/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:02:46 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/27 12:25:49 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_tools.h"

void	ft_putstr(char *str)
{
	int	word_count;

	word_count = 0;
	while (*(str + word_count) > 0)
	{
		word_count++;
	}
	write(1, str, word_count);
}
