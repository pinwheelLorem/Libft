/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:57:12 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/28 19:47:45 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dest && !size)
		return (src_len);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>
int main()
{
	const char src[100] = "hello my name is";
	char dst[100] = "fatima gabri";
	printf("%ld\n",ft_strlcat(dst,src,20));
	printf("%s\n",dst);
	//printf("%d\n",);
	const char src[100] = "nyan !";
	char *dest;
	dest = (char*)0;
	printf("%ld\n", strlcat(((void*)0), "nyan !", 2));
	printf("%ld\n", ft_strlcat(dest, src, 0));
}*/
