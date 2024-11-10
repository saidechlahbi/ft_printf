/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:57:04 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/10 18:33:56 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_putstr(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        count += write(1, str, 1);
        str++;
    }
    return (count);
}
