/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:24:25 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 18:34:16 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	if ((int)n <= 0)
		return (0);
	i = 0;
	while (i < n - 1)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;
	int		n;

	if (argc == 4)
	{
		str1 = argv[1];
		str2 = argv[2];
		n = atoi(argv[3]);
		printf("%d\n", ft_memcmp(str1, str2, n));
		printf("%d\n", memcmp(str1, str2, n));
	}
	return (0);
}
*/
