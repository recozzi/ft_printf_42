/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:18:08 by recozzi           #+#    #+#             */
/*   Updated: 2023/01/27 14:18:49 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_check_placeholders(va_list args, char format)
{
	int	n;

	n = 0;
	if (format == 'c')
		n = ft_putchar(va_arg(args, int));
	else if (format == 's')
		n = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		n = ft_print_pointer(va_arg(args, uintptr_t));
	else if (format == 'd' || format == 'i')
		n = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		n = ft_unsigned_nbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		n = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		n = ft_putchar('%');
	return (n);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		n;
	va_list	args;

	i = 0;
	n = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			n += ft_check_placeholders(args, str[i]);
		}
		else
		{
			ft_putchar(str[i]);
			n += 1;
		}
		i++;
	}
	va_end(args);
	return (n);
}
