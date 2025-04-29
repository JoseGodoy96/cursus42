/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:02:13 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/27 15:38:43 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	temp = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[temp] != '\0')
		temp++;
	if (i == size)
		return (size + temp);
	j = 0;
	while (src[j] != '\0' && (i + j) < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + temp);
}
