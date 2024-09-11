/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:57:28 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/11 19:51:25 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for a digit (0 through 9) */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = '5';
	if (ft_isdigit(c))
		printf("%c is a digit.\n", c);
	else
		printf("%c is not a digit.\n", c);
	return (0);
} */
