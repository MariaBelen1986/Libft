/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:51:53 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/30 19:33:08 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to a new string which is a duplicate of the str s. Memory
 * for the new string is obtained with malloc, and can be freed with free.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	idx;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		dest[idx] = s[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
