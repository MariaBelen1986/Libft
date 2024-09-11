/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:01:00 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/25 17:39:43 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Locates the first occurrence	of the null-terminated string little in the 
 * null-terminated string big */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0' || big == little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	s1[] = "Paren el mundo que me quiero bajar";
	char	s2[] = "que";
	char	*resultado;
	char	*resultado2;

	resultado = ft_strnstr("abcdefgh", "abc", 2);
	resultado2 = strnstr("abcdefgh", "abc", 2);
	printf("%s\n", resultado);
	printf("%s\n", resultado2);
}*/