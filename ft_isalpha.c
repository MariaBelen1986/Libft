/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:14:52 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/11 19:51:04 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for an alphabetic character; in the standard "C" locale */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = 'q';
	if (ft_isalpha(c))
		printf("%c is an alphabet.\n", c);
	else
		printf("%c is not an alphabet.\n", c);
	return (0);
} */
