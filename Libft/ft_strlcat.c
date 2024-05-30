/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:03:56 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/24 17:56:41 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen((char *)src);
	if (siz == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (siz <= dst_len)
		return (src_len + siz);
	i = 0;
	while (dst_len + i < siz - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*src;
	char	*dest;
	int		n;
	int		res;

	if (argc == 4)
	{
		src = argv[1];
		dest = argv[2];
		n = atoi(argv[3]);

		res = ft_strlcat(dest, src, n);
		printf("ft_strlcat: %s\n", dest);
		printf("            %d\n", res);
	}
	return (0);
}
*/
