/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:12:13 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/27 09:44:37 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (size / 2 > i)
	{
		tmp = tab[(size - 1) - i];
		tab[(size - 1) - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int	array[5];
	int	*tab;

	array[0] = '1';
	array[1] = '2';
	array[2] = '3';
	array[3] = '4';
	array[4] = '5';
	tab = array;
	write(1, tab, sizeof(array));
	ft_rev_int_tab(tab, sizeof(array) / sizeof(array[0]));
	write(1, " ", 1);
	write(1, tab, sizeof(array));
}*/
