/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:00:13 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/30 19:30:20 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Concatenates two strings */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	char	*p;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstring = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!newstring)
		return (NULL);
	p = newstring;
	while (len1--)
		*p++ = *s1++;
	while (len2--)
		*p++ = *s2++;
	*p = '\0';
	return (newstring);
}
/* int	main(void)
{
	char s1[] = "Hola mundo ";
	char s2[] = "que tal?";
	char *newstring;

	newstring = ft_strjoin(s1, s2);
	printf("%s\n", newstring);
	return (0);
} */