/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:09:01 by adouay            #+#    #+#             */
/*   Updated: 2022/03/14 12:03:44 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (! (*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
 int     main()
{
         char str[] = "AQLUT";
         printf("%d", ft_str_is_uppercase(str));
}
*/
