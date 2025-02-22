/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:31:23 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/26 17:55:57 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
int	main(void)
{	
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 20;
	y = 6;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);

	*a = *a + '0';
	*b = *b + '0';
	write(1, a, 1);
	write(1, b, 1);
}
*/
