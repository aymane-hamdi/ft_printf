/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 22:02:33 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/07 11:49:29 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, size_t *len)
{
	unsigned int	i;

	i = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		ft_putchar(s[i], len);
		i++;
	}
}
