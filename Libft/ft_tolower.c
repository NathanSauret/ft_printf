/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:26:08 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/20 15:27:46 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%c\n", ft_tolower(argv[1][0]));
		printf("%c\n", tolower(argv[1][0]));
	}
	return (0);
}
*/
