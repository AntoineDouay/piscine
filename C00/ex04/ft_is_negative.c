/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:32:33 by adouay            #+#    #+#             */
/*   Updated: 2022/03/09 11:43:10 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	if (n < 0)
	{	
		write(1, "N", 1);
	}
}
