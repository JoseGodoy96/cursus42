/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:33:36 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/28 10:51:00 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_copymatrix(char **matrix, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] != c)
		{
			matrix[i][j] = s[k];
			j++;
		}
		if (s[k] == c)
		{
			matrix[i][j] = '\0';
			j = 0;
			i++;
		}
		k++;
	}
	matrix[i][j] = '\0';
	return (matrix);
}

char	**ft_asigmatrix(char **matrix, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 1;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			matrix[i] = malloc(sizeof(char) * count);
			if (matrix[i] == NULL)
				return (NULL);
			count = 0;
			i++;
		}
		count++;
		j++;
	}
	if (count != 0)
	{
		matrix[i] = malloc(sizeof(char) * count);
		if (matrix[i] == NULL)
			return (NULL);
		i++;
	}
	matrix[i] = NULL;
	ft_copymatrix(matrix, s, c);
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	size;

	size = ft_count(s, c);
	matrix = (char **)malloc(sizeof(char *) * (size + 1));
	if (matrix == NULL)
		return (NULL);
	ft_asigmatrix(matrix, s, c);
	return (matrix);
}
