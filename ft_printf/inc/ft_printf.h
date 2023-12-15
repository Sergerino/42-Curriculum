/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scervell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:40:06 by scervell          #+#    #+#             */
/*   Updated: 2023/11/06 12:31:21 by scervell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_putchar(char c);
int			ft_formats(va_list argptr, const char format);
int			ft_printf(const char *str, ...);
int			print_char(va_list argptr);
int			print_hex(va_list argptr, int is_upper);
int			print_int(va_list argptr);
int			print_percent(void);
int			print_str(va_list argptr);
int			print_unsigned(va_list argptr);
int			print_ptr(va_list argptr);
int			ft_nbrlen(int n);
char		*ft_itoa_base(unsigned long n, int base, int is_upper);
int			ft_strlen(const char *str);
char		*ft_itoa(int n);
void	ft_putcharacter_length(char c, int *length);

#endif
