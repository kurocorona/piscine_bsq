/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomatsu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:02:46 by tkomatsu          #+#    #+#             */
/*   Updated: 2020/01/13 22:31:38 by tkomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_tools_h"

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
