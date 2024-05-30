/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:38:09 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/17 16:59:22 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return non-zero if c is digit, else 0.
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n%d\n", ft_isdigit(argv[1][0]), isdigit(argv[1][0]));
	return (0);
}
*/
