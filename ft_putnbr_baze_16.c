/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baze_16.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:18:19 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/08 14:26:00 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


static char    check_and_write(unsigned int n, char c)
{
    if (n >= 0 && n <= 9)
        return (n + '0');
    else if (c == 'x')
    {
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
    else if (c == 'X')
    {
        if (n == 15)
            return 'F';
        else if (n == 14)
            return 'E';
        else if (n == 13)
            return 'D';
        else if (n == 12)
            return 'C';
        else if (n == 11)
            return 'B';
        else if (n == 10)
            return 'A';
        else
            return 0;
    }
}
void    ft_putnbr_baze_16(unsigned int n, char c)
{
    char    s;

    if (n > 15)
        ft_putnbr_baze_16(n / 16, c);
    s = check_and_write(n % 16, c);
    write (1, &s, 1);
}

// int main ()
// {
//     ft_putnbr_baze_16(-10, 'x');
//     printf("\n");
// }