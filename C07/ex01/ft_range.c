/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:59:07 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 02:10:21 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
	{
		p = NULL;
		return (p);
	}
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
int main ()
{
	int	*tab = ft_range(-3, 7);
	printf("test : %d\n", tab[4]);
	return (0);
}
*/
