/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:33:19 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/12 19:58:17 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Delete and free the given node 'lst' and all subsequent nodes, using the 
 * 'del' function and free.
 * In the end, the pointer to the list should be NULL */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}
