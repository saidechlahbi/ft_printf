/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechlahb <sechlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:53:29 by sechlahb          #+#    #+#             */
/*   Updated: 2024/11/08 15:11:41 by sechlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c);
void    ft_putnbr(int n);
void    ft_putstr(char *str);
void    ft_putnbr_baze_16(unsigned int n, char c);
void    ft_putnbr_unsigned(unsigned int n);
void    ft_void_hexadecimal(unsigned long long int ptr);

#endif