/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:02:02 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/02 16:16:47 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upper(unsigned int number, size_t *len)
{
	if (number >= 16)
	{
		ft_puthex_upper(number / 16, len);
		ft_puthex_upper(number % 16, len);
	}
	else if (number < 10)
		ft_putchar('0' + number, len);
	else
		ft_putchar('A' + (number - 10), len);
}
