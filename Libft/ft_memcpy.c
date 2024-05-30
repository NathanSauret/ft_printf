/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:11:09 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/28 16:14:19 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *ft_dest, const void *ft_src, size_t ft_n)
{
	char		*dest;
	const char	*src;
	int			n;
	int			i;

	dest = ft_dest;
	src = ft_src;
	n = ft_n;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*src;
	char	dest1[500] = "test";
	char	dest2[500] = "test";
	int		n;

	if (argc == 3)
	{
		n = atoi(argv[2]);
		src = argv[1];

		ft_memcpy(dest1, src, n);
		printf("ft_memcpy: %s\n", dest1);

		memcpy(dest2, src, n);
		printf("memcpy: %s\n", dest2);
	}
	return (0);
}
*/
