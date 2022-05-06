/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:03:50 by adouay            #+#    #+#             */
/*   Updated: 2022/03/15 14:51:25 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_hexa(char *str)
 {
         char *base_hexa;

         base_hexa = "0123456789abcdef";
         ft_putchar(base_hexa[*str / 16]);
         ft_putchar(base_hexa[*str % 16]);
 }

void	ft_hexa_addr(long long int addr)
{
	char *base_hexa ="0123456789abcdf";
	while (addr >= 16)
	{
		ft_hexa_addr(addr / 16);
		addr = addr % 16;
	}
	ft_putchar(base_hexa[addr]);
}	

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int	line;

	i = 0;
	line = 0;
	while (i < size)
	{
		while(line < 16 && i++ < size)
		{
			if (line == 0)
			{	
				ft_hexa_addr((long long int)addr);
				ft_putchar(':');
			}
			if(! (line % 2))
				ft_putchar(' ');
			ft_hexa(addr);
			line++;		
			addr++;
		}
		ft_putchar('\n');
		line = 0;
	}
	return (addr - i);
}

int	main()
{
	void *str ="abcdfgnfgnfiiiiiiiiiiiiiignfgnfgi";
	ft_print_memory(str, 18);
	return (0);
}
