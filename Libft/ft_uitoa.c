/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:11:42 by nsauret           #+#    #+#             */
/*   Updated: 2024/06/03 11:25:37 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_size_in_str(unsigned int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_uitoa(unsigned int n)
{
	char	*number;
	int		str_len;
	int		i;

	str_len = get_int_size_in_str(n);
	number = malloc(sizeof(char) * (str_len + 1));
	if (!number)
		return (NULL);
	if (n == 0)
		number[0] = '0';
	if (n < 0)
	{
		number[0] = '-';
		n *= -1;
	}
	i = str_len - 1;
	while (n >= 1)
	{
		number[i--] = n % 10 + '0';
		n /= 10;
	}
	number[str_len] = '\0';
	return (number);
}
