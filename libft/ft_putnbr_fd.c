/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:49:31 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/27 12:58:12 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	char		c;

	number = n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	c = (number % 10) + '0';
	write(fd, &c, 1);
}
