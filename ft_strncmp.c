/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:10:54 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/22 01:18:39 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*s1 - *s2);
	else
		return (0);
}
/*
int	main()
{
	char str[100] = "hello bla dh bl ki bla man";
	char tr[100] = "hello bla dh bl kman";

	printf(" Orgin: %d\n", strncmp(str,tr, 20));
	printf(" Origin: %s\n", str);
	printf("mine: %d\n", ft_strncmp(str,tr,20));
	printf("mine: %s\n", str);

}*/
