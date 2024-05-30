/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:57:52 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/22 15:04:06 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
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
int	main(int argc, char *argv[])
{
	t_list	*node;
	t_list	**lst = &node;

	if (argc == 2)
	{
		node = ft_lstnew(argv[1]);
		ft_lstadd_front(lst, node);
		printf("%s\n", (char *)lst[0]->content);
		free(node);
	}
	return (0);
}
*/
