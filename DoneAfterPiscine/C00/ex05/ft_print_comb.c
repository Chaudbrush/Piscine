/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:39:31 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/16 16:47:31 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(char array[])
{
	int	i;

	i = 0;
	while (i < 3)
	{
		write(1, &array[i], 1);
		i++;
	}
}

void	ft_print_comb(void)
{
	char	array[3];

	array[0] = '0';
	while (array[0] <= '7')
	{
		array[1] = array[0] + 1;
		while (array[1] <= '8')
		{
			array[2] = array[1] + 1;
			while (array[2] <= '9')
			{
				ft_print_array(array);
				if (array[0] < '7')
					write(1, ", ", 2);
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
}
