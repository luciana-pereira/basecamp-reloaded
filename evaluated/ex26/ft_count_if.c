/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:32:53 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/29 20:24:35 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			n++;
		}
		i++;
	}
	return (n);
}
