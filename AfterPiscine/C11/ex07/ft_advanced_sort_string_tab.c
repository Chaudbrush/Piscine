/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:24:13 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/03 19:38:25 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	tab_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		size;
	char	*tmp;

	size = tab_size(tab);
	while (size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (1);
	ft_advanced_sort_string_tab(&argv[1], ft_strcmp);
	i = 1;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}*/
