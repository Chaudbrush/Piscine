/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:17:16 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/01 16:42:40 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_pow(int n)
{
	return (n * n);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new;

	new = malloc(sizeof(int) * length);
	if (!new)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
/*
int	main(void)
{
	int	i;
	int	len;
	int	old[] = {2, 3, 5, 7, 9, 11, 13, 17, 19};
	int	*result;

	len = sizeof(old) / sizeof(old[0]);
	result = ft_map(old, len, ft_pow);
	i = 0;
	while (i < len)
	{
		printf("old values: %d\n", old[i]);
		printf("power values: %d\n", result[i]);
		i++;
	}
}*/
