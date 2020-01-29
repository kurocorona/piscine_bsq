/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mryoya <mryoya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:59:58 by mryoya            #+#    #+#             */
/*   Updated: 2020/01/29 15:00:05 by mryoya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_file_size(int fd, int *row_counter, int *line_size)
{
	int		flag;
	int		row_count;
	int		char_count;
	char	c;

	*row_counter = 0;
	char_count = 0;
	*line_size = 0;
	flag = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			(*row_counter)++;
			flag = 1;
			if (char_count != (*line_size))
				return (-1);
			char_count = -1;
		}
		if (!flag)
			(*line_size)++;
		char_count++;
	}
	return (1);
}
