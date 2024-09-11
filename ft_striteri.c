/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:55:45 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/30 20:00:05 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* For each character in the string 's', apply the function 'f', using the 
 *character's index within 's' and the address of the character itself 
 *as parameters. The character can be modified if necessary */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (len--)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
