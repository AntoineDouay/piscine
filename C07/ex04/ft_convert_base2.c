/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:47:56 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 00:49:33 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= ' ')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	is_in_base(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	process(char *str, char *base, int i, int pos)
{
	int	nb;
	int	b_l;

	nb = 0;
	b_l = check_base(base);
	if (b_l == 0)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos = pos * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (is_in_base(str, base, i) != -1)
			nb = nb * b_l + is_in_base(str, base, i);
		else
			break ;
		i++;
	}
	return (nb * pos);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	positif;
	int	atoi;

	i = 0;
	positif = 1;
	atoi = process(str, base, i, positif);
	return (atoi);
}
