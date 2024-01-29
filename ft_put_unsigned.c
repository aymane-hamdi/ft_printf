/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:57:22 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/02 15:22:00 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int n, size_t *len)
{
	if (n > 9)
	{
		ft_put_unsigned(n / 10, len);
		ft_put_unsigned(n % 10, len);
	}
	else
		ft_putchar(n + '0', len);
}
