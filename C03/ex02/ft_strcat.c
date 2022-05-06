/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:14:46 by adouay            #+#    #+#             */
/*   Updated: 2022/03/15 18:06:08 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	n;

	n = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[n] = *src;
		src++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main()
{
	char dest[100] = "salut ";
	char *src = "c'est cool";
	ft_strcat(dest, src);
	printf("%s\n", dest);
}
*/
