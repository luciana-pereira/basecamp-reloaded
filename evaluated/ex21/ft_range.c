/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 04:46:28 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/29 20:02:10 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	i;

	if (min > max)
	{
		return (NULL);
	}
	if (!(n = (int *)malloc(sizeof(int) * (max - min))))
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		n[i] = min;
		i++;
		min++;
	}
	return (n);
}

#include <stdio.h>

int	main(void)
{
	int i;
	int a;
	int b;
	int *range;

	i = 0;
	a = 476;
	b = -174;
	range = ft_range(a, b);
	// if (!range)
	// {
	// 	printf("null\n");
	// }
		while (i < (b - a + 1))
		{
			printf("%d\n", range[i]);
			i++;
		}
	return (0);
}