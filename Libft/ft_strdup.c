/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:14:32 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/22 11:39:01 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

static size_t	ft_strlcpy(char *dst, char *src, size_t ft_siz)
{
	int	i;
	int	siz;

	siz = ft_siz;
	i = 0;
	while (i < siz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

char	*ft_strdup(char *s)
{
	char	*dup;
	int		len;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	dup[len] = '\0';
	return (dup);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*dup1;
	char	*dup2;

	if (argc == 2)
	{
		dup1 = ft_strdup(argv[1]);
		printf("%s\n", dup1);
		free(dup1);

		dup2 = strdup(argv[1]);
		printf("%s\n", dup2);
		free (dup2);
	}
	return (0);
}
*/
