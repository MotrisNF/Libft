/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:05:13 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/21 18:52:43 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		new_len = 0;
	else if (ft_strlen(&s[start]) <= len)
		new_len = ft_strlen(&s[start]);
	else
		new_len = len;
	substr = malloc(sizeof(char) * new_len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, &s[start], new_len);
	substr[new_len] = '\0';
	return (substr);
}
