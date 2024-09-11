/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:01:21 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/12 21:08:54 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterate through the list 'lst' and apply the function 'f' to the content 
 * of each node */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
