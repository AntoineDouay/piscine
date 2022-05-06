/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:01:06 by adouay            #+#    #+#             */
/*   Updated: 2022/03/16 20:54:41 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			s = str;
			t = to_find;
			while (*str == *t && *str != '\0')
			{
				str++;
				t++;
			}
			if (*t == '\0')
				return (s);
		}
		else
			str++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*str = "saull";
	char	*to = "";
	printf("test : %s\n", ft_strstr(str, to));
	return (0);
}
*/
