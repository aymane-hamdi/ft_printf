/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:33:19 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/02 18:19:39 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_lower(unsigned int nbr, size_t *len)
{
	if (nbr >= 16)
	{
		ft_puthex_lower(nbr / 16, len);
		ft_puthex_lower(nbr % 16, len);
	}
	else if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
		ft_putchar((nbr - 10) + 'a', len);
}
