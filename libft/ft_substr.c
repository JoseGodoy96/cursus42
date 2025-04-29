/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:47:51 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/23 10:31:03 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	j;

	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i == start)
		{
			while (s[i + j] != '\0' && j < len)
			{
				a[j] = s[i + j];
				j++;
			}
		}
		i++;
	}
	a[j] = '\0';
	return (a);
}
