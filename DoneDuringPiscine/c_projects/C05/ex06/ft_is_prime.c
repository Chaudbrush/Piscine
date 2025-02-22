/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:40:31 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/03 11:25:16 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;

	i = ft_is_prime(0) + '0';
	write(1, &i, 1);
	i = ft_is_prime(1) + '0';
	write(1, &i, 1);
	i = ft_is_prime(2) + '0';
	write(1, &i, 1);
	i = ft_is_prime(409) + '0';
	write(1, &i, 1);
	i = ft_is_prime(983) + '0';
	write(1, &i, 1);
}*/
