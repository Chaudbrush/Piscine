/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:30:48 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/01 14:31:57 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size < len_dest + 1)
		return (len_src + size);
	while (src[i] && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>

int main(void)
{
	char	dest[14] = "I am ";
	char	src[] = "a string";
	unsigned int size = sizeof(dest);
	int		i;

	i = ft_strlcat(dest, src, size);
	printf("Resulting String %s\n", dest);
	printf("Total Length: %d\n", i);
}*/
