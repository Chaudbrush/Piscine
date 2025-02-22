/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:06:24 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/16 16:45:40 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb_rec(char array[10], int index, int i, int n)
{
	if (index == n)
	{
		write(1, array, n);
		if (array[0] < '9' - (n - 1))
			write(1, ", ", 2);
		return ;
	}
	i = -1;
	while (++i <= 9)
	{
		array[index] = array[index - 1] + 1 + i;
		if (array[index] <= '9')
			ft_comb_rec(array, index + 1, i, n);
	}
}

void	ft_print_combn(int n)
{
	char	array[10];
	int		index;
	int		i;

	i = -1;
	while (++i <= 9)
	{
		index = 0;
		array[index] = i + '0';
		ft_comb_rec(array, index + 1, i, n);
	}
}

int	main(void)
{
	ft_print_combn(4);
	write(1, "\n", 1);
}
