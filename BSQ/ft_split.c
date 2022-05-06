/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:15:52 by sleleu            #+#    #+#             */
/*   Updated: 2022/03/30 01:13:05 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_error(char *str)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i + size] != '\0' && str[i + size] != '\n')
		size++;
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i] != '\n')
		{
			i++;
			j++;
		}
		if (j != size)
			return (0);
		i++;
	}
	return (1);
}

int     ft_count(char *str)
{
	int     i;
	int     count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == '\n')
			i++;
		if (str[i] && str[i] != '\n')
			count++;
		while (str[i] && str[i] != '\n')
			i++;
	}
	return (count);
}

char    *ft_word(char *str)
{
	int             i;
	int             size;
	char    *word;

	i = 0;
	size = 0;
	while (str[size] && str[size] != '\n')
		size++;
	i = 0;
	word = malloc(sizeof(char) * size + 1);
	if (word == NULL)
		return (NULL);
	while (i < size)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	int             i;
	int             count;
	char    **result;

	i = 0;
	if (!ft_check_error(str))
		return (NULL);
	count = ft_count(str);
	result = malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && *str == '\n')
			str++;
		if (*str)
		{
			result[i] = ft_word(str);
			i++;
		}
		while (*str && *str != '\n')
			str++;
	}
	result[i] = '\0';
	return (result);
}
/*
int  main(void)
{
	int  i = 0;
	char *str = "1ab\n11010\n00110\n01011\n0111\n";
	char **result;

	result = ft_split(str);
	if (!result)
	{
		printf("NULL");
		return (0);
	}

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/
