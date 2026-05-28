/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:15:12 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/21 16:22:21 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*cast;
	size_t	i;

	if (n == 0)
		return (str);
	i = 0;
	cast = (char *)str;
	while (i < n)
	{
		cast[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
