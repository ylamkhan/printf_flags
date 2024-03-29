/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadresse_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:48:01 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/03/16 03:50:50 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bouns.h"

int	ft_putadresse(unsigned long c)
{
	int		j;
	char	*p;

	p = "0123456789abcdef";
	j = 0;
	if (c >= 16)
	{
		j += ft_putadresse(c / 16);
		write(1, &p[c % 16], 1);
		j++;
	}
	else
	{
		write(1, "0x", 2);
		write(1, &p[c % 16], 1);
		j += 3;
	}
	return (j);
}
