/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:48:34 by vloureir          #+#    #+#             */
/*   Updated: 2025/02/13 18:14:51 by vloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	state;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		state = 0;
		while (is_charset(str[i], charset) && str[i])
			i++;
		while (!(is_charset(str[i], charset)) && str[i])
		{
			if (state == 0)
			{
				state = 1;
				words++;
			}
			i++;
		}
	}
	return (words);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

void	ft_populate_array(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		len = 0;
		while (is_charset(str[i], charset) && str[i])
			i++;
		while (!(is_charset(str[i], charset)) && str[i])
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			array[j] = malloc(sizeof(char) * (len + 1));
			array[j] = ft_strncpy(array[j], &str[i - len], len);
		}
		j++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**array;

	word_count = ft_count_words(str, charset);
	array = malloc(sizeof(char *) * (word_count + 1));
	if (array == NULL)
		return (0);
	ft_populate_array(array, str, charset);
	array[word_count] = 0;
	return (array);
}
/*
int	main(void)
{
	char	*string = "Hellllllothis is just a regularstring";
	char	*charset = "lll ";
	char	**result;
	int		i;

	i = 0;
	result = ft_split(string, charset);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/
