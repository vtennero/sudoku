/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 04:40:20 by thchin            #+#    #+#             */
/*   Updated: 2016/07/17 05:16:15 by thchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

t_bool	check_row_col(char sudoku[9][9], char nb, int i, int j)
{
	int	k;

	k = 0;
	while (k < 9)
	{
		if (sudoku[i][k] == nb || sudoku[k][j] == nb)
			return (FALSE);
		k += 1;
	}
	return (TRUE);
}

t_bool	check_square(char sudoku[9][9], char nb, int i, int j)
{
	int	x;
	int	y;

	x = 3 * (i / 3);
	y = 3 * (j / 3);
	i = x;
	j = y;
	while (i < x + 3)
	{
		if (sudoku[i][j] == nb)
			return (FALSE);
		j += 1;
		if (j >= y + 3)
		{
			i += 1;
			j = y;
		}
	}
	return (TRUE);
}

t_bool	resolve_sudoku(char sudoku[9][9], int pos)
{
	int		i;
	int		j;
	char	nb;

	i = pos / 9;
	j = pos % 9;
	nb = '1';
	if (pos == 9 * 9)
		return (TRUE);
	if (sudoku[i][j] != '.')
		return (resolve_sudoku(sudoku, pos + 1));
	while (nb <= '9')
	{
		if (check_row_col(sudoku, nb, i, j) == TRUE &&
			check_square(sudoku, nb, i, j) == TRUE)
		{
			sudoku[i][j] = nb;
			if (resolve_sudoku(sudoku, pos + 1) == TRUE)
				return (TRUE);
		}
		nb += 1;
	}
	sudoku[i][j] = '.';
	return (FALSE);
}
