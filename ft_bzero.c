/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:13:57 by mataborr          #+#    #+#             */
/*   Updated: 2024/08/01 17:47:09 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Erases  the data in the n bytes of the memory starting at the location 
   pointed to by s, by writing zeros (bytes containing '\0') to that area */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int	main(void)
{
	char	s[10] = "Hola mundo";
	char	s2[10] = "Hola mundo";
	ft_bzero(s, 3);
	bzero(s2, 3);

	printf("%s\n", s);
	printf("%s\n", s2);
}*/