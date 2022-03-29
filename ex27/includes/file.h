/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:02:00 by lucperei          #+#    #+#             */
/*   Updated: 2022/03/27 01:09:49 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H
# include <fcntl.h>
# include <unistd.h>

void	read_file(int o);
void	ft_putchar(char a);
void	ft_putstr_error(char *str);
#endif