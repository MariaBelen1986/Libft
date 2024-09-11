/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:57:29 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/05 20:16:25 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a new node using malloc(3). The member variable 'content' is 
 * initialized with the content of the parameter 'content'. The variable 
 * 'next' is initialized with NULL */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}
