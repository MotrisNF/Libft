/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 22:46:46 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/23 11:32:14 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (words);
}

static char	**ft_free_all(char **array, unsigned int index)
{
	unsigned int	counter;

	counter = 0;
	while (counter < index)
	{
		free(array[counter]);
		counter++;
	}
	free(array);
	return (NULL);
}

static char	**ft_fill_array(const char *s, char c, char **array)
{
	size_t		i;
	const char	*str;
	const char	*end;

	i = 0;
	end = s;
	while (*end)
	{
		while (*end && *end == c)
			end++;
		if (*end == '\0')
			break ;
		str = end;
		while (*end && *end != c)
			end++;
		array[i] = ft_substr(s, (unsigned int)(str - s), (size_t)(end - str));
		if (!array[i])
			return (ft_free_all(array, i));
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	members;
	char	**array;

	if (!s)
		return (NULL);
	members = ft_count_words(s, c) + 1;
	array = malloc(sizeof(char *) * members);
	if (!array)
		return (NULL);
	return (ft_fill_array(s, c, array));
}
