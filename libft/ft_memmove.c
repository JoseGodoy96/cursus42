/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:31:25 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/25 16:55:19 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				i;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (!a && !b)
		return (NULL);
	if (b < a)
	{
		i = n;
		while (i > 0)
		{
			i--;
			a[i] = b[i];
		}
	}
	else
		ft_memcpy(a, b, n);
	return (a);
}
