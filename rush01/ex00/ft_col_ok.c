/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_ok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:09:25 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 19:55:04 by bilic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_col_ok(int n, int tab[4][4], int i, int j)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (tab[k][j] == n)
			return (0);
		k++;
	}
	return (1);
}