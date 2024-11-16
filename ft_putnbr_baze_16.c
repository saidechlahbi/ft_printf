/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baze_16.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:18:19 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/16 16:11:57 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_baze_16(unsigned int n, char c)
{
	int		count;
	char	*base1;
	char	*base2;
	char	s;

	base1 = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
		count += ft_putnbr_baze_16(n / 16, c);
	if (c == 'x')
		s = base1[n % 16];
	else
		s = base2[n % 16];
	count += ft_putchar(s);
	return (count);
}

// int main ()
// {
//    int i = ft_putnbr_baze_16(0, 'x');
//     printf("\n %d \n",i);
//     printf("%x\n",0);
// }