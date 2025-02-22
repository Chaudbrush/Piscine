/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 07:58:09 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/22 18:35:38 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_rec(long nb_l, int len, char *base)
{
	int	digit;

	if (nb_l == 0)
		return ;
	digit = (nb_l % len);
	ft_putnbr_rec(nb_l / len, len, base);
	write(1, &base[digit], 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] && i < len)
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb_l;

	len = ft_strlen(base);
	if (len < 2)
		return ;
	if (check_base(base, len) == 0)
		return ;
	nb_l = nbr;
	if (nb_l == 0)
		write(1, &base[0], 1);
	if (nb_l < 0)
	{
		write(1, "-", 1);
		nb_l *= -1;
	}
	ft_putnbr_rec(nb_l, len, base);
}
/*
int	main(void)
{
	ft_putnbr_base(-33254, "0123456789abcdef");
}*/
