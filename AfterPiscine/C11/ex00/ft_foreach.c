/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:07:45 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/01 16:42:02 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int		digit;
	long	nb_l;

	nb_l = n;
	if (nb_l < 0)
	{
		write(1, "-", 1);
		nb_l = -nb_l;
	}
	digit = nb_l % 10 + '0';
	if (nb_l >= 10)
		ft_putnbr(nb_l / 10);
	write(1, &digit, 1);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}
/*
int	main(void)
{
	int	len;
	int	array[] = {2147483647, -2147483648, 0, -500, 600, 9000, 123465789, -42};

	len = sizeof(array) / sizeof(array[0]);
	ft_foreach(array, len, ft_putnbr);
}*/
