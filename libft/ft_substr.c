/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:47:51 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/30 19:47:13 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_asigspace(char const *s, unsigned int start, size_t len, char *a)
{
	size_t	i;
	size_t	j;

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	total;
	size_t	size;

	total = ft_strlen(s);
	if (total < len)
		size = total;
	else
		size = len;
	a = (char *)malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	if (size == 0)
	{
		a[0] = '\0';
		return (a);
	}
	ft_asigspace(s, start, len, a);
	return (a);
}
