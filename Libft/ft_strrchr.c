/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:39:00 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 16:23:19 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = s + i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return ((char *)ptr);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s\n", ft_strrchr(argv[1], argv[2][0]));
		printf("%s\n", strrchr(argv[1], argv[2][0]));
	}
	return (0);
}
*/
