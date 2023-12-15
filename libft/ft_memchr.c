/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:47:16 by scervell          #+#    #+#             */
/*   Updated: 2023/11/02 20:18:05 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (n--)
		if (*p++ == (unsigned char)c)
			return ((void *)p - 1);
	return (NULL);
}
