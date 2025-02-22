/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:35:01 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/22 18:35:22 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recnbr(long nb_l)
{
	int	digit;

	if (nb_l == 0)
		return ;
	digit = (nb_l % 10) + '0';
	ft_recnbr(nb_l / 10);
	ft_putchar(digit);
}

void	ft_putnbr(int n)
{
	long	nb_l;

	nb_l = n;
	if (nb_l == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb_l < 0)
	{
		ft_putchar('-');
		nb_l *= -1;
	}
	ft_recnbr(nb_l);
}
