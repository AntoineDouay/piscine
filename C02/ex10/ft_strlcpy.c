/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:40:34 by adouay            #+#    #+#             */
/*   Updated: 2022/03/15 11:07:27 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (size == 0)
		return (n);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
/*
int	main()
{
	int n;
	char *src = "salut c'est cool";
	char dest[100];
	n = ft_strlcpy(dest, src, 100);
	printf("dest : %s , lenght : %d", dest, n);
}
*/
