/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.ext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:29:26 by saskin            #+#    #+#             */
/*   Updated: 2024/11/07 20:13:09 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int     ft_putnbr(int a)
{
    char *p;
    int len;
    len = 0;
    p = ft_itoa(a);
    ft_putstr_fd(p,1);
    len = ft_strlen(p);
    return len;    
}
int     ft_putchar(char c)
{
    write(1,&c,1);
    return 1;
}
int     ft_putstr(char *str)
{
    if(!str)
        write(1,"(null)",6);
    ft_putstr_fd(str,1);
    return((int)ft_strlen(str)); //int'e casting sorun olabilir
}
int     ft_hex(unsigned int a, char c)
{
    int rtn;
    rtn = 0;
    if(a >= 16)
        ft_hex(a / 16, c);
    if(c == 'x')
        write(1, &"0123456789abcdef"[a % 16], 1);
    if (c == 'X')
        write(1, &"0123456789ABCDEF"[a % 16], 1);
    
    return( rtn + 1 );
}
int     ft_unsigned(unsigned int a, char c)
{
    int rtn;
    rtn = 0;
    if(a >= 10)
        ft_unsigned(a / 10,c);
    write(1, &"0123456789"[a % 10], 1);
    return(rtn + 1);
}
int     ft_point(unsigned long a, int sign)
{
    int rtn;
    rtn = 0;
    if(sign == 1)
    {
        rtn += write(1, "0x", 2);
        sign = 0;
    }
    if(a >= 16)
        ft_unsigned(a / 16, sign);
    write(1, &"0123456789abcdef"[a % 16], 1);
    return(rtn + 1);
}
