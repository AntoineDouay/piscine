/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv (copy).c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:53:50 by adouay            #+#    #+#             */
/*   Updated: 2022/03/20 21:11:24 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_opposite(int *clues)
{
	int	i;

	i = 0;
	while (clues[i] != '\0')
	{
		if (((i >= 0 && i <= 3) || (i >= 8 && i <= 11)) && clues[i] == 4)
		{
			if (clues[i + 4] != 1)
				return (0);
		}
		if (((i >= 4 && i <= 7) || (i >= 12 && i <= 15)) && clues[i] == 4)
		{
			if (clues[i -4] != 1)
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_2d_vu(int *clues, int vu[4][4])
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (n < 4)
	{
		vu[0][n] = clues[i];
		vu[1][n] = clues[i + 4];
		vu[2][n] = clues[i + 8];
		vu[3][n] = clues[i + 12];
		i++;
		n++;
	}	
}

int	ft_boucle( char *str, int *clues, int i, int *n)
{
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (str[i] == ' ')
				i++;
			else
				return (0);
		}
		if (i % 2 == 0)
		{
			if (str[i] >= '1' && str[i] <= '4' && *n < 16)
			{
				clues[*n] = str[i] - 48;
				*n = *n + 1;
				i++;
			}
			else
				return (0);
		}
	}
	return (1);
}

int	ft_check_argv(char *str, int *clues, int vu [4][4])
{
	int	*n;
	int	i;
	int	m;

	m = 0;
	n = &m;
	i = 0;
	if (ft_boucle(str, clues, i, &m))
	{
		if (*n == 16)
		{
			if (ft_check_opposite(clues))
			{
				ft_2d_vu(clues, vu);
				return (1);
			}
		}
	}
	return (0);
}
