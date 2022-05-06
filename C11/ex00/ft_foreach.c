/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:05:28 by adouay            #+#    #+#             */
/*   Updated: 2022/03/31 19:15:15 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_triple(int n)
{
	n = n * 3;
	printf("%d\n", n);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
int	main()
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(tab, 10, &ft_triple);
	return (0);
}
*/
