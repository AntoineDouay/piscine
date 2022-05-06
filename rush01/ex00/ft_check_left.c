/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:27:33 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 21:21:12 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_left(int tab[4][4], int vu[4][4], int i)
{
	int	max;
	int	j;
	int	conteur;
	int	good;

	good = vu[2][i];
	j = 0;
	conteur = 0;
	max = 0;
	while (j < 4)
	{
		if (tab[i][j] > max)
		{
			max = tab[i][j];
			conteur++;
		}
		j++;
	}
	return (conteur == good);
}
