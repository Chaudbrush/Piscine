/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:32:52 by vloureir          #+#    #+#             */
/*   Updated: 2025/01/30 15:21:37 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *src);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
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
int	main(void)
{
	char	string[] = "Welcome_42_School!";
	char	buffer[19];
	int		i;

	i = ft_strlcpy(buffer, string, 19);
	printf("Copied '%s' into '%s', len is %d\n",string, buffer, i);
	i = ft_strlcpy(buffer, string, 10);
	printf("Copied '%s' into '%s', len is %d\n",string, buffer, i);
	i = ft_strlcpy(buffer, string, 1);
	printf("Copied '%s' into '%s', len is %d\n", string, buffer, i);
	i = ft_strlcpy(buffer, string, 0);
	printf("Copied '%s' into '%s', len is %d\n",string, buffer, i);
}*/
