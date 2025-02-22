/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:59:00 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/10 09:38:12 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_catenate(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[len++] = strs[i][j++];
		}
		j = 0;
		if (i < size - 1)
		{
			while (sep[j])
			{
				dest[len++] = sep[j++];
			}
		}
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*new_string;

	i = 0;
	len = 0;
	if (size == 0)
	{
		new_string = malloc(1);
		new_string[0] = '\0';
		return (new_string);
	}
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	new_string = malloc(len + ((size - 1) * ft_strlen(sep)) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	new_string = ft_catenate(size, new_string, strs, sep);
	return (new_string);
}
/*
int	main(void)
{
	char	*array[] = {"This", "is", "the", "way"};
	char	*sep = "...";

	printf("%s\n", ft_strjoin(4, array, sep));
}*/
