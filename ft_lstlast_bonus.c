/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:43:10 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/08 20:46:54 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Return the last node of the list */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
