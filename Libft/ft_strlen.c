/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:16:15 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 14:40:22 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n%lu\n", ft_strlen(argv[1]), strlen(argv[1]));
	return (0);
}
*/
