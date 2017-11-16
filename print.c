/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 04:57:36 by thchin            #+#    #+#             */
/*   Updated: 2016/07/17 05:16:46 by thchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		ft_putchar(str[i]);
		if (i < 8)
			ft_putchar(' ');
		i += 1;
	}
}

void	print_sudoku(char sudoku[9][9])
{
	int	i;

	i = 0;
	while (i < 9)
	{
		ft_putstr(sudoku[i]);
		ft_putchar('\n');
		i += 1;
	}
}
