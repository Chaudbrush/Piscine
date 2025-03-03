/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:55:39 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/01 18:41:24 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_sort(int a, int b)
{
	return (a - b);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	len;
	int	sort_arr[] = {0, 0, 2, 3, 4, 5, 6, 7};
	int	unst_arr[] = {9, 4, 5, 6, 7, 8 ,9, 1};

	len = sizeof(sort_arr) / sizeof(sort_arr[0]);
	printf("sorted array: %d\n", ft_is_sort(sort_arr, len, check_sort));
	printf("unsorted array: %d\n", ft_is_sort(unst_arr, len, check_sort));
	return (0);
}*/
