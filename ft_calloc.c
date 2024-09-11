/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:20:26 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/23 16:03:45 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory for an array of nmemb elements of size bytes each and 
 *returns a pointer to the allocated memory. The memory is set to zero. If nmemb
 *or size is 0, then calloc() returns either NULL,or a unique pointer value that 
 *can later be successfully passed to free() */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory_block;
	size_t	total_size;

	total_size = nmemb * size;
	memory_block = malloc(total_size);
	if (!memory_block)
		return (NULL);
	ft_bzero(memory_block, total_size);
	return (memory_block);
}
/* int	main(void)
{
	char *s;
	s = ft_calloc(10, sizeof(char));
	printf("%s\n", s);
	free(s);
} */
