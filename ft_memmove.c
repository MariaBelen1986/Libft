/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:59:59 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/23 15:56:02 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dest
 * The memory areas may overlap: copying takes place as though the bytes in src
 *are first copied into a temporary array that does not overlap src or dest,
 *and the bytes are then copied from the temporary array to dest */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else if (d < s)
		ft_memcpy(dest, src, n);
	return (dest);
}
