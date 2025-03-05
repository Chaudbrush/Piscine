/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:46:09 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/05 13:57:08 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD 10
/*
void	print_queens(char array[BOARD][BOARD])
{
	int	i;
	int	j;

	i = 0;
	while (i < BOARD)
	{
		j = 0;
		while (j < BOARD)
		{
			if (array[j][i] == 'Q')
				write(1, "[Q]", 3);
			else
				write(1, "[ ]", 3);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}
*/
void	print_queens_nb(char array[BOARD][BOARD])
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	while (i < BOARD)
	{
		j = 0;
		while (j < BOARD)
		{
			if (array[i][j] == 'Q')
			{
				nb = j + '0';
				write(1, &nb, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	is_queen_legal(char array[BOARD][BOARD], int index, int column)
{
	int	i;
	int	j;

	i = index + 1;
	while (--i >= 0)
	{
		if (array[i][column] == 'Q')
			return (0);
	}
	i = index + 1;
	j = column - 1;
	while (--i >= 0 && ++j <= 9)
	{
		if (array[i][j] == 'Q')
			return (0);
	}
	i = index + 1;
	j = column + 1;
	while (--i >= 0 && --j >= 0)
	{
		if (array[i][j] == 'Q')
			return (0);
	}
	return (1);
}

void	ft_queens(char array[BOARD][BOARD], int index)
{
	int	i;

	if (index == BOARD)
	{
		print_queens_nb(array);
		return ;
	}
	i = 0;
	while (i < BOARD)
	{
		if (is_queen_legal(array, index, i))
		{
			array[index][i] = 'Q';
			ft_queens(array, index + 1);
			array[index][i] = '1';
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	array[BOARD][BOARD];

	ft_queens(array, 0);
	return (0);
}
/*
int	main(void)
{
	ft_ten_queens_puzzle();
}*/
