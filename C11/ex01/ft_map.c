/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:18:39 by adouay            #+#    #+#             */
/*   Updated: 2022/03/31 19:16:21 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/*
int	ft_triple(int n)
{
	n = n * 3;
	return (n);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*t;
	int	i;

	t = malloc(sizeof(int) * length);
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		t[i] = (*f)(tab[i]);
		i++;
	}
	return (t);
}
/*
int	main()
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int *t = ft_map(tab, 10, &ft_triple);
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", t[i]);
		i++;
	}
	return (0);
}
*/
