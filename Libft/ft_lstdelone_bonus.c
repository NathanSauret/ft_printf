/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:39:31 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/27 17:29:10 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
int	ft_lstsize(t_list *ft_lst)
{
	int		len;
	t_list	*lst;

	lst = ft_lst;
	len = 1;
	while (lst->next)
	{
		lst = lst->next;
		len++;
	}
	return (len);
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

	ft_lstdelone(lst[0], free);
	if (lst[0]->content == NULL)
		printf("node1: still there...\n");
	else
		printf("node1: removed successfully!\n");
	printf("%s\n", (char *)lst[1]->content);
	return (0);
}
*/
