/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:07 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/31 18:23:04 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Generate a string that represents the integer value received
 *as an argument. Negative numbers should be handled */

#include "libft.h"

static	size_t	ft_intlen(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;
	int		is_negative;

	nbr = n;
	len = ft_intlen(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	str = (char *)malloc(sizeof(char) * (len + is_negative + 1));
	if (!str)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	str[len + is_negative] = '\0';
	while (len-- > 0)
	{
		str[len + is_negative] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
/* int main(void)
{
	printf("%s\n", ft_itoa(156));
} */