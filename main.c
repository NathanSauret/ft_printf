/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:39:40 by nsauret           #+#    #+#             */
/*   Updated: 2024/06/06 14:39:04 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	c(char *argv[])
{
	int	res;

	res = ft_printf(argv[1], argv[3][0]);
	printf(" - %d\n", res);
	res = printf(argv[1], argv[3][0]);
	printf(" - %d\n", res);
}

void	s(char *argv[])
{
	int	res;

	res = ft_printf(argv[1], argv[3]);
	printf(" - %d\n", res);
	res = printf(argv[1], argv[3]);
	printf(" - %d\n", res);
}

void	d(char *argv[])
{
	int	res;

	res = ft_printf(argv[1], ft_atoi(argv[3]));
	printf(" - %d\n", res);
	res = printf(argv[1], ft_atoi(argv[3]));
	printf(" - %d\n", res);
}


void	n(char *argv[])
{
	int	res;

	res = ft_printf(argv[1], NULL);
	printf(" - %d\n", res);
	res = printf(argv[1], NULL);
	printf(" - %d\n", res);
}

// argv[1]: Texte
// argv[2]: Type of variable [i: int | c: char | s: str]
// argv[3]: Variable
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (argv[1][0] == '0')
		{
			int a = ft_printf(0);
			ft_printf("%d\n", a);
		}
	}
	else if (argc == 4)
	{
		if (argv[2][0] == 'c')
			c(argv);
		if (argv[2][0] == 's')
			s(argv);
		else if (argv[2][0] == 'd')
			d(argv);
		else if (argv[2][0] == 'n')
			n(argv);
	}
	return (0);
}
