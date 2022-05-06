/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:34:55 by adouay            #+#    #+#             */
/*   Updated: 2022/03/31 19:18:30 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	sort(int a, int b)
{
	return (a - b);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while ((i + 1) < length && (*f)(tab[i], tab[i + 1]) == 0)
		i++;
	while ((i + 1) < length && (*f)(tab[i], tab[i + 1]) <= 0)
	{
		i++;
		if ((i + 1) < length && (*f)(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	while ((i + 1) < length && (*f)(tab[i], tab[i + 1]) >= 0)
	{
		i++;
		if ((i + 1) < length && (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}
/*
int	main()
{
	int tab[5] = {1, 1, 3, 4, 1};
	printf("%d\n", ft_is_sort(tab, 5, &sort));
	return (0);
}
*/
