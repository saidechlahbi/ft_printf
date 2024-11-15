/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:29:48 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/14 17:53:28 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putnbr_unsigned(n / 10);
	c = (n % 10) + '0';
	count += ft_putchar(c);
	return (count);
}

// int main ()
// {
// 	int i = ft_putnbr_unsigned(-5467890);
// 	printf ("\n %u \n",-5467890);
// 	printf("\n%d\n",i);
// }