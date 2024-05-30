/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:15:21 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 10:33:16 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(void *ft_el)
{
	int				i;
	unsigned long	el;
	char			*hex;
	char			*hex_value;

	hex = "0123456789abcdef";
	el = (unsigned long)ft_el;
	hex_value = malloc(sizeof(void) * 11 + 1);
	i = sizeof(void) * 11;
	while (i >= 0)
	{
		hex_value[i] = hex[el % 16];
		el /= 16;
		i--;
	}
	hex_value[sizeof(void *) * 11] = '\0';
	ft_print_str("0x");
	ft_print_str(hex_value);
	free(hex_value);
}
