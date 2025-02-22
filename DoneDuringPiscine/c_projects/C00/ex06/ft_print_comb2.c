/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:33:01 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/25 09:23:15 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char x, char y)
{
	char	array[2];

	array[0] = x;
	array[1] = y;
	while (array[0] <= '9' && array[1] <= '9')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, " ", 1);
		array[1]++;
		if (array[1] > '9')
		{
			array[0]++;
			array[1] = '0';
		}
		write(1, array, sizeof(array));
		if (array[1] == '9')
		{
			array[0]++;
			array[1] = '0' - 1;
		}
		if (x == '9' && y == '8')
			break ;
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9' && b <= '9')
	{
		if (a == '9' && b == '9')
			break ;
		printer(a, b);
		b++;
		if (b > '9')
		{
			a++;
			b = '0';
		}
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
