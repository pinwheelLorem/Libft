/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 22:14:22 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/27 23:40:42 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*N;
	if (lst == NULL)
		return (NULL);
	N = lst;
	while (N->next != NULL)
		N = N->next;
	return (N);
}
*/

t_list	*ft_lstlast(t_list *lst)
{
	int	size;
	int	i;

	i = 0;
	if (lst == NULL)
		return (NULL);
	size = ft_lstsize(lst);
	while (++i < size)
		lst = lst->next;
	return (lst);
}
/*
t_list	*ft_lstlast(t_list *lst)
{	
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}


static void display(t_list *begin_list)
{
    while(begin_list != NULL)
    {
      printf("%d\n", *(int *)begin_list->content);
      begin_list = begin_list->next;
    }
}
static t_list *ft_create_elem(void *content)
{
	t_list* new_node;

	new_node = (t_list*)malloc(sizeof(t_list));
	if(new_node)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
int main()
{
  t_list *head;
  int a = 1;
  int b = 2;
  int c = 42;
  void* ptr = &a;
  void* pt = &b;
  void* p = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = ft_create_elem(ptr); please rememeber to allocate the struct 
 				assign it to a function or value!!
  head->next = ft_create_elem(pt);
  head->next->next = ft_create_elem(p);
  display(head);
  display(ft_lstlast(head));
  display(ft_list_last(head));
  return 0;
}*/
