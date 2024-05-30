/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:27:15 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/22 11:38:20 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *ft_s, int c, size_t ft_n)
{
	unsigned char	*s;
	int				i;
	int				n;

	s = ft_s;
	n = ft_n;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*str;

	if (argc == 4)
	{
		str = argv[1];
		ft_memset(argv[1], argv[2][0], atoi(argv[3]));
		printf("%s\n", str);

		str = argv[1];
		memset(str, argv[2][0], atoi(argv[3]));
		printf("%s\n", str);
	}
	return (0);
}
*/
