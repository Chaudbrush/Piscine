/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:26:31 by vloureir          #+#    #+#             */
/*   Updated: 2025/03/01 16:45:55 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	check_alpha(char *str)
{
	int	i;

	if (*str == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*ret_1[] = {"will", "this", "return", "one", 0};
	char	*ret_0[] = {"0123", "!@#$", "456789", "<.>", 0};

	printf("ret_1: %d\n", ft_any(ret_1, check_alpha));
	printf("ret_0: %d\n", ft_any(ret_0, check_alpha));
}*/
