/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 02:58:26 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/23 03:37:36 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	i = 0;
	j = 0;
	s1 = (char *)big;
	s2 = (char *)little;
	if (!s2[j])
		return (s1);
	while (s1[i] && i < len)
	{
		while (s2[j] && s1[i + j] && s2[j] == s1[i + j] && (i + j) < len)
			j++;
		if (!s2[j])
			return (s1 + i);
		i++;
		j = 0;
	}
	return (NULL);
}

/*
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
#include <bsd/string.h>
int	main()
{

	const char big[100] = "hello bla ju blam nk ldl blan hdi ";
	const char little[100]= "bla";

	printf("the org: %s\n", strnstr(big, little, 100));
	printf("mine: %s", ft_strnstr(big, little, 100));

}*/
