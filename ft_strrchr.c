/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:40:08 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/24 20:29:10 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to the last occurrence of the char c in the string s */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (last);
}
/* int main(void)
{
	char	*position;
	position = NULL;
	position = ft_strrchr("", 'o');
	printf("mi funcion: %s\n", position);
	position = strrchr("", 'o');
	printf("funcion original: %s\n", position);
	return(0);
} */