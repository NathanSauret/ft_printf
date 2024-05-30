/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:39:54 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/17 18:04:32 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(char *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char	*str;

	if (argc == 3)
	{
		str = argv[1];
		ft_bzero(str, atoi(argv[2]));
		for (int i=0; i<20; i++)
			printf("%c", str[i]);
		printf("\n");

		str = argv[1];
		bzero(str, atoi(argv[2]));
		for (int i=0; i<20; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	return (0);
}
*/
