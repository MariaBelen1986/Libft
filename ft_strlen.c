/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:25:52 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/18 17:48:35 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Calculates the length of the string pointed to by s, excluding the 
 * terminating null byte ('\0') */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
