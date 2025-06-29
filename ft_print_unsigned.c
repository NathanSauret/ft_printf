/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:23:05 by nsauret           #+#    #+#             */
/*   Updated: 2024/06/13 10:31:07 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

static int	get_unsigned_len(unsigned int el)
{
	int	len;

	if (el == 0)
		return (1);
	len = 0;
	if (el < 0)
	{
		el *= -1;
		len ++;
	}
	while (el > 0)
	{
		el /= 10;
		len++;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int el)
{
	char	*str_el;

	str_el = ft_uitoa(el);
	ft_print_str(str_el);
	free(str_el);
	return (get_unsigned_len(el));
}
