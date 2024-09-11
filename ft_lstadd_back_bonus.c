/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:34:54 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/08 20:49:24 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Add the node 'new' to the end of the list 'lst' */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = *lst;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
	}
}
