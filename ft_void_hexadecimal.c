/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:44:19 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/14 17:36:03 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_void_hexadecimal(intptr_t	ptr)
{
	char    s;
	char    *base1;
	int		count;

	count = 0;
	base1 = "0123456789abcdef";
	if (ptr > 15)
		count += ft_void_hexadecimal(ptr / 16);
	s = base1[ptr % 16];
	count += ft_putchar(s);
	return (count);
}

// int main ()
// {
//     float a = 54;
//     float *s;
//     s = &a;
//     write (1, "0x", 2);
//    int i =  ft_void_hexadecimal((intptr_t)s);
//     printf("\n%d\n",i);
//     printf("%p\n",s);
	
// }