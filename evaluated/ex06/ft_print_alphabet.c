/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:13:47 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/27 00:12:01 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a <= 122)
	{
		ft_putchar(a);
		a++;
	}
}
