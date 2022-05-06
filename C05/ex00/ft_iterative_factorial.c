/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:11:20 by adouay            #+#    #+#             */
/*   Updated: 2022/03/22 15:26:47 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	while (i > 1)
	{
		nb *= (i - 1);
		i--;
	}
	return (nb);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/
