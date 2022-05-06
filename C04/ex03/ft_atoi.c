/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:24:18 by adouay            #+#    #+#             */
/*   Updated: 2022/03/17 17:43:10 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int					m;
	long long int		res;

	m = 1;
	res = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				m = m * -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
			res = res * 10 + (*str++ - 48);
		if (*str < '0' || *str > '9')
		{
			return (res * m);
		}
		str++;
	}
	return (res * m);
}
/*
int	main ()
{
	printf("%d\n", ft_atoi("    \t\n\r\v\f    -----+----7483648yyyd323"));
	return (0);
}
*/
