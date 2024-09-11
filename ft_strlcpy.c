/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:12:36 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/23 18:54:41 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies up to size - 1 characters from the NUL-terminated string src to dst,
 * NUL-terminating the result */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	idx;

	if (!size)
		return (ft_strlen(src));
	idx = 0;
	while (idx < size -1 && src[idx] != '\0')
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
