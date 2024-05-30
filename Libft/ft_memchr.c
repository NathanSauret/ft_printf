/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:03:58 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 15:45:59 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *ft_s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	s = ft_s;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%p\n", ft_memchr(argv[1], argv[2][0], atoi(argv[3])));
		printf("%p\n", memchr(argv[1], argv[2][0], atoi(argv[3])));
	}
	return (0);
}
*/
