/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:14:35 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/24 11:30:12 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	keke;

	keke = 'z';
	while (keke > 'a' - 1)
	{
		write(1, &keke, 1);
		keke--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
