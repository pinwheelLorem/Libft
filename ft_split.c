/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:50:35 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/24 11:24:53 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*we use conitue bcz we don't want to reincrement the i ag
  * ain after the if, so it will go direclty to while 
  * Also we free all the tab if it exist at least one element which the 
  * Malloc failed ==> !t[i] == TRUE */
#include "libft.h"

static char	**ft_free_tab(char **t)
{
	size_t	i;

	i = -1;
	while (t[++i])
		free(t[i]);
	free(t);
	return (t);
}

static size_t	ft_count_str(char const *s, char c)
{
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	if (!s[i])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			sum++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		sum++;
	return (sum);
}

static void	ft_next_str(char **s, size_t *len, char c)
{
	size_t	i;

	i = 0;
	*s += *len;
	*len = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[i])
	{
		if ((*s)[i] == c)
			return ;
		(*len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	len_str;
	size_t	i;
	char	**t;
	char	*str;

	i = 0;
	str = (char *)s;
	len_str = 0;
	if (!s)
		return (NULL);
	t = (char **)malloc(sizeof(char *) * (ft_count_str(s, c) + 1));
	if (!t)
		return (NULL);
	while (i < ft_count_str(s, c))
	{
		ft_next_str(&str, &len_str, c);
		t[i] = (char *)malloc(sizeof(char) * (len_str + 1));
		if (!t[i])
			return (ft_free_tab(t));
		ft_strlcpy(t[i], str, len_str + 1);
		i++;
	}
	t[i] = NULL;
	return (t);
}
/*
int	main(){

	int i = 0;
	const char s[100] = "hello this is lolo wordld let me explain";
	char c = 'l';
	size_t	len = ft_count_str(s, c);
	char **tab;
	tab = ft_split(s,c);
	printf("the lenght of tab is %ld\n", len);
	while(tab[i])
	{
		printf("the tab[%d] = %s\n", i, tab[i]);
		i++;
	}
	ft_free_tab(tab);

}*/
