/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:40:45 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 19:46:21 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_right(int tab[4][4], int vu[4][4], int i)
{
	int	max;
	int	j;
	int	conteur;
	int	good;

	good = vu[3][i];
	j = 3;
	conteur = 0;
	max = 0;
	while (j >= 0)
	{
		if (tab[i][j] > max)
		{
			max = tab[i][j];
			conteur++;
		}
		j--;
	}
	return (conteur == good);
}
