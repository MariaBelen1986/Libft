/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:14:54 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/25 17:26:09 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts the initial portion of the nptring pointed to by nptr to int */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			nb = nb * 10 + nptr[i] - '0';
		else
			return (nb * sign);
		i++;
	}
	return (nb * sign);
}
/*int main(void)
{
	char nptr[] = "\t\v\f\r\n \f-06050";
	printf("%d\n", ft_atoi(nptr));
	printf("%d\n", atoi(nptr));
}*/