/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:48:20 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/22 19:53:45 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_int_value(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	char_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' '
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	sign;
	int	len;

	i = 0;
	nb = 0;
	sign = 1;
	len = ft_strlen(base);
	if (len < 2 || ft_check_base(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (char_in_base(base, str[i]) && str[i])
	{
		nb = (nb * len) + (get_int_value(base, str[i]));
		i++;
	}
	return (nb * sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("   ---ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   ---2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   ---cafe", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   7fffffff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   80000000", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("   --01111111111111111111111111111111", "01"));
	printf("%d\n", ft_atoi_base("   ---10000000000000000000000000000000", "01"));
	printf("%d\n", ft_atoi_base("   ----101010", "01"));
	printf("%d\n", ft_atoi_base("   ----1", "01"));
	printf("%d\n", ft_atoi_base("   ----01", "01"));
	printf("%d\n", ft_atoi_base("   --177", "01234567"));
	printf("%d\n", ft_atoi_base("   --177", "01234567-"));
	printf("%d\n", ft_atoi_base("   --0", "01234567"));
	printf("%d\n", ft_atoi_base("   ;.;.;.", ".;"));
}*/
