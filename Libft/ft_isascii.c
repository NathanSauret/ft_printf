/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:57:50 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/17 17:08:28 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return 1 if c is ascii [0-127], else 0.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n%d\n", ft_isascii(argv[1][0]), isascii(argv[1][0]));
	return (0);
}
*/
