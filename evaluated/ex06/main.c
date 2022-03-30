/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 03:54:08 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/28 03:58:02 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}
