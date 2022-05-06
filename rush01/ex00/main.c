/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:08:51 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 19:21:23 by bilic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_argv(char *str, int *clues, int vu[4][4]);
int		ft_solu(int tab[4][4], int vu[4][4], int pos);
void	ft_display_grid(int tab[4][4]);
void	ft_full_grid(int tab[4][4]);

int	main(int argc, char *argv[])
{
	int	clues[16];
	int	grid[4][4];
	int	vu[4][4];

	if (argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (ft_check_argv(argv[1], clues, vu))
	{
		ft_full_grid(grid);
		ft_solu(grid, vu, 0);
		ft_display_grid(grid);
	}
	else
	{
		write(1, "Error", 5);
		return (0);
	}
	return (0);
}
