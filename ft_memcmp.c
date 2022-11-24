/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 02:09:50 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/22 02:58:07 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Please note that the diff between strncmp and memcmp since they have the 
 * same princ[le probably, the first will stop comparing char
 * s when it reaches a nullterm but mem doesn't it iterate bytes 
 * `and not chars, check notes in libft to see the exemple */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (n--)
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
		st1++;
		st2++;
	}
	return (0);
}
/*
int main()
{
	char str1[100] = "bahkkowp";
	char str[100] = "bahkk";

	printf("strncmp: %d\n", strncmp(str1, str,6));
	printf("memcmp: %d\n", memcmp(str1, str,6));
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str,6));


}*/
