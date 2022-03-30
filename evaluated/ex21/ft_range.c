/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 04:46:28 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/26 05:31:52 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	n = (int *)malloc((max - min + 1) * sizeof(int));
	while (i <= (max - min))
	{
		n[i] = min + i;
		i++;
	}
	return (n);
}
