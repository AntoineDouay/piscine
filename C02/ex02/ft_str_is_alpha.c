/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:55:20 by adouay            #+#    #+#             */
/*   Updated: 2022/03/14 11:59:29 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char *str = "salut p";
	printf("%d", ft_str_is_alpha(str));
}
*/
