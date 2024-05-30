/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:50 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 16:05:07 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_choose_print(const char *text, va_list ptr)
{
	if (*text == 'c')
		ft_print_char(*va_arg(ptr, char *));
	else if (*text == 's')
		ft_print_str(va_arg(ptr, char *));
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
		return (0);
	return (1);
}

int	ft_printf(const char *text, ...)
{
	va_list	ptr;
	int		print_choice_int;

	va_start(ptr, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			print_choice_int = ft_choose_print(text, ptr);
			if (!print_choice_int)
			{
				ft_print_char('%');
				ft_print_char(*text);
			}
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
	char	*param;

	param = argv[2];
	if (argc == 3)
	{
		if (!ft_atoi(param))
		{
			ft_printf(argv[1], param);
			ft_print_char('\n');
			printf(argv[1], argv[2]);
		}
		else
		{
			ft_printf(argv[1], ft_atoi(param));
			ft_print_char('\n');
			printf(argv[1], ft_atoi(argv[2]));
		}
	}
	printf("\n");
	return (0);
}
*/
