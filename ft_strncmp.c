/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:42:34 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/23 18:57:18 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares the first (at most) n bytes of s1 and s2.It returns an integer less 
 * than, equal to, or greater than zero if s1 is found,respectively, to be less 
 * than, to match, orbe greater than s2 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx] && idx < n)
		idx++;
	if (idx == n)
		return (0);
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

/* int main(void)
{
	char *s1 = "Hola mundo";
	char *s2 = "Hola mundo";

	printf("%d\n", ft_strncmp("abadefghij", "abcdefgxyz", 3));
	printf("%d\n", strncmp("abadefghij", "abcdefgxyz", 3));
} */
