/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:16:36 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/18 17:47:42 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dest
 * The memory areas must not overlap.  
 * Use memmove(3) if the memory areas do overlap */

/* copia un bloque de memoria desde una ubicación (src) a otra (dst)
 *no maneja correctamente el solapamiento de memoria
 *si los bloques de memoria se solapan, el comportamiento es indefinido */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}
