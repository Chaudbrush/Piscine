/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:49:12 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/29 18:41:23 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == NULL)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		else if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*string;
	int		printer;

	string = "AAzzZZaa";
	printer = ft_str_is_alpha(string) + '0';
	write(1, &printer, 1);
}*/
