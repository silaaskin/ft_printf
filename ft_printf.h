/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:15:58 by saskin            #+#    #+#             */
/*   Updated: 2024/11/07 19:40:19 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdbool.h>
# include <unistd.h>
#include "libft/libft.h"

int     ft_format(va_list arg, char c);
bool    flag_catch(int i, const char *str);
int     ft_printf(const char *str, ...);
int     ft_putnbr(int a);
int     ft_putchar(char c);
int     ft_putstr(char *str);
int     ft_hex(unsigned int a, char c);
int     ft_unsigned(unsigned int a, char c);
int     ft_point(unsigned long a, int sign);

#endif