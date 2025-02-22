/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:25:59 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/08 12:17:01 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc(tab[i].size + 1);
		if (tab[i].copy == NULL)
			return (NULL);
		tab[i].copy = ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	main(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (1);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc(tab[i].size + 1);
		if (tab[i].copy == NULL)
			return (1);
		tab[i].copy = ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = 0;
	i = 0;
	while (tab[i].str != 0)
	{
		printf("string: %s\n", tab[i].str);
		printf("size: %d\n", tab[i].size);
		printf("copy: %s\n", tab[i].copy);
		i++;
	}
	return (0);
}*/
