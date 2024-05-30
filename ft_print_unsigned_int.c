/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:23:05 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 13:29:43 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned_int(unsigned int el)
{
	char	*str_el;

	str_el = ft_itoa(el);
	ft_print_str(str_el);
	free(str_el);
}
