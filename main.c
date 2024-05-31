/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:39:40 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/31 10:42:44 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// argv[1]: Texte
// argv[2]: Type of variable [i: int | c: char | s: str]
// argv[3]: Variable
int	main(int argc, char *argv[])
{
	char	*param;
	int		res;

	param = argv[3];
	if (argc == 4)
	{
		if (argv[2][0] == 'c')
		{
			res = ft_printf(argv[1], param[0]);
			printf(" - %d\n", res);
			res = printf(argv[1], param[0]);
			printf(" - %d\n", res);
		}
		if (argv[2][0] == 's')
		{
			res = ft_printf(argv[1], param);
			printf(" - %d\n", res);
			res = printf(argv[1], param);
			printf(" - %d\n", res);
		}
		else if (argv[2][0] == 'i')
		{
			res = ft_printf(argv[1], ft_atoi(param));
			printf(" - %d\n", res);
			res = printf(argv[1], ft_atoi(param));
			printf(" - %d\n", res);
		}
		else if (argv[2][0] == 'n')
		{
			res = ft_printf(argv[1], NULL);
			printf(" - %d\n", res);
			res = printf(argv[1], NULL);
			printf(" - %d\n", res);
		}
	}
	return (0);
}

