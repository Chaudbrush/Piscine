/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:23:12 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/10 08:27:31 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_recnbr(long nb_l)
{
	int	digit;

	if (nb_l == 0)
		return ;
	digit = (nb_l % 10) + '0';
	ft_recnbr(nb_l / 10);
	write(1, &digit, 1);
}

void	ft_putnbr(int n)
{
	long	nb_l;

	nb_l = n;
	if (nb_l == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb_l < 0)
	{
		write(1, "-", 1);
		nb_l *= -1;
	}
	ft_recnbr(nb_l);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
