/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:08:44 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/17 17:16:00 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return non-zero if c is printable [32-126], else 0.
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n%d\n", ft_isprint(argv[1][0]), isprint(argv[1][0]));
	return (0);
}
*/
