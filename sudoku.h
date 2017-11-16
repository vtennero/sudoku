/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 04:52:56 by thchin            #+#    #+#             */
/*   Updated: 2016/07/17 09:33:42 by thchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define TRUE 1
# define FALSE 0

typedef int	t_bool;

int		get_sudoku(char sudoku[9][9], char **av);
int		resolve_sudoku(char sudoku[9][9], int pos);
void	print_sudoku(char sudoku[9][9]);

#endif
