/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <jgodoy-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:09:01 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/05/09 16:09:05 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_print_pointer(va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_print_decimal(va_arg(ap, int));
	else if (specifier == 'i')
		count += ft_print_decimal(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_print_decimal(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_print_lowerhex(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_print_upperhex(va_arg(ap, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_print(str[i], ap);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
