/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:47:02 by adouay            #+#    #+#             */
/*   Updated: 2022/03/29 17:54:52 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_check_square(char **map, int square_size, int line_size, int pos, char o)
{
}
*/

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
int	main(int ac, char **av)
{

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
	/*
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
	}*/
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


	return (0);
}





















