/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:10:54 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/28 16:28:39 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	else
		return (0);
}
/*
int	main()
{
	printf("mine :%d\n",ft_strncmp("testksef", "test", 6));
	printf("originr :%d\n",strncmp("testksef", "test", 6));

	printf("mine :%d\n",ft_strncmp("test\200", "test\0", 6));
	printf("originr :%d\n",strncmp("test\200", "test\0", 6));
}*/
