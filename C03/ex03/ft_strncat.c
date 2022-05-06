/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:07:11 by adouay            #+#    #+#             */
/*   Updated: 2022/03/15 15:38:02 by adouay           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;

	n = ft_strlen(dest);
	if (nb == 0)
		return (dest);
	while (*src != '\0' && nb > 0)
	{
		dest[n] = *src;
		n++;
		nb--;
		src++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[100] = "salut ";
	char *src = "c'est cool";
	ft_strncat(dest, src, 1);
	printf("%s\n", dest);
	
}
*/
