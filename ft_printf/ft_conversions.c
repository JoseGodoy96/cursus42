/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <jgodoy-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:36:34 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/05/08 17:53:28 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
	while (str[i] != '\0')
	{
		ft_print_char((int)str[i]);
		count++;
		i++;
	}
	return (count);
}

//int	ft_print_pointer(void *str)
//{
//	
//}

long int	ft_print_decimal(int n)
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

//int	ft_print_base()
//{}