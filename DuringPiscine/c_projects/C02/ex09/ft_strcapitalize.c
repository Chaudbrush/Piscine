/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:18:18 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/11 10:31:08 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	check_not_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

void	ft_make_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_make_lowercase(str);
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && check_not_alpha(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Welcome{to:the/jUNGLE, this'is´such [3:T5g 9fine day!";
	char	test[] = "99a";

	ft_strcapitalize(str);
	ft_putstr(ft_strcapitalize(str));
	write(1, "\n", 1);
	ft_strcapitalize(test);
	ft_putstr(ft_strcapitalize(test));
}*/
