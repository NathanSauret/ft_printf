/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:50 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/29 16:33:57 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printf(const char *text, ...)
{
	va_list	ptr;

	va_start(ptr, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			if (*text == 'c')
				ft_print_char((char)va_arg(ptr, const char *)[0]);
			else if (*text == 's')
				ft_print_str((char *)va_arg(ptr, const char *));
			else if (*text == 'p')
				ft_print_pointer((void *)va_arg(ptr, const char *));
			else
				return (0);
		}
		else
			ft_print_char(*text);
		text++;
	}
	va_end(ptr);
	return (1);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		if (argc == 3)
			ft_printf(argv[1], argv[2]);
		else if (argc == 4)
			ft_printf(argv[1], argv[2], argv[3]);
		else if (argc == 5)
			ft_printf(argv[1], argv[2], argv[3], argv[4]);
	}
	printf("\n|%p", argv[2]);
	return (0);
}
*/
