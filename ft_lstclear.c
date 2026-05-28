/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperez- <saperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:14:22 by saperez-          #+#    #+#             */
/*   Updated: 2026/05/23 12:58:34 by saperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;
	t_list	*actual;

	if (!lst || !del)
		return ;
	actual = *lst;
	while (actual != NULL)
	{
		nxt = actual->next;
		del(actual->content);
		free(actual);
		actual = nxt;
	}
	*lst = NULL;
}
