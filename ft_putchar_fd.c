/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:41:26 by mataborr          #+#    #+#             */
/*   Updated: 2024/07/24 20:26:19 by mataborr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Send the character 'c' to the specified file descriptor */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
