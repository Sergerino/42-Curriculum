/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uxX%_specifiers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:05:58 by scervell          #+#    #+#             */
/*   Updated: 2023/11/06 12:35:50 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_unsigned(va_list argptr)
{
	unsigned int	n;
	int				len;
	char			*str;

	n = va_arg(argptr, unsigned int);
	str = ft_itoa_base(n, 10, 0);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	print_hex(va_list argptr, int is_upper)
{
	unsigned int	n;
	int				len;
	char			*str;

	n = va_arg(argptr, unsigned int);
	str = ft_itoa_base(n, 16, is_upper);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
