/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:35:35 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/26 22:43:14 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_error("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr_error("Too many arguments.\n");
		return (0);
	}
	else
	{
		open_file(argv[1]);
	}
	return (0);
}
