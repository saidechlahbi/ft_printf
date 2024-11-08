/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:12:08 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/08 16:17:22 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *str, ...)
{
    while (*str)
    {
        if (*str != '%')
            ft_putchar(*str);
        str++;
    }
}
int main ()
{
    ft_printf(" hello world!\n");
}