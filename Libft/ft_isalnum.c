/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:52:08 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/20 11:04:47 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return non-zero if c is alpha or digit, else 0.
int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (8);
	else if (c >= 'A' && c <= 'Z')
		return (8);
	else if (c >= '0' && c <= '9')
		return (8);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n%d\n", ft_isalnum(argv[1][0]), isalnum(argv[1][0]));
	return (0);
}
*/
