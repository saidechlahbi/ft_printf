/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:12:08 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/09 20:24:40 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
    va_list p;

    va_start(p, str);
    while (*str)
    {
        if (*str != '%')
            ft_putchar(*str);
        if (*str == '%' && *(++str) == '%')
            write (1,"%",1);
        if (*str == '%' && *(++str) == 'c')
            ft_putchar(va_arg(p, char));
        if (*str == '%' && *(++str) == 's')
            ft_putstr(va_arg(p, char *));
        if (*str == '%' && (*(++str) == 'd' || *(++str) == 'i'))
            ft_putnbr(va_arg(p, int));
        if (*str == '%' && *(++str) == 'x')
            
        
    }
}
int main ()
{
    ft_printf(" hello world!\n");
}