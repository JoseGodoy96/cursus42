/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:23:34 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/05/09 15:23:40 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lowerhex(unsigned long int n)
{
	int	count;

	count = 0;
	count += ft_convert_ex(n);
	return (count);
}

int	ft_convert_upperex(unsigned long long int n)
{
	char	*str;
	int		count;

	count = 0;
	str = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_convert_upperex(n / 16);
	write(1, &str[n % 16], 1);
	count++;
	return (count);
}

int	ft_print_upperhex(unsigned long int n)
{
	int	count;

	count = 0;
	count += ft_convert_upperex(n);
	return (count);
}
