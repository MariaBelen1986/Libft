/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:02:36 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/17 18:04:04 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether c is a 7-bit unsigned char value that fits into 
 *the ASCII character set */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = '/';
	if (ft_isascii(c))
		printf("%c is an ASCII character.\n", c);
	else
		printf("%c is not an ASCII character.\n", c);
	return (0);
} */
