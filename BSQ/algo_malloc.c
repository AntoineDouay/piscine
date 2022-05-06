/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:47:02 by adouay            #+#    #+#             */
/*   Updated: 2022/03/30 11:13:47 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

/*int	ft_check_square(char **map, int square_size, int line_size, int pos, char o)
{
}
*/

char    **ft_split(char *str, char *charset);

int	ft_calculator(char **map, int clone[][5])
{
	int res;
	int	min;
	int i;
	int j;

	i = 0;
	res = 0;
	while (i < 10)  		// i < length_line
	{
		j = 0;
		while(j < 5)	// j < lenght_col
		{
			if(i == 0 || j == 0);
			else if(clone[i][j] > 0)
			{
				min = clone[i-1][j];
				if (clone[i][j-1] < min)
					min = clone[i][j-1];
				if (clone[i-1][j-1] < min)
					min = clone[i-1][j-1];
				clone[i][j] = 1 + min;
				if(clone[i][j] > res)
					res = clone[i][j];
			}
			j++;
		}
		i++;
	}
	return (res);
}

int	ft_file_size(char *file)
{
	int fd;
	int i;
	int n;
	

	fd = open(file, O_RDONLY);
	i = 0;
	n = 0;
	while (read(fd, &i, 1) != 0 && i != EOF)
		n++;
	close(fd);
	return (n);
}

int	*ft_clone_line(char **map, int i, char *v, char *o)
{
	int j;
	int	*clone;
	int n;

	n = 0;
	j = 0;
	while (map[i][n] != '\0')
		n++;
	clone = malloc(sizeof(int) * n);
	while(map[i][j] != '\0')
	{
		if (map[i][j] == *v)
			clone[j] = 1;
		if (map[i][j] == *o)
			clone[j] = 0;
		j++;
	}
	return (clone);
}

int	ft_check_first_line_map(char *buffer, char *size, char *v, char *o, char *p)
{
	int n;
	int cpy;

	n = 0;
	while (buffer[n] != '\0')
		n++;
	if(n < 4)
		return (0);
	*p = buffer[--n];
	*o = buffer[--n];
	*v = buffer[--n];
	printf("%c", *p);
	size = malloc(sizeof(char) * n);
	cpy = n;
	while (--n >=0)
	{
		if(! (buffer[n] >= '0' && buffer[n] <= '9'))
			return (0);
		size[n] = buffer[n];
	}
	size[cpy] = '\0';
	
}

int	**ft_create_clone(char **map, char *v, char *o)
{
	int i;
	int	**clone;
	int n;
	
	i = 1;
	n = 1;
	while (map[n])
		n++;
	clone = malloc(sizeof(int *) * n);
	while (map[i])
	{
		clone[i - 1] = ft_clone_line(map, i, v, o);
		i++;
	}
	return(clone);
}
int	main(int ac, char **av)
{
	int 	fd;
	int		file_size;
	char 	*buffer;
	char 	**map;
	int		**clone;
	char	*size;
	char	o;
	char	v;
	char	p;

	file_size = ft_file_size(av[1]);
	fd = open(av[1], O_RDONLY);
	read(fd, buffer, file_size);
	close(fd);
	map = ft_split(buffer, "\n");
	int  i = 0;
	while (map[i])
	{
		printf("%s", map[i]);
		printf("\n");
		i++;
	}
	printf("%s\n", map[0]);
	//ft_check_first_line_map(map[0], size, &v, &o, &p);
	//clone = ft_create_clone(map, &v, &o);
	i = 0;
	int j = 0; 
/*	while (clone[i])
	{
		j = 0;
		while (clone[i][j])
		{
			printf("%d", clone[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
*/
/*
	int i = 0;
	int j = 0;
	int line_size = 10;
	int col_size = 5;
	int biggie_i;
	int biggie_j;
	char o = o;
	int clone[10][5] =
	{
		{1, 1, 0, 1, 0},
		{1, 1, 1, 0, 0},
		{1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1},
		{1, 1, 1, 0, 1},
		{1, 1, 1, 1, 1},
		{0, 1, 1, 0, 0},
		{0, 1, 0, 1, 0},
		{0, 1, 1, 1, 0}
	};
	char *map[5] =
	{
		"..o.o",
		"...oo",
		"o...o",
		"o...o",
		"o...o"
	};

	while (i < line_size)
	{
		j = 0;
		while (j < col_size)
		{
			if (map[i][j] == 'o')
				clone[i][j] = 0;
			else
				clone[i][j] = 1;
			printf("%d ", clone[i][j]);
			j++;
		}
		printf("\n");
		i++;
	irintf("%d", clone[2][3]);
	}
	i = 0;
	while (i < line_size)
	{
		j = 0;
		while (j < col_size)
		{
			printf("%d ", clone[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
	int final_size = ft_calculator(map, clone);
	i = 0;
	while (i < line_size)
	{
		j = 0;
		while (j < col_size)
		{
			printf("%d ", clone[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
*/
	return (0);
}





















