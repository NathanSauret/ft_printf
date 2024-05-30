/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:45:09 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 14:54:58 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	if (s1[0] == '\0')
		return (-(unsigned char)s2[0]);
	if (s2[0] == '\0')
		return ((unsigned char)s1[0]);
	i = 0;
	while (i < n - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			break ;
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
		printf("%d\n", ft_strncmp(str1, str2, n));
		printf("%d\n", strncmp(str1, str2, n));
	}
	return (0);
}
*/
