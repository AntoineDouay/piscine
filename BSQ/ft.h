/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:16:23 by adouay            #+#    #+#             */
/*   Updated: 2022/03/30 11:23:03 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct s_symbol
{
	char *size;
	char v;
	char o;
	char p;
}	t_symbol;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
char    **ft_split(char *str);
int 	ft_calculator(char **map, int **clone, t_symbol symbol);

#endif
