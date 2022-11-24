/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:07:11 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/22 00:30:16 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || !c)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[100] = "hello man";
	char tr[100] = "hello man";

	printf(" Orgin: %s\n", strchr(str,'e'));
	printf(" Origin: %s\n", str);
	printf("mine: %s\n", ft_strchr(tr,'e'));
	printf("mine: %s\n", tr);



}*/
