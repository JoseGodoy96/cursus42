/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:35:38 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/04/28 09:32:29 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_counter(int n)
{
	long int	counter;
	long int	value;

	value = n;
	counter = 0;
	if (value == 0)
		counter = 1;
	if (value < 0)
	{
		counter = 1;
		value = -value;
	}
	while (value > 0)
	{
		value = value / 10;
		counter = counter + 1;
	}
	return (counter);
}

char	*ft_sort(char *a)
{
	size_t	start;
	size_t	end;
	size_t	temp;

	start = 0;
	if (a[start] == '-')
		start++;
	end = (ft_strlen(a) - 1);
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	return (a);
}

char	*ft_print(char *a, int n)
{
	long int	value;
	size_t		i;

	value = n;
	i = 0;
	if (value == 0)
	{
		a[i] = '0';
		i++;
	}
	if (value < 0)
	{
		value = -value;
		a[i] = '-';
		i++;
	}
	while (value > 0)
	{
		a[i] = (value % 10) + '0';
		value = value / 10;
		i++;
	}
	a[i] = '\0';
	ft_sort(a);
	return (a);
}

char	*ft_itoa(int n)
{
	char		*a;
	size_t		size;

	size = ft_counter(n);
	a = (char *)malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	ft_print(a, n);
	return (a);
}
