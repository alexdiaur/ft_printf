/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:08:40 by fdiaz             #+#    #+#             */
/*   Updated: 2023/03/24 19:10:50 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(char const *formatted, ...);
int	ft_putchar(char c);
int	ft_putstring(char *c);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n, int flag);
int	ft_putunsig(unsigned int n);
int	ft_putpointer(unsigned long n);

#endif