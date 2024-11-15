/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:12:08 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/15 13:54:38 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"



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
				count += ft_putchar('%');
			else if (*str == 'c')
				count += ft_putchar(va_arg(p, int));
			else if (*str == 's')
				count += ft_putstr(va_arg(p, char *));
			else if (*str == 'd' || *str == 'i')
				count += ft_putnbr(va_arg(p, int));
			else if (*str == 'u')
				count += ft_putnbr_unsigned(va_arg(p, int));
			else if ((*str == 'x') || (*str == 'X'))
				count += ft_putnbr_baze_16(va_arg(p, int), *str);
			else if (*str == 'p')
			{
				count += ft_putstr("0x");
				count += ft_void_hexadecimal((intptr_t)va_arg(p, void *));
			}
			else
				return (-1);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
    va_end(p);
	return (count);
}

int main ()
{
	char *c = NULL;
	int a = 332;

	int i = ft_printf("%");
	
	printf("\n%d\n", i); ///////////////// sep ////////////////
	
	int j =    printf("%");

	printf("\n%d\n", j); ///////////////// sep ////////////////

}