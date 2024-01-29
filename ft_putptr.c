/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:30:55 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/06 12:59:29 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexptr(unsigned long nbr, size_t *len)
{
	if (nbr >= 16)
	{
		ft_hexptr(nbr / 16, len);
		ft_hexptr(nbr % 16, len);
	}
	else if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
		ft_putchar(nbr - 10 + 'a', len);
}

void	ft_putptr(void *ptr,	size_t *len)
{
	unsigned long	addr;

	addr = (unsigned long) ptr;
	ft_putstr("0x", len);
	ft_hexptr(addr, len);
}
