/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:39:34 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/01 14:36:36 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[] = "42 School";

	printf("%d\n", ft_strcmp(string, "42 School"));
	printf("%d\n", ft_strcmp(string, "42 SchoolA"));
	printf("%d\n", ft_strcmp(string, "32 School "));
	printf("%d\n", ft_strcmp(string, "42 Scho"));
}*/
