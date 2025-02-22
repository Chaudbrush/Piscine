/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:10:36 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/27 11:01:41 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	tmp;

	tmp = (a / b);
	*div = tmp;
	tmp = (a % b);
	*mod = tmp;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 14;
	b = 4;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	*div = *div + '0';
	*mod = *mod + '0';
	write(1, div, 1);
	write(1, mod, 1);
}*/
