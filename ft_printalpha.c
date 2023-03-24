/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz <fdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:46:21 by fdiaz             #+#    #+#             */
/*   Updated: 2023/03/24 20:44:09 by fdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int	ft_putstring(char *c)
{
	int	len;

	if (!c)
		return (ft_putstring("(null)"));
	len = 0;
	while (c[len])
		return (ft_putchar(c[len]));
	return (len);
}
