/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:48:04 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/24 15:55:35 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next = node->next;
		del(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}

/*
#include <stdlib.h>
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
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	len;

	len = ft_lstsize(*lst);
	new->next = lst[len];
	lst[len] = new;
}
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	**lst = &node1;


	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");

	ft_lstadd_back(lst, node2);

	ft_lstclear(lst, free);
	if (lst[0]->content == NULL)
		printf("node1: still there...\n");
	else
		printf("node1: removed successfully!\n");
	if (lst[1]->content == NULL)
		printf("node1: still there...\n");
	else
		printf("node1: removed successfully!\n");
	return (0);
}
*/
