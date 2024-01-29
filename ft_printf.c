/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:53:50 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/06 23:23:50 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_format(va_list list, char const *str, size_t *len)
{
	if (*str == 'c')
		ft_putchar(va_arg(list, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(list, char *), len);
	else if (*str == 'p')
		ft_putptr(va_arg(list, void *), len); 
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(list, int), len);
	else if (*str == 'u')
		ft_put_unsigned(va_arg(list, unsigned int), len); 
	else if (*str == 'x')
		ft_puthex_lower(va_arg(list, unsigned int ), len); 
	else if (*str == 'X')
		ft_puthex_upper(va_arg(list, unsigned int ), len); 
	else if (*str == '%')
		ft_putchar(*str, len);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	size_t	len;

	len = 0;
	va_start(list, str);
	if (write(1, "", 0) == -1)
	{
		va_end (list);
		return (-1);
	}
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (0);
			ft_format(list, str, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	va_end(list);
	return (len);
}
