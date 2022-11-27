/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:35:18 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/27 20:49:22 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = (t_list *)malloc(sizeof(t_list));
	if (!s)
		return (NULL);
	s->content = content;
	s->next = NULL;
	return (s);
}
/*
static void	ft_display(t_list *s)
{
	while (s != NULL)
	{
		printf("%d\n", *(int *)s->content);
		s = s->next;
	}
}

int main() 
{
	t_list *N;
	int a = 42;
	void *p = &a;
	N = ft_lstnew(p);
	ft_display(N);
	free(N);
}*/
