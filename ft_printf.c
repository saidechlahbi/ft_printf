/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:12:08 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/10 18:47:04 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list p;
	int count;

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
				count += ft_void_hexadecimal((unsigned long long int)va_arg(p, void *));
		}
		else
			count += write (1, str, 1);
		str++;
	}
	return (count);
}
int main ()
{
	char c[] = "hhhi";
	int a = 332;
	ft_printf("%s hello  %d world!\n",c , a);
	printf("%d\n",ft_printf("%% hello  world!\n"));
}