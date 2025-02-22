/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:36:57 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/22 10:22:47 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '2';
	while (arr[0] <= '7')
	{
		while (arr[1] > arr[0] && arr[1] <= '8')
		{
			while (arr[2] > arr[1] && arr[2] <= '9')
			{
				write(1, arr, 3);
				if (arr[0] == '7' && arr[1] == '8')
					return ;
				write(1, ", ", 2);
				arr[2]++;
			}
			arr[1]++;
			arr[2] = arr[1] + 1;
		}
		arr[0]++;
		arr[1] = arr[0] + 1;
		arr[2] = arr[1] + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
