/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:09:05 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/21 20:19:50 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	end;

	end = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[end]);
	while (end > 0)
	{
		end--;
		if (s[end] == (unsigned char)c)
			return ((char *)&s[end]);
	}
	return (NULL);
}
