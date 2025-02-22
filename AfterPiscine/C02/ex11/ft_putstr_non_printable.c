/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:21:59 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/19 19:32:59 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			first_digit;
	char			second_digit;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
		{
			first_digit = str[i] / 16;
			second_digit = str[i] % 16;
			write(1, "\\", 1);
			write(1, &hex[first_digit], 1);
			write(1, &hex[second_digit], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("\n,\t,\v,\r,\f,\177");
	write(1, "\n", 1);
}*/
