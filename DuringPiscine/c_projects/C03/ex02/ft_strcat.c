/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:59:17 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/01 14:35:54 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

unsigned int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <unistd.h>

int	main(void)
{
	char	dest[30] = "Welcome to";
	int		i;

	i = 0;
	ft_strcat(dest, " the jungle");
	write(1, dest, 21);
	write(1, "\n", 1);
	ft_strcat(dest, " 42School");
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
}*/
