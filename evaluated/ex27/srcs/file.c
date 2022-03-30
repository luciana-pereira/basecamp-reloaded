/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:08:30 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/27 01:09:40 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	open_file(char *file)
{
	int	o;

	o = open(file, O_RDONLY);
	if (o == -1)
	{
		ft_putstr_error("Cannot open file.\n");
	}
	else
	{
		read_file(o);
	}
}

void	read_file(int o)
{
	char	b;

	while (read(o, &b, 1))
	{
		ft_putchar(b);
	}
	close(o);
}
