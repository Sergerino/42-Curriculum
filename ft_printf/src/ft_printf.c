/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:17:25 by scervell          #+#    #+#             */
/*   Updated: 2023/11/06 12:40:52 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		i;
	int		count;

	va_start(argptr, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_formats(argptr, str[i]);
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(argptr);
	return (count);
}

int	ft_formats(va_list argptr, const char format)
{
	if (format == 'c')
		return (print_char(argptr));
	else if (format == 's')
		return (print_str(argptr));
	else if (format == 'p')
		return (print_ptr(argptr));
	else if (format == 'd' || format == 'i')
		return (print_int(argptr));
	else if (format == 'u')
		return (print_unsigned(argptr));
	else if (format == 'x')
		return (print_hex(argptr, 0));
	else if (format == 'X')
		return (print_hex(argptr, 1));
	else if (format == '%')
		return (print_percent());
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
