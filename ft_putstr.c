/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:57:04 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/16 16:12:07 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}

// int main ()
// {
//     int i = ft_putstr("");
//     //int i = printf("yhfdjshiwehf");
//     printf("%d\n",i);
// }