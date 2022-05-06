/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:42:50 by adouay            #+#    #+#             */
/*   Updated: 2022/03/21 19:41:14 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == '-' || str[n] == '+' || str[n] == ' '||(str[n] >= 9 && str[n] <= 13))
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

int	ft_in_base(char *str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == *str)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	m;
	int	res;

	m = 1;
	res = 0;
	if (ft_base_non_valid(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m = m * -1;
		str++;
	}
	while (ft_in_base(str, base) != -1)
	{
		res = res * ft_strlen(base) + ft_in_base(str, base);
		str++;
	}
	return (res * m);
}

int	main()
{
	char *base="0123456789abcdef";
	char *str = "      ---++--+--9595by";
	printf("%d\n", ft_atoi_base(str, base));
}

