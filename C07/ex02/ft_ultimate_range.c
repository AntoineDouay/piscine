/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:20:02 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 00:58:20 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	cpy;

	cpy = min;
	i = 0;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (-1);
	while (i < (max - min))
	{
		range[0][i] = cpy;
		cpy++;
		i++;
	}
	return (max - min);
}
/*
int	main()
{
	int *range;
	int	size;
	
	size = ft_ultimate_range(&range, -4, 5);
	printf("%d\n", size);
}
*/
