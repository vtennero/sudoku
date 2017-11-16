/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 01:57:14 by thchin            #+#    #+#             */
/*   Updated: 2016/07/17 09:33:17 by thchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i += 1;
	return (i);
}

t_bool	get_sudoku(char sudoku[9][9], char **av)
{
	int	i;
	int	j;
	int	nb;

	i = 1;
	j = 0;
	nb = 0;
	while (i <= 9)
	{
		if (av[i][j] > '0' && av[i][j] <= '9')
			nb += 1;
		else if (av[i][j] != '.' || ft_strlen(av[i]) != 9)
			return (FALSE);
		sudoku[i - 1][j] = av[i][j];
		j += 1;
		if (j >= 9)
		{
			i += 1;
			j = 0;
		}
	}
	if (nb < 17)
		return (FALSE);
	return (TRUE);
}
