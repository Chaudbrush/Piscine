/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:54:14 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/05 16:08:26 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	difference;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	difference = max - min;
	*range = malloc(sizeof(int) * difference);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < difference)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (difference);
}
/*
int	main(void)
{
	int	*range[5];
	printf("%d\n", ft_ultimate_range(range, 25, 200));
}*/
