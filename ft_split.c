/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:31:59 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/01 16:07:28 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns an array of strings obtained by splitting 's' with the character 
'c' used as a delimiter. The array must end with NULL */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	cont;
	int	check;

	cont = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			cont++;
			check = 1;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (cont);
}

static void	*free_all(char **str, int cont)
{
	int	i;

	i = 0;
	while (i < cont)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**fill_split(char **str, char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;
	int		start;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	start = -1;
	while (i <= len)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == len) && start >= 0)
		{
			str[j] = ft_substr(s, start, i - start);
			if (str[j] == NULL)
				return (free_all(str, j));
			j++;
			start = -1;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	str = fill_split(str, s, c);
	return (str);
}
/*int main(void)
{
	char *s = "lorem ipsum dolor sit amet, 
	consectetur adipiscing elit. Sed non risus. Suspendisse";
	char **str;
	char c = ' ';
	int i = 0;

	str = ft_split(s, c);
	while (i < count_words(s, c))
	{
		printf("%s\n", str[i]);
		i++;
	}
	free_all(str, count_words(s, c));
	return (0);
}*/

/*int main(void)
{
	char *str = "Quiero ser mas fuerte que el vinagre";
	
	char **matrix = ft_split(str, ' ');
	while (*matrix)
		printf("%s\n", *matrix++);
}*/
