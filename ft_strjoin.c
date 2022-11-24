/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:25:43 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/24 11:18:32 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	int		i;
	int		j;
	char	*str;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
/*
int main()
{
	char s1[100] = "hw wo";
	char s2[100] = "ipe fd204 hjj32 ";
	printf("%ld\n", ft_strlen(s1));
	char *f;
	f = ft_strjoin(s1,s2);
	printf("mine: %s\n", f);
	free(f);

}*/
