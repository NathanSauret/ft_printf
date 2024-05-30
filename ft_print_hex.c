/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:21:54 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 16:03:38 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(char type_of_hex, int el)
{
	char	*hex_set;

	if (type_of_hex == 'x')
		hex_set = "0123456789abcdef";
	else
		hex_set = "0123456789ABCDEF";
	if (el > 0)
		ft_print_hex(type_of_hex, el / 16);
	if (el != 0)
		ft_print_char(hex_set[el % 16]);
}
