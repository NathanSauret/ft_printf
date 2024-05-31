/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:50 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/31 10:33:07 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_choose_print(const char *text, va_list ptr)
{
	int	func_res_len;

	if (*text == 'c')
		func_res_len = ft_print_char(va_arg(ptr, int));
	else if (*text == 's')
		func_res_len = ft_print_str(va_arg(ptr, char *));
	else if (*text == 'p')
		ft_print_pointer(va_arg(ptr, void *));
	else if (*text == 'd')
		ft_print_int(va_arg(ptr, int));
	else if (*text == 'i')
		ft_print_int(va_arg(ptr, int));
	else if (*text == 'u')
		ft_print_unsigned_int(va_arg(ptr, unsigned int));
	else if (*text == 'x' || *text == 'X')
		ft_print_hex(*text, va_arg(ptr, int));
	else if (*text == '%')
		ft_print_char('%');
	else
		return (-1);
	return (func_res_len);
}

int	ft_printf(const char *text, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			len += ft_choose_print(text, ptr);
			if (len == -1)
			{
				ft_print_char('%');
				ft_print_char(*text);
			}
		}
		else
		{
			ft_print_char(*text);
			len++;
		}
		text++;
	}
	va_end(ptr);
	return (len);
}
