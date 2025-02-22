/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:37:22 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/04 13:36:49 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	difference;

	if (min >= max)
		return (NULL);
	difference = max - min;
	array = malloc(sizeof(int) * difference);
	i = 0;
	while (i < difference)
	{
		array[i] = (min + i);
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*array;

	i = 0;
	min = 10;
	max = 35;
	array = ft_range(min, max);
	while(i < max - min)
	{
		printf("%d ", array[i]);
		i++;
	}
}*/
