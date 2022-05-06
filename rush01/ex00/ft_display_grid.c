/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:28:27 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 21:24:58 by bilic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_grid( int big_tab[4][4])
{	
	char	display;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			display = big_tab[i][j] + 48;
			write(1, &display, 1);
			if (j != 3)
				write(1, " ", 1);
			if (j == 3)
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}
