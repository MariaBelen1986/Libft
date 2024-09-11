/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:04:40 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/31 15:25:02 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory and returns the string that is a copy of 's1', 
 * without the characters specified in 'set' at the beginning and
 * end of the string */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	newstring = ft_substr(s1, i, j - (i - 1));
	return (newstring);
}

/* int main(void)
{
	char s[] = "aaababbabMy name is Simonabababbb";
	char s2[] = "ab";
	char *s3;

	s3 = ft_strtrim(s, s2);
	printf("%s\n", s3);
	return (0);
} */