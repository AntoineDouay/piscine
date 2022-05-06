/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:01:19 by adouay            #+#    #+#             */
/*   Updated: 2022/03/10 11:55:58 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	tab[n];
	
	i = 0;
	if (n < 0 || n > 10)
		return;
	while (i < n)
	{
		tab[i] = i;
		ft_putchar(tab[i] + '0');
		i++;
	}
	while (tab[0] < (10 - n))
	{
			
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
