/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cspdi_specifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:56:50 by scervell          #+#    #+#             */
/*   Updated: 2023/11/06 12:53:35 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	print_char(va_list argptr)
{
	char	c;

	c = va_arg(argptr, int);
	write(1, &c, 1);
	return (1);
}

int	print_str(va_list argptr)
{
	char	*str;
	int		len;

	str = va_arg(argptr, char *);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	print_ptr(va_list argptr)
{
	unsigned long	n;
	int				len;
	char			*str;

	n = va_arg(argptr, unsigned long);
	str = ft_itoa_base(n, 16, 0);
	len = ft_strlen(str);
	write(1, "0x", 2);
	write(1, str, len);
	free(str);
	return (len + 2);
}

int	print_int(va_list argptr)
{
	int		n;
	int		len;
	char	*str;

	n = va_arg(argptr, int);
	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		len += 11;
	}
	else
	{
		if (n < 0)
		{
			ft_putcharacter_length('-', &len);
			n = (unsigned int)(-n);
		}
		str = ft_itoa_base(n, 10, 0);
		len += ft_strlen(str);
		write(1, str, len);
		free(str);
	}
	return (len);
}
