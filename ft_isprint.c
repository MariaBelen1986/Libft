/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:23:02 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/31 18:50:28 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for any printable character including space */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = ' ';
	if (ft_isprint(c))
		printf("%c is a printable character.\n", c);
	else
		printf("%c is not a printable character.\n", c);
	return (0);
} */
