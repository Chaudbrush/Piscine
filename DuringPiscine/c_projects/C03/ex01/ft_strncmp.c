/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:29:36 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/01 14:20:52 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	string[] = "Kawabanga";

	printf("%d\n", ft_strncmp(string, "Kawabanga", 9));
	printf("%d\n", ft_strncmp(string, "KawabangaZ", 9));
	printf("%d\n", ft_strncmp(string, "KawabangaZ", 10));
	printf("%d\n", ft_strncmp(string, " KawabangaZ", 9));
}*/
