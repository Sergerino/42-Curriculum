/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:43:44 by scervell          #+#    #+#             */
/*   Updated: 2023/10/29 22:59:02 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	j;
	size_t	i;

	len = 0;
	j = 0;
	i = 0;
	while (dst[i])
		i++;
	while (src[len])
		len++;
	if (i >= size)
		len += size;
	else
		len += i;
	while (src[j] != '\0' && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len);
}
