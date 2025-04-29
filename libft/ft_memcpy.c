/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:47:10 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/27 15:12:30 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*b;
	unsigned char		*a;
	size_t				i;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (!a && !b)
		return (NULL);
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
