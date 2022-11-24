/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 06:12:13 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/24 11:03:35 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	int		i;
	char	*d;

	i = -1;
	len = ft_strlen(s) + 1;
	d = (char *) malloc(sizeof(char) * len);
	if (!d)
		return (NULL);
	while (s[++i])
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}

/*
int main()
{
	char s[100] = "owhfeijdsponaspdkjicn 378902 dhcjoxk ";
	char *d;
	d = ft_strdup(s);
	printf("%s_\n", d);
	free(d);
}*/
