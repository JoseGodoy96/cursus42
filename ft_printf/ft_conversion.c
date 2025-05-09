/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <jgodoy-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:09:56 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/05/09 16:12:44 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_print_char((int)str[i]);
		count++;
		i++;
	}
	return (count);
}

int	ft_convert_ex(unsigned long long int n)
{
	char	*str;
	int		count;

	count = 0;
	str = "0123456789abcdef";
	if (n >= 16)
		count += ft_convert_ex(n / 16);
	write(1, &str[n % 16], 1);
	count++;
	return (count);
}

int	ft_print_pointer(void *str)
{
	int		count;

	if (str == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 2;
	write(1, "0x", 2);
	count += ft_convert_ex((unsigned long long)str);
	return (count);
}

int	ft_print_decimal(long long int n)
{
	long int	number;
	int			count;
	char		c;

	count = 0;
	number = n;
	if (number < 0)
	{
		write(1, "-", 1);
		count++;
		number = -number;
	}
	if (number >= 10)
		count += ft_print_decimal(number / 10);
	c = (number % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
