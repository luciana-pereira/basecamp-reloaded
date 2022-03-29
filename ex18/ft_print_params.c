/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 00:29:16 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/26 01:27:40 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
