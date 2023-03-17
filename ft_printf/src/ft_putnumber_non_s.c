/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber_non_s.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:55:37 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/11/14 09:07:25 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber_non_s(unsigned int c)
{
	int		j;
	char	s;

	j = 0;
	if (c >= 10)
	{
		j += ft_putnumber_non_s(c / 10);
		s = c % 10 + 48;
		write(1, &s, 1);
		j++;
	}
	else
	{
		s = c % 10 + 48;
		write(1, &s, 1);
		j++;
	}
	return (j);
}
