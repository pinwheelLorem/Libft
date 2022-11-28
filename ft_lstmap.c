/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:45:14 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/28 15:46:41 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	tmp = NULL;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
		{
			while (tmp)
			{
				node = tmp->next;
				(*del)(tmp->content);
				free(tmp);
				tmp = node;
			}
			return (NULL);
		}
		ft_lstadd_back(&tmp, node);
		lst = lst->next;
	}
	return (tmp);
}

/*
 * Ths methode have free() pbs to avoid:
t_list	*Node;
t_list	*temp;

Node = (t_list *)malloc(sizeof(t_list));
if (!f || !lst || !Node)
return (NULL);
while (lst)
{
temp = ft_lstnew((*f)(lst->content));
ft_lstadd_back(&Node,temp);
lst = lst->next;
ft_lstclear(&temp,del);
}
return (Node);*/
