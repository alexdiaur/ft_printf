/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:01:09 by fdiaz             #+#    #+#             */
/*   Updated: 2023/03/20 13:32:55 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
