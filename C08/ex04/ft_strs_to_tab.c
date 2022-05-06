/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:59:11 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 04:10:35 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*p;
	int		n;

	n = ft_strlen(str);
	p = malloc(sizeof(char) * (n + 1));
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	i = 0;
	str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
