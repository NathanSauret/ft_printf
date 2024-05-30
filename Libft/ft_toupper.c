/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:19:15 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/22 11:40:34 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%c\n", ft_toupper(argv[1][0]));
		printf("%c\n", toupper(argv[1][0]));
	}
	return (0);
}
*/
