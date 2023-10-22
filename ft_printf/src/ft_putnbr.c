/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:09:35 by recozzi           #+#    #+#             */
/*   Updated: 2023/01/25 14:50:33 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned int	nb;
	int				i;
	int				len;
	char			array[11];

	i = 10;
	array[i] = 48;
	if (nbr >= 0)
		nb = nbr;
	else
		nb = -nbr;
	while (nb > 0)
	{
		array[i--] = (nb % 10) + 48;
		nb /= 10;
	}
	if (nbr < 0)
		array[i] = 45;
	else if (nbr > 0)
		i++;
	len = 11 - i;
	write(1, &array[i], len);
	return (len);
}
