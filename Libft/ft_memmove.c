/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:25:55 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/28 16:13:51 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *ft_dest, void *ft_src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	int				i;

	dest = ft_dest;
	src = ft_src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest && dest < src + n)
	{
		src += n;
		dest += n;
		while (n-- > 0)
			*--dest = *--src;
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	char	*src;
	char	dest1[500];
	char	dest2[500];
	int		n;

	if (argc == 3)
	{
		src = argv[1];
		n = atoi(argv[2]);

		ft_memmove(dest1, src, n);
		printf("ft_memmove: %s\n", dest1);

		memmove(dest2, src, n);
		printf("memmove: %s\n", dest2);
	}
	return (0);
}
*/
