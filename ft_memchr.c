/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:02:48 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/18 17:46:14 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Scans the initial n bytes of the memory area pointed to by s for the first 
 * instance of c.  Both c and the bytes of the memory area pointed to by s are 
 * interpreted as unsigned char */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/* int main(void)
{
	char s[] = "Hola mundo";
	char *p1;
	char *p2;
	p1 = ft_memchr(s, 'o', 10);
	p2 = memchr(s, 'o', 10);
	printf("%s\n", p1);
	printf("%s\n", p2);
} */
