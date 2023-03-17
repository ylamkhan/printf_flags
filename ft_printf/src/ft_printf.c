/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:07:16 by ylamkhan          #+#    #+#             */
/*   Updated: 2023/01/12 18:36:22 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list str, const char *lst, int i)
{
	int	number_afficher;

	number_afficher = 0;
	if (lst[i + 1] == 'c')
		number_afficher += ft_putchar(va_arg(str, int));
	else if (lst[i + 1] == 's')
		number_afficher += ft_putstr(va_arg(str, char *));
	else if (lst[i + 1] == 'X')
		number_afficher += ft_putnumber_hex1(va_arg(str, unsigned int));
	else if (lst[i + 1] == 'x')
		number_afficher += ft_putnumber_hex2(va_arg(str, unsigned int));
	else if (lst[i + 1] == 'p')
		number_afficher += ft_putadresse(va_arg(str, unsigned long));
	else if (lst[i + 1] == 'd' || lst[i + 1] == 'i')
		number_afficher += ft_putnumbre(va_arg(str, int));
	else if (lst[i + 1] == 'u')
		number_afficher += ft_putnumber_non_s(va_arg(str, unsigned int));
	else if (lst[i + 1] == '%')
		number_afficher += ft_putchar('%');
	else
		number_afficher += ft_putchar(lst[i + 1]);
	return (number_afficher);
}

int	ft_printf(const char *lst, ...)
{
	unsigned int	i;
	va_list			str;
	int				number_afficher;

	i = 0;
	number_afficher = 0;
	va_start(str, lst);
	while (lst[i])
	{
		if (lst[i] == '%')
		{
			if (!lst[i + 1])
				break ;
			number_afficher += check_format(str, lst, i);
			i += 2;
		}
		else
		{
			number_afficher += ft_putchar(lst[i]);
			i++;
		}
	}
	va_end(str);
	return (number_afficher);
}
