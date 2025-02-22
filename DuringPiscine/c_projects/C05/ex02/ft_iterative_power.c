/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:48:02 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/02 13:58:23 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(2, -1));
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(7, 0));
}*/
