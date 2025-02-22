/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:14:06 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/06 09:58:47 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("  -2147483648"));
	printf("%d\n", ft_atoi("--++-+-232312"));
	printf("%d\n", ft_atoi("  +-+-3277.aa"));
	printf("%d\n", ft_atoi("-54321"));
	printf("%d\n", ft_atoi("+6789"));
	printf("%d\n", ft_atoi("0000+123"));
	printf("%d\n", ft_atoi("-dhsahdekjnde"));
	printf("%d\n", ft_atoi(" - + - + - +12"));
}*/
