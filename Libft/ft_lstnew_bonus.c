/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:48:08 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/24 14:42:03 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	t_list	*node;

	if (argc == 2)
	{
		node = ft_lstnew(argv[1]);
		printf("content: %s\n", (char *)node->content);
		printf("next: %s\n", (char *)node->next);
		free (node);
	}
	return (0);
}
*/
