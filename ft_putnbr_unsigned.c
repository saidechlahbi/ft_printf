/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:29:48 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/10 18:35:29 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_putnbr_unsigned(unsigned int n)
{
    char    c;
    int count;

    count = 0;
    if (n == -2147483648)
    {
        write (1, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write (1, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr_unsigned(n / 10);
    c = (n % 10) + '0';
    count += write (1, &c, 1);
    return (count);
}

// int main ()
// {
//     ft_putnbr_unsigned(-10);
// }