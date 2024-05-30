/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:39:40 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 16:39:53 by nsauret          ###   ########.fr       */
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

	param = argv[3];
	if (argc == 4)
	{
		if (argv[2][0] == 'c')
		{
			ft_printf(argv[1], param[0]);
			ft_print_char('\n');
			printf(argv[1], param[0]);
		}
		if (argv[2][0] == 's')
		{
			ft_printf(argv[1], param);
			ft_print_char('\n');
			printf(argv[1], param);
		}
		else if (argv[2][0] == 'i')
		{
			ft_printf(argv[1], ft_atoi(param));
			ft_print_char('\n');
			printf(argv[1], ft_atoi(param));
		}
	}
	return (0);
}

