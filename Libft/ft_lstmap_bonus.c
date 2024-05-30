/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:18:00 by nsauret           #+#    #+#             */
/*   Updated: 2024/05/30 14:03:16 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_super_del(void *test_con, t_list *lst, void (*del)(void *))
{
	del(test_con);
	ft_lstclear(&lst, del);
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
