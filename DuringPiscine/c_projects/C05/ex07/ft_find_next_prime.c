/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:50:35 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/04 09:27:25 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	validation;

	validation = 0;
	while (validation - 1)
	{
		validation = 0;
		i = 2;
		while (i <= nb)
		{
			if (nb % i == 0)
			{
				validation++;
				if (validation == 2)
					break ;
			}
			i++;
		}
		nb++;
	}
	return (nb - 1);
}
/*
int	main(void)
{
	int	i;

	i = ft_find_next_prime(9);
	printf("%d\n", i);
	i = ft_find_next_prime(7);
	printf("%d\n", i);
	i = ft_find_next_prime(5);
	printf("%d\n", i);
	i = ft_find_next_prime(100);
	printf("%d\n", i);
	i = ft_find_next_prime(256);
	printf("%d\n", i);
	i = ft_find_next_prime(99078);
	printf("%d\n", i);
	i = ft_find_next_prime(0);
	printf("%d\n", i);
	i = ft_find_next_prime(1);
	printf("%d\n", i);
	i = ft_find_next_prime(-1);
	printf("%d\n", i);
}*/
