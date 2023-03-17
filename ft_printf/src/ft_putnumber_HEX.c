/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber_HEX.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:55:37 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/01/12 18:39:14 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber_hex1(unsigned int c)
{
	int		j;
	char	*p;

	p = "0123456789ABCDEF";
	j = 0;
	if (c >= 16)
	{
		j += ft_putnumber_hex1(c / 16);
		write(1, &p[c % 16], 1);
		j++;
	}
	else
	{
		write(1, &p[c % 16], 1);
		j++;
	}
	return (j);
}
