/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:45:30 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/27 10:48:15 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	while (size > 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	array[5];
	int	*ptr;

	array[0] = '9';
	array[1] = '2';
	array[2] = '6';
	array[3] = '1';
	array[4] = '3';
	ptr = array;
	write(1, ptr, sizeof(array));
	ft_sort_int_tab(ptr, sizeof(array) / sizeof(array[0]));
	write(1, " ", 1);
	write(1, ptr, sizeof(array));
}*/
