/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:50 by nsauret           #+#    #+#             */
/*   Updated: 2024/06/17 11:15:12 by nsauret          ###   ########.fr       */
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
		func_res_len = ft_print_pointer(va_arg(ptr, unsigned long));
	else if (*text == 'd' || *text == 'i')
		func_res_len = ft_print_int(va_arg(ptr, int));
	else if (*text == 'u')
		func_res_len = ft_print_unsigned(va_arg(ptr, unsigned int));
	else if (*text == 'x' || *text == 'X')
		func_res_len = ft_print_hex(*text, va_arg(ptr, int));
	else if (*text == '%')
	{
		ft_print_char('%');
		func_res_len = 1;
	}
	else
		return (-1);
	return (func_res_len);
}

static int	verif_pourcentage(const char *text, int var_len)
{
	int	len;

	len = 0;
	if (var_len == -1)
	{
		ft_print_char('%');
		ft_print_char(*text);
		len += 2;
	}
	else
		len += var_len;
	return (len);
}

int	ft_printf(const char *text, ...)
{
	va_list	ptr;
	int		len;
	int		var_len;

	if (!text)
		return (-1);
	len = 0;
	va_start(ptr, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			var_len = ft_choose_print(text, ptr);
			len += verif_pourcentage(text, var_len);
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
