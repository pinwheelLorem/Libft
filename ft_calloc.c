/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 04:32:20 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/27 20:21:03 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	p;
	void	*s;

	p = n * size;
	if (!n || !p)
		return (ft_calloc(1, 1));
	if ((p / n) != size)
		return (NULL);
	s = (void *)malloc(p);
	if (!s)
		return (NULL);
	ft_bzero(s, p);
	return (s);
}

/*
int main()
{

	int *a= ft_calloc(3,sizeof(int));
	a[0] = 1;
	a[1] = 3;
	free(a);
}*/
