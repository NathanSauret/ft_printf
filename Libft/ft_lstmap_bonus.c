/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:18:00 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/28 16:13:02 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_super_del(void *test_content, t_list *new_lst, void (*del)(void *))
{
	del(test_content);
	ft_lstclear(&new_lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_lst;
	t_list	*new_lst;
	void	*test_content;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	head_lst = lst;
	new_lst = NULL;
	while (lst != NULL)
	{
		test_content = f(lst->content);
		new_node = ft_lstnew(test_content);
		if (!new_node)
			return (ft_super_del(test_content, new_lst, del));
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*
#include <stdlib.h>
#include <stdio.h>
void	*fun(void *content)
{
	char	*new_content;
	int		i;

	new_content = malloc(sizeof(char) * 12);
	i = 0;
	while (*(char *)content)
	{
		new_content[i] = *(char *)content++;
		i++;
	}
	new_content[0] = 'c';
	return ((void *)new_content);
}
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_node;

	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");

	node1->next = node2;
	node2->next = node3;

	new_node = ft_lstmap(node1, fun, free);
	printf("%s\n", (char *)new_node->content);
	printf("%s\n", (char *)new_node->next->content);
	printf("%s\n", (char *)new_node->next->next->content);

	return (0);
}
*/
