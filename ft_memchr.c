/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:21:50 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/22 02:09:34 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	p;
	unsigned char	*str;

	i = 0;
	str = s;
	p = c;
	while (i < n)
	{
		if (str[i] == p)
			return (str + i);
	i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char str[] = "hello my lame is jd";
	const char s[] = "hello my lame is jd";

	printf("origine: %s\n", memchr(str, 'p', 3));
	printf("mine : %s\n", ft_memchr(str, 'p', 3));

}*/
