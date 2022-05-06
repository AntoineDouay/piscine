/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:23:21 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 19:41:19 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_down(int tab[4][4], int vu[4][4], int j)
{
	int	max;
	int	i;
	int	conteur;
	int	good;

	good = vu[1][j];
	i = 3;
	conteur = 0;
	max = 0;
	while (i >= 0)
	{
		if (tab[i][j] > max)
		{
			max = tab[i][j];
			conteur++;
		}
		i--;
	}
	return (conteur == good);
}
