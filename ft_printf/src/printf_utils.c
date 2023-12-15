/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:26:56 by scervell          #+#    #+#             */
/*   Updated: 2023/11/06 12:54:03 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_nbrlen_base(unsigned long n, int base)
{
	int	len;

	len = 1;
	while (n >= (unsigned long)base)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long n, int base, int is_upper)
{
	char	*str;
	int		len;
	char	*base_str;

	if (is_upper)
		base_str = "0123456789ABCDEF";
	else
		base_str = "0123456789abcdef";
	len = ft_nbrlen_base(n, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base_str[n % base];
		n /= base;
	}
	return (str);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putcharacter_length(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}
