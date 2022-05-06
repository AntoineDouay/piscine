/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:11:04 by adouay            #+#    #+#             */
/*   Updated: 2022/03/22 12:24:15 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	n;
	unsigned int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	n = dlen;
	i = 0;
	if (dlen >= size)
		return (size + slen);
	while (src[i] != '\0' && n < size - 1)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dlen + slen);
}
/*
int	main()
{
	char	dest[8] = "saluti";

	char	*src = "c'est cooooooooool";
	unsigned int size = 6;
	unsigned int n;
	n = ft_strlcat(dest, src, size);
	printf("%s len : %d\n", dest, n);
	if (n > size)
		printf("truncate\n");
	else
		printf("good\n");
}
*/
