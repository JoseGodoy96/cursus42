/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:30:38 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/27 16:58:37 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] == big[i + j] && little[j] != '\0'
				&& (i + j) < size)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
