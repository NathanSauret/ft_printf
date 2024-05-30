/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:34:54 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 15:41:57 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (len <= 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
		printf("%s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
*/
