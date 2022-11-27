/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:52:22 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/27 21:35:17 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
void	ft_display(t_list *s)
{
	while (s)
	{
		printf("%d\n",*(int *)s->content);
		s = s->next;
	}
}

int main()
{
	t_list *N;
	int a = 123;
	void *p = &a;
	N = ft_lstnew(p);
	t_list *O;
	int o = 43;
	void *pt = &o;
	O = ft_lstnew(pt);
	ft_lstadd_front(&N,O);
	ft_display(N);

}*/
