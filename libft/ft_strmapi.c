/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:41:09 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/27 12:59:04 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(s);
	a = (char *)malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
