/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:28:33 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/17 18:04:46 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to the first occurrence of the character c 
 *in the string s */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* int	main(void)
{
	char	*position;
	position = NULL;
	position = ft_strchr("Hola mundo", 'o');
	printf("mi funcion: %s\n", position);
	position = strchr("Hola mundo", 'o');
	printf("funcion original: %s\n", position);
	return(0);
} */
