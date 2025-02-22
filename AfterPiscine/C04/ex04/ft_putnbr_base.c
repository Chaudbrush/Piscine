/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:30:02 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/22 16:44:05 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] && i < len)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
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

void	ft_rec_putnbr(long nb_l, char *base, int len)
{
	char	digit;

	if (nb_l == 0)
		return ;
	digit = (nb_l % len);
	ft_rec_putnbr((nb_l / len), base, len);
	write(1, &base[digit], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb_l;
	int		len;

	len = ft_strlen(base);
	nb_l = nbr;
	if (len < 2 || ft_check_base(base, len) == 0)
		return ;
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
	ft_rec_putnbr(nb_l, base, len);
}

int	main(void)
{
	ft_putnbr_base(127, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(127, "01");
	write(1, "\n", 1);
	ft_putnbr_base(127, "01234567");
	write(1, "\n", 1);
}
