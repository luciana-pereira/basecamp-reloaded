/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:42:18 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/26 20:45:24 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putchar_error(char a)
{
	write(2, &a, 1);
}
