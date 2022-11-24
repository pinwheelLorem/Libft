/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:01:38 by fgabri            #+#    #+#             */
/*   Updated: 2022/11/24 17:37:37 by fgabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	unsigned int		i;
	char				*str;

	i = -1;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i++])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}


static char	ft_add(unsigned int n, char c)
{
	if (n%2)
		return (c);
	return (c);
}

int	main()
{
	const char s[100] = "hello dear";
	char *t;
	//	char *(f)(unsigned int, char) = &ft_add;
	t = ft_strmapi(s, &ft_add);
	printf("%s\n",t);
	free(t);

}
