/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 07:50:25 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/24 11:28:50 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursion(int n)
{
	int	digit;

	if (n == 0)
		return ;
	digit = (n % 10) + '0';
	recursion(n / 10);
	write(1, &digit, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		recursion(nb);
	}
}
/*	(-2,147,483,648 < int < 2,147,483,647) Maximum int size
int	main(void)
{
	int	i;

	i = 0;
	ft_putnbr(i);
}*/
