/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:53:29 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/10 18:42:41 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int    ft_putchar(char c);
int    ft_putnbr(int n);
int    ft_putstr(char *str);
int    ft_putnbr_baze_16(unsigned int n, char c);
int    ft_putnbr_unsigned(unsigned int n);
int    ft_void_hexadecimal(unsigned long long int ptr);

#endif