/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:59:32 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 19:50:50 by imoumini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_top(int tab[4][4], int vu[4][4], int j)
{
	int	max;
	int	i;
	int	conteur;
	int	good;

	good = vu[0][j];
	i = 0;
	conteur = 0;
	max = 0;
	while (i < 4)
	{
		if (tab[i][j] > max)
		{
			max = tab[i][j];
			conteur++;
		}
		i++;
	}
	return (conteur == good);
}
