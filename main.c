/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 04:49:17 by thchin            #+#    #+#             */
/*   Updated: 2016/07/17 14:23:55 by lnogier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int	main(int ac, char **av)
{
	char	sudoku[9][9];

	if (ac != 10)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	if (get_sudoku(sudoku, av) == FALSE)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	if (resolve_sudoku(sudoku, 0) == FALSE)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	print_sudoku(sudoku);
	return (0);
}
