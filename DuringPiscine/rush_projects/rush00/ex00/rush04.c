/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:11:55 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/26 17:05:44 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);

void	top_and_bottom(int x, char c, char v)
{
	int	i;

	i = x;
	while (x > 0)
	{
		if (x == i)
			ft_putchar(c);
		else if (x == 1)
			ft_putchar(v);
		else
			ft_putchar('B');
		x = x - 1;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	i;	

	if (x <= 0 || y <= 0 || (x > 1600 || y > 400))
		return ;
	i = x;
	top_and_bottom(x, 'A', 'C');
	if (y > 2)
	{
		while (y - 2 > 0)
		{
			x = i;
			while (x > 0)
			{
				if (x == i || x == 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
				x--;
			}
			write(1, "\n", 1);
			y--;
		}
	}
	if (y > 1)
		top_and_bottom(i, 'C', 'A');
}
