/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:43:15 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 01:21:58 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;
	int		n;

	n = ft_strlen(src);
	p = malloc(sizeof(char) * n + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main()
{
	char *src ="qwqewefewfwe";
	printf("%s\n", ft_strdup(src));
}
*/
