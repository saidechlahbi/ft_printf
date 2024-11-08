/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:44:19 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/08 15:11:30 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char    check_and_write(unsigned long long int n)
{
    if (n >= 0 && n <= 9)
        return (n + '0');
    if (n == 15)
        return 'f';
    else if (n == 14)
        return 'e';
    else if (n == 13)
        return 'd';
    else if (n == 12)
        return 'c';
    else if (n == 11)
        return 'b';
    else if (n == 10)
        return 'a';
    else
        return 0;
}

void    ft_void_hexadecimal(unsigned long long int ptr)
{
    char    s;

    if (ptr > 15)
        ft_void_hexadecimal(ptr / 16);
    s = check_and_write(ptr % 16);
    write (1, &s, 1);
}

// int main ()
// {
//     float a = 54;
//     float *s;
//     s = &a;
//     write (1, "0x", 2);
//     ft_void_hexadecimal((unsigned long long int)s);
//     printf("\n");
//     printf("%p\n",s);
    
// }