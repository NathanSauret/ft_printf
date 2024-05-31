/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:21:54 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/31 16:08:11 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_hex_len(unsigned int el)
{
	int	len;

	len = 0;
	while (el > 0)
	{
		el /= 16;
		len++;
	}
	return (len);
}

static int	ft_print_hex_helper(char type_of_hex, unsigned int el, int len)
{
	char	*res;
	char	*hex_set;
	int		i;

	res = malloc(sizeof(int) * 8);
	if (!res)
		return (0);
	if (type_of_hex == 'x')
		hex_set = "0123456789abcdef";
	else
		hex_set = "0123456789ABCDEF";
	i = 0;
	while (el > 0)
	{
		res[i] = hex_set[el % 16];
		el /= 16;
		i++;
	}
	while (i >= 0)
		ft_print_char(res[i--]);
	free(res);
	return (len);
}

int	ft_print_hex(char type_of_hex, unsigned int el)
{
	int		len;

	if (el < 0)
	{
		el = 4294967296 - el;
	}
	else if (el == 0)
	{
		ft_print_char('0');
		return (1);
	}
	len = get_hex_len(el);
	return (ft_print_hex_helper(type_of_hex, el, len));
}
