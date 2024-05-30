/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:23:37 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 14:39:02 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	if (siz == 0)
		return (srclen);
	i = 0;
	while (i < siz - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*src;
	char	dest1[500];
	char	dest2[500];
	int		n;
	int		res;

	if (argc == 3)
	{
		src = argv[1];
		n = atoi(argv[2]);

		res = ft_strlcpy(dest1, src, n);
		printf("ft_strlcpy: %s\n", dest1);
		printf("            %d\n", res);

		res = strlcpy(dest2, src, n);
		printf("strlcpy: %s\n", dest2);
		printf("         %d\n", res);
	}
	return (0);
}
*/
