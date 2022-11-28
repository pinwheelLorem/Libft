/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:21:17 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/28 20:05:19 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
		if (s[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		n;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = (int)ft_strlen(s1);
	n = 0;
	while (s1[i] && ft_checkc(set, s1[i]))
		i++;
	while (i < j && ft_checkc(set, s1[j - 1]))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
		str[n++] = s1[i++];
	str[n] = '\0';
	return (str);
}
/*
int	main(){

	char const s1[100] = "gdaipsjh hjdskx ";
	char const set[100] = "mama hd dj";
	char *o;
	o =  ft_strtrim(s1, set);
	//printf("origin: %s\n", ft_test(s1, set));
	printf("mine: %s\n",o);
	free(o);
}*/
