/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:12:08 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/14 17:32:21 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list p;
	int count;

	if (!str)
		return (-1);
	count = 0;
	va_start(p, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				count += write(1,"%", 1);
			else if (*str == 'c')
				count += ft_putchar(va_arg(p, int));
			else if (*str == 's')
				count += ft_putstr(va_arg(p, char *));
			else if (*str == 'd' || *str == 'i')
				count += ft_putnbr(va_arg(p, int));
			else if (*str == 'x')
				count += ft_putnbr_baze_16(va_arg(p, int), 'x');
			else if (*str == 'X')
				count += ft_putnbr_baze_16(va_arg(p, int), 'X');
			else if (*str == 'p')
				count += ft_void_hexadecimal((intptr_t)va_arg(p, void *));
		}
		else
			count += write (1, str, 1);
		str++;
	}
	// Clean up both va_lists
	//va_end(args_copy);
    va_end(p);
	return (count);
}
int main ()
{
	char *c = NULL;
	int a = 332;
	//printf("%d\n",printf(NULL));
	//ft_printf("%s hello  %d world!\n",c , a);
	printf("%d \n",printf("%s",a));
}