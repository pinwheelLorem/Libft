/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:11:19 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/21 21:26:11 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;

	src1 = src;
	if (dest < src)
	{
		dest1 = dest;
		while (n--)
			*dest1++ = *src1++;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main()
{
    char str[100] = "Learningisfun";
    char first[200] = "Learningisfun";
    char second[3] = "abc";
    char third[3] = "abc";
    printf("Original string :%s\n ", str);
 
       // when overlap happens then it just ignore it
    memcpy(second, str, 10);
    printf("memcpy overlap : %s\n", second);
  
    // when overlap it start from first position
   ft_memmove(third + 8, first, 10);
    printf("memmove overlap : %s\n ", third);
  
    return 0;
}*/
