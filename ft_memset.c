/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:05:48 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/23 15:58:40 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fills the first n bytes of the memory area pointed to by s 
 *with the constant byte c */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char )c;
		p++;
		n--;
	}
	return (s);
}
/* int	main(void)
{
	char	buffer[10];
	char	buffer2[10];
	ft_memset(buffer, 'a', sizeof(buffer));
	memset(buffer2, 'a', sizeof(buffer2));
	printf("Esta es buffer: %s\n", buffer);
	printf("Esta es buffer2: %s\n", buffer2);
} */