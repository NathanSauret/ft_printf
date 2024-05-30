/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:00:45 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 16:50:47 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "Libft/libft.h"

void	ft_print_int(int el);
int	ft_print_char(int el);
int	ft_print_str(const char *el);
void	ft_print_pointer(void *ft_el);
int	ft_printf(const char *text, ...);
void	ft_print_unsigned_int(unsigned int el);
void	ft_print_hex(char type_of_hex, int el);

#endif
