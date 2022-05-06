/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:18:35 by adouay            #+#    #+#             */
/*   Updated: 2022/03/28 02:17:01 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_w_nbr(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_charset(charset, str[i]))
			i++;
		if (str[i] != '\0' && !ft_is_charset(charset, str[i]))
			count++;
		while (str[i] != '\0' && !ft_is_charset(charset, str[i]))
			i++;
	}
	return (count);
}

int	ft_w_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_is_charset(charset, str[i]))
		i++;
	return (i);
}

char	*ft_w(char *str, char *charset)
{
	char	*word;
	int		w_len;
	int		i;

	i = 0;
	w_len = ft_w_len(str, charset);
	word = malloc(sizeof(char) * w_len + 1);
	while (i < w_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	int		w_nbr;
	int		i;

	i = 0;
	w_nbr = ft_w_nbr(str, charset);
	p = malloc(sizeof(char *) * (w_nbr + 1));
	if (p == NULL)
		return (NULL);
	while (*str != '\0' && i < w_nbr)
	{
		while (*str != '\0' && ft_is_charset(charset, *str))
			str++;
		if (*str != '\0')
		{
			p[i] = ft_w(str, charset);
			i++;
		}
		while (*str != '\0' && !ft_is_charset(charset, *str))
			str++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main ()
{
	char	*str = "s a l u t mon pipp i pote";
	char	*charset = "";
	char	**p;
	int	i;

	i = 0;
	p = ft_split(str, charset);
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	return (0);
}
*/
