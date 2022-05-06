/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:46:54 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 02:14:21 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_in_base(char *str, char *base, int i);
int	check_base(char *base);
int	process(char *str, char *base, int i, int pos);
int	ft_atoi_base(char *str, char *base);

char	*ft_rev(char *str, int nb)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	if (nb < 0)
	{
		i = 0;
		j = 1;
	}
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i > j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	return (str);
}

char	*ft_putnbr_base(int nbr, char *base, int j, char *r)
{
	int			i;
	long		nb;
	char		test;

	i = check_base(base);
	nb = nbr;
	if (i == 0)
		return (0);
	if (nb < 0)
	{
		nb = nb * -1;
		r[j] = '-';
		j = j + 1;
	}
	if (nb < i && nb >= 0)
	{
		test = base[nb];
		r[j] = test;
	}
	if (nb >= i)
	{
		ft_putnbr_base((nb / i), base, j + 1, r);
		ft_putnbr_base((nb % i), base, j, r);
	}
	return (r);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*r;
	char	*result;

	r = malloc(sizeof(char) * 40);
	nb = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(nb, base_to, 0, r);
	result = ft_rev(result, nb);
	return (result);
}
/*
int main()
{
    char nbr[] = "-78392";
    char base_from[] = "0123456789abcdef";
    char base_to[] = "01";

    printf("Test : %s\n", ft_convert_base(nbr, base_from, base_to));
    return (0);
}
*/
