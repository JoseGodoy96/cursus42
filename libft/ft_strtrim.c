/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:39:28 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/28 11:13:25 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countsize(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != set[0])
		{
			j = 0;
			while (set[j] != '\0' && (set[j] != s1[i]))
				j++;
			if (set[j] == '\0')
				counter++;
		}
		i++;
	}
	return (counter);
}

char	*ft_trim(char *a, char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		if (s1[i] != set[j])
		{
			while (set[j] != '\0' && (set[j] != s1[i]))
				j++;
			if (set[j] == '\0')
			{
				a[k] = s1[i];
				k++;
			}
		}
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	size;

	size = ft_countsize(s1, set);
	a = (char *)malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	ft_trim(a, s1, set);
	return (a);
}

int	main(void)
{
	char s1[] = "lorem ipsum dolor sit amet";
	char set[] = "l";
	char *resultado = ft_strtrim(s1, set);
	printf("%s", resultado);
	free(resultado);
	return (0);
}
