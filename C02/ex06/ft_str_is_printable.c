/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:23:14 by adouay            #+#    #+#             */
/*   Updated: 2022/03/14 17:33:49 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (! (*str >= 32 && *str != 127))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char *str = "sacoool";
	printf("%d", ft_str_is_printable(str));
}
*/
