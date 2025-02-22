/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:36:50 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/11 12:01:42 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	not_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (0);
	return (1);
}

void	print_hex(char c)
{
	int		div;
	int		mod;
	char	*hex;

	write (1, "\\", 1);
	hex = "0123456789abcdef";
	div = c / 16;
	write(1, &hex[div], 1);
	mod = c % 16;
	write(1, &hex[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (not_printable(str[i]))
			print_hex(str[i]);
		else
			write (1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou\ttu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou\177tu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou\100tu vas bien ?");
	write(1, "\n", 1);
}*/
