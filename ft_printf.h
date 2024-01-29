/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:53:09 by ahamdi            #+#    #+#             */
/*   Updated: 2024/01/07 11:49:28 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_puthex_upper(unsigned int number, size_t *len);
void	ft_puthex_lower(unsigned int nbr, size_t *len);
void	ft_putptr(void *ptr, size_t *len);
void	ft_put_unsigned(unsigned int n, size_t *len);
void	ft_putchar(char c, size_t *len);
void	ft_putstr(char *s, size_t *len);
void	ft_putnbr(int n, size_t *len);
#endif
