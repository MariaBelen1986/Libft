/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:52:24 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/12 19:59:14 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Take a node 'lst' as a parameter and free the memory of its content using 
 * the 'del' function provided as a parameter, in addition to freeing the node.
 * The memory of 'next' should not be freed */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free(lst);
	}
}
