/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:30:49 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/22 01:06:25 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s + ft_strlen(s);
	while (*s1 != (char) c)
	{
		if (s1 == s)
			return (NULL);
		s1--;
	}
	return ((char *)s1);
}

/*
char	*ft_strrchr2(const char *s, int c)
{
	while (*s || !c)
	{
		if ( *s == (char)c && !ft_strrchr(s + 1, c))
			return ((char *) s);
		s++;
	}
	return (NULL);
}

int	main()
{
	char str[100] = "hello bla dh bl ki bla man";
	char tr[100] = "hello bla dh bl ki bla man";

	printf(" Orgin: %s\n", strrchr(str,'b'));
	printf(" Origin: %s\n", str);
	printf("mine: %s\n", ft_strrchr(tr,'b'));
	printf("mine: %s\n", tr);

}*/
