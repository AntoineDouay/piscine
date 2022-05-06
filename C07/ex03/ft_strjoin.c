/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:19:43 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 13:54:15 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int	ft_total_size(char **strs, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			s++;
		}
		i++;
	}
	return (s);
}

char	*ft_allocate(int size, char **strs, char *sep, char *p)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size && strs[i] != 0)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			p[k] = strs[i][j++];
			k++;
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			p[k] = sep[j++];
			k++;
		}
		i++;
	}
	p[k] = '\0';
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		total_size;
	int		sep_len;

	total_size = ft_total_size(strs, size);
	sep_len = ft_strlen(sep);
	if (size == 0)
	{
		p = malloc(sizeof(char));
		p[0] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * (total_size + 1) + (sep_len * size - 1));
	if (p == NULL)
		return (NULL);
	return (ft_allocate(size, strs, sep, p));
}

int	main()
{
	char *strs[2] = {"", ""};
	char *sep = " /i/ ";
	printf("%s\n", ft_strjoin(2, strs, sep));
}

