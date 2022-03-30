/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:32:26 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/26 03:21:51 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(char *p)
{
	ft_putstr(p);
	ft_putchar('\n');
	p[0] = '\0';
}

void	ft_sort_params(int argc, char **argv)
{
	int	a;
	int	b;
	int	c;

	a = 1;
	while (a != 0)
	{
		a = 0;
		b = 0;
		while (++b < argc)
		{
			if (argv[b][0] != '\0')
			{
				c = 0;
				a = b;
				while (++c < argc)
					if (argv[c][0] != '\0')
						if (ft_strcmp(argv[a], argv[c]) > 0)
							a = c;
			}
		}
		if (a != 0)
			ft_print_params(argv[a]);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
	{
		return (0);
	}
	ft_sort_params(argc, argv);
	return (0);
}
