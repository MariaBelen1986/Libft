/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:02:52 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/17 16:57:02 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for an alphanumeric character; it is equivalent to 
 *(isalpha(c) || isdigit(c)) */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = 'y';
	if (ft_isalnum(c))
		printf("%c is an alphanumeric character.\n", c);
	else
		printf("%c is not an alphanumeric character.\n", c);
	return (0);
} */
