/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:27:57 by adouay            #+#    #+#             */
/*   Updated: 2022/03/24 17:55:39 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	len;

	i = 0;
	len = size - 1;
	while (i < len)
	{
		ft_swap(&tab[i], &tab[len]);
		i++;
		len--;
	}
}
/*
int	main(void)
{
	int i = 0;
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(tab, 6);
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
