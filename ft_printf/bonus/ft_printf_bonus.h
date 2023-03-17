/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:22:59 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/03/16 03:53:15 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

typedef struct data
{
	int	plus;
	int	mins;
	int	largeur;
	int	precision;
	int	espace;
	int	zero;
	int	point;
	int	dyaze;
}		t_data;

int		ft_printf(const char *lst, ...);
int		ft_putchar(char c);
int		ft_putnumber_hex1(unsigned int c);
int		ft_putnumber_hex2(unsigned int c);
int		ft_putadresse(unsigned long c);
int		ft_putnumber_non_s(unsigned int c);
int		ft_putnumbre(int c);
int		ft_putstr(char *str);

#endif
