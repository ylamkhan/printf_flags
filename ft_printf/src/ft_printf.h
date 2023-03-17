/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:22:59 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/01/19 03:29:27 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *lst, ...);
int	ft_putchar(char c);
int	ft_putnumber_hex1(unsigned int c);
int	ft_putnumber_hex2(unsigned int c);
int	ft_putadresse(unsigned long c);
int	ft_putnumber_non_s(unsigned int c);
int	ft_putnumbre(int c);
int	ft_putstr(char *str);

#endif
