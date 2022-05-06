/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:12:05 by adouay            #+#    #+#             */
/*   Updated: 2022/03/24 13:21:26 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == '-' || str[n] == '+')
			return (1);
		n++;
	}
	return (n);
}

int	ft_base_non_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (1);
	while (i <= ft_strlen(str) - 1)
	{
		j = i + 1;
		while (j <= ft_strlen(str))
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				blen;
	long long int	n;

	n = nbr;
	blen = ft_strlen(base);
	if (ft_base_non_valid(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= blen)
	{
		ft_putnbr_base(n / blen, base);
		n = n % blen;
	}
	ft_putchar(base[n]);
}
/*
int	main()
{
	ft_putnbr_base(10,"01");
}
*/
