/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:27:15 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/21 21:20:11 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	while (n--)
		((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}

/*
void	*ft_test(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *srcv = (unsigned char *) src;
	unsigned char *destv = (unsigned char *) dest;
	while(i < n)
	{
		destv[i] = srcv[i];
		i++;
	}
	return (destv);

}
int main()
{
	char str[50];
	strcpy(str, "hellotherewhs");
	char dest[50];
	strcpy(dest, "gee");
	ft_memcpy(dest,str, 9);
	printf("%s",dest);

}*/
