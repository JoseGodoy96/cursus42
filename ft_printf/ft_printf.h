/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:24:06 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/05/09 15:24:45 by jgodoy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int			ft_printf(const char *str, ...);
int			ft_print(char specifier, va_list ap);
int			ft_print_char(int c);
int			ft_print_str(char *str);
int			ft_print_decimal(long long int n);
int			ft_convert_ex(unsigned long long int n);
int			ft_print_pointer(void *str);
int			ft_print_lowerhex(unsigned long int n);
int			ft_convert_upperex(unsigned long long int n);
int			ft_print_upperhex(unsigned long int n);

#endif
