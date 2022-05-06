/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:03:12 by adouay            #+#    #+#             */
/*   Updated: 2022/03/30 12:02:22 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

t_symbol	ft_first_line(char	*tab)
{
	int	n;
	t_symbol	symbol;

	n = 0;
	while (tab[n] != '\0')
		n++;
	symbol.p = tab[--n];
	symbol.o = tab[--n];
	symbol.v = tab[--n];
	return (symbol);
}

int	*ft_line_clone(char *line_map, t_symbol symbol)
{
	int	n;
	int	i;
	int	*line;

	i = 0;
	n = 0;
	printf("%s\n", line_map);
	while (line_map[n] != '\0')
		n++;
	line = malloc(sizeof(int) * n);
	while (line_map[i] != '\0')
	{
		if (line_map[i] == symbol.v)
			line[i] = 1;
		if (line_map[i] == symbol.o)
			line[i] = 0;
		i++;
	}
	return (line);
}

int	**ft_create_clone(char **map, t_symbol symbol)
{
	int n;
	int i;
	int	**clone;

	n = 0;
	i = 0;
	while (map[n] != NULL)
		n++;
	clone = malloc(sizeof(int *) * (n - 1));
	n = 1;
	while (map[n] != NULL)
	{
		clone[i] = ft_line_clone(map[n], symbol);
		i++;
		n++;
	}
	return (clone);
}

int	main(int ac, char **av)
{
	int 		fd;
	int			file_size;
	char		*buffer;
	char		**map;
	int			**clone;
	char		*size;
	t_symbol	symbol;

	file_size = ft_file_size(av[1]);
	printf("%d\n", file_size);
	buffer = malloc(sizeof(char) * (file_size + 1));
	fd = open(av[1], O_RDONLY);
	read(fd, buffer, file_size);
	close(fd);
	map = ft_split(buffer);
	symbol = ft_first_line(map[0]);
	
	clone = ft_create_clone(map, symbol);
	
	printf("%d\n", clone[2][5]);

	return (0);
}
