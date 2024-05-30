/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:26:06 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/17 16:59:04 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return non-zero if c is alpha, else 0.
int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1024);
	else if (c >= 'A' && c <= 'Z')
		return (1024);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n%d\n", ft_isalpha(argv[1][0]), isalpha(argv[1][0]));
	return (0);
}
*/
