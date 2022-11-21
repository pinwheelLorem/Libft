/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:38:55 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/21 22:46:03 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size)
	{
		while (src[i] && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <bsd/string.h>
int main()
{
	const char src[100] = "hello my name is";
	char dst[100] = "fatima gabri";
	printf("%ld\n",strlcpy(dst,src,13));
	printf("%s\n",dst);
	//printf("%d\n",);
}*/
