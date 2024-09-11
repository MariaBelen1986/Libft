/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:11:38 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/30 19:28:03 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* For each character in the string 's', apply the function 'f', using the 
 * character's index within 's' and the character itself as parameters. 
 * Generate a new string with the result of the successive use of 'f' */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstring;
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	newstring = malloc(sizeof(char) * (len + 1));
	if (!newstring)
		return (NULL);
	while (len--)
	{
		newstring[i] = (*f)(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
