/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:17:54 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 19:41:00 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_check_top(int tab[4][4], int vu[4][4], int j);
int		ft_check_down(int tab[4][4], int vu[4][4], int j);
int		ft_check_left(int tab[4][4], int vu[4][4], int i);
int		ft_check_right(int tab[4][4], int vu[4][4], int i);
int		ft_line_ok(int n, int tab[4][4], int i, int j);
int		ft_col_ok(int n, int tab[4][4], int i, int j);
void	ft_display_grid(int tab[4][4]);

int	ft_solu(int tab[4][4], int vu[4][4], int pos)
{
	int	i;
	int	j;
	int	n;

	i = pos / 4;
	j = pos % 4;
	n = 0;
	while (++n <= 4)
	{
		if (ft_line_ok(n, tab, i, j) && ft_col_ok(n, tab, i, j))
		{
			tab[i][j] = n;
			if (i == 3)
				if (!(ft_check_top(tab, vu, j) && ft_check_down(tab, vu, j)))
					return (0);
			if (j == 3)
				if (!(ft_check_left(tab, vu, i) && ft_check_right(tab, vu, i)))
					return (0);
			if (i == 3 && j == 3)
				return (1);
			if (ft_solu(tab, vu, pos + 1))
				return (1);
		}
	}
	return (0);
}
