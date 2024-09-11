/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:10:22 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/24 18:36:09 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares the first n bytes (each interpreted as unsigned char) 
 * of the memory areas s1 and s2 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_s1;
	const unsigned char	*byte_s2;

	byte_s1 = s1;
	byte_s2 = s2;
	while (n > 0)
	{
		if (*byte_s1 != *byte_s2)
			return (*byte_s1 - *byte_s2);
		byte_s1++;
		byte_s2++;
		n--;
	}
	return (0);
}
/* int main(void)
{
	char	s1[] = "Hola mundo";
	char	s2[] = "Hola mundo";

	printf("%d\n", ft_memcmp(s1,s2,2));
	printf("%d\n", memcmp(s1,s2,2));
} */