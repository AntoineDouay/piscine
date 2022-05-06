/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:26:33 by adouay            #+#    #+#             */
/*   Updated: 2022/03/14 11:57:24 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (! (*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*int     main()
{
         char *str = "126f5645";
         printf("%d", ft_str_is_numeric(str));
}
*/
