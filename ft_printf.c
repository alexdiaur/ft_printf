/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:01:09 by fdiaz             #+#    #+#             */
/*   Updated: 2023/03/20 15:21:18 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstring(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putpointer(va_arg(args, unsigned long)));
	else if (c == 'i' || c == 'd')
		return (ft_putnumber(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsig(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, int), 1));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, int), 0));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *formatted, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, formatted);
	while (formatted[i])
	{
		if (formatted[i] == '%')
		{
			i++;
			length += ft_convert(args, formatted[i]);
		}
		else
		{	
			length++;
			write(1, &formatted[i], 1);
		}
		i++;
	}
	va_end(args);
	return (length);
}
