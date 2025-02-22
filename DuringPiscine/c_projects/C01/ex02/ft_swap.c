/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:06:55 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/26 18:05:47 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 'C';
	y = 'h';
	a = &x;
	b = &y;
	write(1, a, 1);
	write(1, b, 1);
	ft_swap(a, b);
	write(1, a, 1);
	write(1, b, 1);
}*/
