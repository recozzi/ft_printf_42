/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:03:48 by recozzi           #+#    #+#             */
/*   Updated: 2023/01/26 13:46:22 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_unsigned_nbr(unsigned int nbr)
{
	int				i;
	int				len;
	char			array[10];

	i = 9;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nbr > 0)
	{
		array[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	len = 10 - (++i);
	write(1, &array[i], len);
	return (len);
}
