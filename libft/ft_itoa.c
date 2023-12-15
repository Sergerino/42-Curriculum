/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:29:05 by scervell          #+#    #+#             */
/*   Updated: 2023/11/02 07:53:01 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	s;

	if (n == 0)
		return (1);
	s = 0;
	if (n < 0)
		s = 1;
	while (n)
	{
		s++;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	len = length(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	str[len] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (nb)
	{
		str[len] = ('0' + (nb % 10));
		nb = nb / 10;
		len--;
	}
	return (str);
}
